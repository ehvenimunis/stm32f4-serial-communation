#ifndef _ROS_smr_msgs_SmrOrderStatus_h
#define _ROS_smr_msgs_SmrOrderStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace smr_msgs
{

  class SmrOrderStatus : public ros::Msg
  {
    public:
      typedef uint8_t _status_type;
      _status_type status;
      enum { PREPARING =  0 };
      enum { ON_THE_WAY =  1 };
      enum { IN_THE_ELEVATOR =  2 };
      enum { AT_THE_DOOR =  3 };
      enum { DELIVERED =  4 };
      enum { NOT_DELIVERED =  5 };

    SmrOrderStatus():
      status(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->status >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->status =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->status);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/SmrOrderStatus"; };
    virtual const char * getMD5() override { return "0e7b142e9b7e9e8631bce65e5acb53a0"; };

  };

}
#endif
