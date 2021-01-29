#ifndef _ROS_smr_msgs_LedControlLegacy_h
#define _ROS_smr_msgs_LedControlLegacy_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "smr_msgs/LedColor.h"

namespace smr_msgs
{

  class LedControlLegacy : public ros::Msg
  {
    public:
      smr_msgs::LedColor leds[56];
      enum { LED_COUNT =  56 };

    LedControlLegacy():
      leds()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      for( uint32_t i = 0; i < 56; i++){
      offset += this->leds[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      for( uint32_t i = 0; i < 56; i++){
      offset += this->leds[i].deserialize(inbuffer + offset);
      }
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/LedControlLegacy"; };
    virtual const char * getMD5() override { return "621c6da5ecf2dd3bc0c3eb617ec85ab4"; };

  };

}
#endif
