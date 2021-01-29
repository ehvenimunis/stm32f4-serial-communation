#ifndef _ROS_smr_msgs_SmrRestRequest_h
#define _ROS_smr_msgs_SmrRestRequest_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "std_msgs/String.h"

namespace smr_msgs
{

  class SmrRestRequest : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef std_msgs::String _json_type;
      _json_type json;
      typedef uint8_t _type_type;
      _type_type type;
      enum { NAV_HISTORY =  0 };
      enum { ORDER_STATUS =  1 };

    SmrRestRequest():
      header(),
      json(),
      type(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->json.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->type >> (8 * 0)) & 0xFF;
      offset += sizeof(this->type);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->json.deserialize(inbuffer + offset);
      this->type =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->type);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/SmrRestRequest"; };
    virtual const char * getMD5() override { return "d8438c8b6e817ac0eb4d111c657f744e"; };

  };

}
#endif
