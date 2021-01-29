#ifndef _ROS_sick_scan_RadarPreHeaderEncoderBlock_h
#define _ROS_sick_scan_RadarPreHeaderEncoderBlock_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace sick_scan
{

  class RadarPreHeaderEncoderBlock : public ros::Msg
  {
    public:
      typedef uint32_t _udiEncoderPos_type;
      _udiEncoderPos_type udiEncoderPos;
      typedef int16_t _iEncoderSpeed_type;
      _iEncoderSpeed_type iEncoderSpeed;

    RadarPreHeaderEncoderBlock():
      udiEncoderPos(0),
      iEncoderSpeed(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->udiEncoderPos >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->udiEncoderPos >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->udiEncoderPos >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->udiEncoderPos >> (8 * 3)) & 0xFF;
      offset += sizeof(this->udiEncoderPos);
      union {
        int16_t real;
        uint16_t base;
      } u_iEncoderSpeed;
      u_iEncoderSpeed.real = this->iEncoderSpeed;
      *(outbuffer + offset + 0) = (u_iEncoderSpeed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_iEncoderSpeed.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->iEncoderSpeed);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->udiEncoderPos =  ((uint32_t) (*(inbuffer + offset)));
      this->udiEncoderPos |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->udiEncoderPos |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->udiEncoderPos |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->udiEncoderPos);
      union {
        int16_t real;
        uint16_t base;
      } u_iEncoderSpeed;
      u_iEncoderSpeed.base = 0;
      u_iEncoderSpeed.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_iEncoderSpeed.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->iEncoderSpeed = u_iEncoderSpeed.real;
      offset += sizeof(this->iEncoderSpeed);
     return offset;
    }

    virtual const char * getType() override { return "sick_scan/RadarPreHeaderEncoderBlock"; };
    virtual const char * getMD5() override { return "5af720e8adc927dc42f34b3cd0d0e8e9"; };

  };

}
#endif
