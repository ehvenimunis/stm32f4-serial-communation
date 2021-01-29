#ifndef _ROS_smr_msgs_LedColor_h
#define _ROS_smr_msgs_LedColor_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace smr_msgs
{

  class LedColor : public ros::Msg
  {
    public:
      typedef uint8_t _red_type;
      _red_type red;
      typedef uint8_t _green_type;
      _green_type green;
      typedef uint8_t _blue_type;
      _blue_type blue;

    LedColor():
      red(0),
      green(0),
      blue(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->red >> (8 * 0)) & 0xFF;
      offset += sizeof(this->red);
      *(outbuffer + offset + 0) = (this->green >> (8 * 0)) & 0xFF;
      offset += sizeof(this->green);
      *(outbuffer + offset + 0) = (this->blue >> (8 * 0)) & 0xFF;
      offset += sizeof(this->blue);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->red =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->red);
      this->green =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->green);
      this->blue =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->blue);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/LedColor"; };
    virtual const char * getMD5() override { return "6c2dad1f01296e5a2060415602019877"; };

  };

}
#endif
