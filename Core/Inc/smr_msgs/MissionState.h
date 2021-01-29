#ifndef _ROS_smr_msgs_MissionState_h
#define _ROS_smr_msgs_MissionState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace smr_msgs
{

  class MissionState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int8_t _state_type;
      _state_type state;
      enum { INITIALISE =  0 };
      enum { READY_FOR_MISSION =  1 };
      enum { READY_FOR_FILLING =  2 };
      enum { TARGET_FLOOR =  3 };
      enum { GOING_FOR_ELEVATOR =  4 };
      enum { WAITING_FOR_ELEVATOR =  5 };
      enum { ENTERING_ELEVATOR =  6 };
      enum { GOING_TO_TARGET_FLOOR =  7 };
      enum { ERROR =  8 };
      enum { RECOVERY =  9 };
      enum { FATAL_ERROR =  10 };

    MissionState():
      header(),
      state(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int8_t real;
        uint8_t base;
      } u_state;
      u_state.real = this->state;
      *(outbuffer + offset + 0) = (u_state.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->state);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int8_t real;
        uint8_t base;
      } u_state;
      u_state.base = 0;
      u_state.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->state = u_state.real;
      offset += sizeof(this->state);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/MissionState"; };
    virtual const char * getMD5() override { return "7b69f8991e0107715f66abe42e7a2fda"; };

  };

}
#endif
