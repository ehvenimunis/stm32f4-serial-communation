#ifndef _ROS_smr_msgs_LedControl_h
#define _ROS_smr_msgs_LedControl_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "smr_msgs/LedColor.h"

namespace smr_msgs
{

  class LedControl : public ros::Msg
  {
    public:
      smr_msgs::LedColor leds[40];
      enum { LED_COUNT =  40 };

    LedControl():
      leds()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      for( uint32_t i = 0; i < 40; i++){
      offset += this->leds[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      for( uint32_t i = 0; i < 40; i++){
      offset += this->leds[i].deserialize(inbuffer + offset);
      }
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/LedControl"; };
    virtual const char * getMD5() override { return "62afb539e1df3571328b71142284eccc"; };

  };

}
#endif
