#ifndef _ROS_smr_msgs_LidControl_h
#define _ROS_smr_msgs_LidControl_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace smr_msgs
{

  class LidControl : public ros::Msg
  {
    public:
      typedef uint8_t _cmd_type;
      _cmd_type cmd;
      enum { OPEN_LID =  1 };
      enum { CLOSE_LID =  2 };
      enum { STOP_LID =  0 };
      enum { EMPTY_CMD =  36 };
      enum { LID_IS_CLOSED =  1 };
      enum { LID_IS_OPEN =  0 };
      enum { LID_IS_IN_MIDDLE =  3 };

    LidControl():
      cmd(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->cmd >> (8 * 0)) & 0xFF;
      offset += sizeof(this->cmd);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->cmd =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->cmd);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/LidControl"; };
    virtual const char * getMD5() override { return "260fa1ad914b3a6cc1327efaf35e9a20"; };

  };

}
#endif
