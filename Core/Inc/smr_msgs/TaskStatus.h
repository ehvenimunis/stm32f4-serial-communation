#ifndef _ROS_smr_msgs_TaskStatus_h
#define _ROS_smr_msgs_TaskStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace smr_msgs
{

  class TaskStatus : public ros::Msg
  {
    public:
      typedef int8_t _status_type;
      _status_type status;
      enum { WAITING =  0 };
      enum { EXECUTE =  1 };
      enum { EXECUTING =  2 };
      enum { COMPLETED =  3 };
      enum { NOT_FOUND =  -1 };
      enum { NOT_ASSIGNED =  -2 };
      enum { NO_TASK =  -3 };

    TaskStatus():
      status(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_status;
      u_status.real = this->status;
      *(outbuffer + offset + 0) = (u_status.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_status;
      u_status.base = 0;
      u_status.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->status = u_status.real;
      offset += sizeof(this->status);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/TaskStatus"; };
    virtual const char * getMD5() override { return "ab6e1173b27ff6aaeb6a8af68c709dd0"; };

  };

}
#endif
