#ifndef _ROS_smr_msgs_SingleElevatorStatus_h
#define _ROS_smr_msgs_SingleElevatorStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace smr_msgs
{

  class SingleElevatorStatus : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef bool _d0_open_type;
      _d0_open_type d0_open;
      typedef bool _d1_open_type;
      _d1_open_type d1_open;
      typedef bool _d2_open_type;
      _d2_open_type d2_open;
      typedef bool _d0_closed_type;
      _d0_closed_type d0_closed;
      typedef bool _d1_closed_type;
      _d1_closed_type d1_closed;
      typedef bool _d2_closed_type;
      _d2_closed_type d2_closed;
      typedef bool _d0_blocked_type;
      _d0_blocked_type d0_blocked;
      typedef bool _d1_blocked_type;
      _d1_blocked_type d1_blocked;
      typedef bool _d2_blocked_type;
      _d2_blocked_type d2_blocked;
      typedef int32_t _floor_type;
      _floor_type floor;

    SingleElevatorStatus():
      header(),
      d0_open(0),
      d1_open(0),
      d2_open(0),
      d0_closed(0),
      d1_closed(0),
      d2_closed(0),
      d0_blocked(0),
      d1_blocked(0),
      d2_blocked(0),
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
      } u_d0_open;
      u_d0_open.real = this->d0_open;
      *(outbuffer + offset + 0) = (u_d0_open.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->d0_open);
      union {
        bool real;
        uint8_t base;
      } u_d1_open;
      u_d1_open.real = this->d1_open;
      *(outbuffer + offset + 0) = (u_d1_open.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->d1_open);
      union {
        bool real;
        uint8_t base;
      } u_d2_open;
      u_d2_open.real = this->d2_open;
      *(outbuffer + offset + 0) = (u_d2_open.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->d2_open);
      union {
        bool real;
        uint8_t base;
      } u_d0_closed;
      u_d0_closed.real = this->d0_closed;
      *(outbuffer + offset + 0) = (u_d0_closed.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->d0_closed);
      union {
        bool real;
        uint8_t base;
      } u_d1_closed;
      u_d1_closed.real = this->d1_closed;
      *(outbuffer + offset + 0) = (u_d1_closed.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->d1_closed);
      union {
        bool real;
        uint8_t base;
      } u_d2_closed;
      u_d2_closed.real = this->d2_closed;
      *(outbuffer + offset + 0) = (u_d2_closed.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->d2_closed);
      union {
        bool real;
        uint8_t base;
      } u_d0_blocked;
      u_d0_blocked.real = this->d0_blocked;
      *(outbuffer + offset + 0) = (u_d0_blocked.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->d0_blocked);
      union {
        bool real;
        uint8_t base;
      } u_d1_blocked;
      u_d1_blocked.real = this->d1_blocked;
      *(outbuffer + offset + 0) = (u_d1_blocked.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->d1_blocked);
      union {
        bool real;
        uint8_t base;
      } u_d2_blocked;
      u_d2_blocked.real = this->d2_blocked;
      *(outbuffer + offset + 0) = (u_d2_blocked.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->d2_blocked);
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
      } u_d0_open;
      u_d0_open.base = 0;
      u_d0_open.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->d0_open = u_d0_open.real;
      offset += sizeof(this->d0_open);
      union {
        bool real;
        uint8_t base;
      } u_d1_open;
      u_d1_open.base = 0;
      u_d1_open.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->d1_open = u_d1_open.real;
      offset += sizeof(this->d1_open);
      union {
        bool real;
        uint8_t base;
      } u_d2_open;
      u_d2_open.base = 0;
      u_d2_open.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->d2_open = u_d2_open.real;
      offset += sizeof(this->d2_open);
      union {
        bool real;
        uint8_t base;
      } u_d0_closed;
      u_d0_closed.base = 0;
      u_d0_closed.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->d0_closed = u_d0_closed.real;
      offset += sizeof(this->d0_closed);
      union {
        bool real;
        uint8_t base;
      } u_d1_closed;
      u_d1_closed.base = 0;
      u_d1_closed.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->d1_closed = u_d1_closed.real;
      offset += sizeof(this->d1_closed);
      union {
        bool real;
        uint8_t base;
      } u_d2_closed;
      u_d2_closed.base = 0;
      u_d2_closed.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->d2_closed = u_d2_closed.real;
      offset += sizeof(this->d2_closed);
      union {
        bool real;
        uint8_t base;
      } u_d0_blocked;
      u_d0_blocked.base = 0;
      u_d0_blocked.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->d0_blocked = u_d0_blocked.real;
      offset += sizeof(this->d0_blocked);
      union {
        bool real;
        uint8_t base;
      } u_d1_blocked;
      u_d1_blocked.base = 0;
      u_d1_blocked.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->d1_blocked = u_d1_blocked.real;
      offset += sizeof(this->d1_blocked);
      union {
        bool real;
        uint8_t base;
      } u_d2_blocked;
      u_d2_blocked.base = 0;
      u_d2_blocked.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->d2_blocked = u_d2_blocked.real;
      offset += sizeof(this->d2_blocked);
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

    virtual const char * getType() override { return "smr_msgs/SingleElevatorStatus"; };
    virtual const char * getMD5() override { return "f2f7a1fa760898402c552b4ce65d9040"; };

  };

}
#endif
