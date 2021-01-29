#ifndef _ROS_sick_scan_SickImu_h
#define _ROS_sick_scan_SickImu_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "sensor_msgs/Imu.h"

namespace sick_scan
{

  class SickImu : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef sensor_msgs::Imu _Imu_type;
      _Imu_type Imu;
      typedef uint32_t _ticks_type;
      _ticks_type ticks;
      typedef float _quaternion_accuracy_type;
      _quaternion_accuracy_type quaternion_accuracy;
      typedef uint8_t _angular_velocity_reliability_type;
      _angular_velocity_reliability_type angular_velocity_reliability;
      typedef uint8_t _linear_acceleration_reliability_type;
      _linear_acceleration_reliability_type linear_acceleration_reliability;

    SickImu():
      header(),
      Imu(),
      ticks(0),
      quaternion_accuracy(0),
      angular_velocity_reliability(0),
      linear_acceleration_reliability(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->Imu.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->ticks >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ticks >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ticks >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ticks >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ticks);
      union {
        float real;
        uint32_t base;
      } u_quaternion_accuracy;
      u_quaternion_accuracy.real = this->quaternion_accuracy;
      *(outbuffer + offset + 0) = (u_quaternion_accuracy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_quaternion_accuracy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_quaternion_accuracy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_quaternion_accuracy.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->quaternion_accuracy);
      *(outbuffer + offset + 0) = (this->angular_velocity_reliability >> (8 * 0)) & 0xFF;
      offset += sizeof(this->angular_velocity_reliability);
      *(outbuffer + offset + 0) = (this->linear_acceleration_reliability >> (8 * 0)) & 0xFF;
      offset += sizeof(this->linear_acceleration_reliability);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->Imu.deserialize(inbuffer + offset);
      this->ticks =  ((uint32_t) (*(inbuffer + offset)));
      this->ticks |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->ticks |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->ticks |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->ticks);
      union {
        float real;
        uint32_t base;
      } u_quaternion_accuracy;
      u_quaternion_accuracy.base = 0;
      u_quaternion_accuracy.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_quaternion_accuracy.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_quaternion_accuracy.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_quaternion_accuracy.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->quaternion_accuracy = u_quaternion_accuracy.real;
      offset += sizeof(this->quaternion_accuracy);
      this->angular_velocity_reliability =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->angular_velocity_reliability);
      this->linear_acceleration_reliability =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->linear_acceleration_reliability);
     return offset;
    }

    virtual const char * getType() override { return "sick_scan/SickImu"; };
    virtual const char * getMD5() override { return "136303711a1d592affd8713883708711"; };

  };

}
#endif
