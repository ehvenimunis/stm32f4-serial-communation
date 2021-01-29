#ifndef _ROS_smr_msgs_ElevatorCmd_h
#define _ROS_smr_msgs_ElevatorCmd_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace smr_msgs
{

  class ElevatorCmd : public ros::Msg
  {
    public:
      typedef int8_t _cmd_type;
      _cmd_type cmd;
      enum { OPEN_D0 =  0 };
      enum { OPEN_D1 =  1 };
      enum { OPEN_D2 =  2 };
      enum { CLOSE_D0 =  3 };
      enum { CLOSE_D1 =  4 };
      enum { CLOSE_D2 =  5 };
      enum { GOTO_F0 =  6 };
      enum { GOTO_F1 =  7 };
      enum { GOTO_F2 =  8 };
      enum { UNKNOWN_COMMAND =  9 };

    ElevatorCmd():
      cmd(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_cmd;
      u_cmd.real = this->cmd;
      *(outbuffer + offset + 0) = (u_cmd.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->cmd);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_cmd;
      u_cmd.base = 0;
      u_cmd.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->cmd = u_cmd.real;
      offset += sizeof(this->cmd);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/ElevatorCmd"; };
    virtual const char * getMD5() override { return "43b1935ded17ef64507b58d56a322541"; };

  };

}
#endif
