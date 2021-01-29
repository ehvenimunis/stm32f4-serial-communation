#ifndef _ROS_smr_msgs_ElevatorPluginState_h
#define _ROS_smr_msgs_ElevatorPluginState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace smr_msgs
{

  class ElevatorPluginState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef bool _door_is_open_type;
      _door_is_open_type door_is_open;
      typedef int32_t _floor_type;
      _floor_type floor;

    ElevatorPluginState():
      header(),
      door_is_open(0),
      floor(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_door_is_open;
      u_door_is_open.real = this->door_is_open;
      *(outbuffer + offset + 0) = (u_door_is_open.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->door_is_open);
      union {
        int32_t real;
        uint32_t base;
      } u_floor;
      u_floor.real = this->floor;
      *(outbuffer + offset + 0) = (u_floor.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_floor.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_floor.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_floor.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->floor);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_door_is_open;
      u_door_is_open.base = 0;
      u_door_is_open.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->door_is_open = u_door_is_open.real;
      offset += sizeof(this->door_is_open);
      union {
        int32_t real;
        uint32_t base;
      } u_floor;
      u_floor.base = 0;
      u_floor.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_floor.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_floor.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_floor.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->floor = u_floor.real;
      offset += sizeof(this->floor);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/ElevatorPluginState"; };
    virtual const char * getMD5() override { return "ebb9d078880aa19f2be888658d86bd07"; };

  };

}
#endif
