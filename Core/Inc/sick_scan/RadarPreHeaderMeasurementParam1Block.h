#ifndef _ROS_sick_scan_RadarPreHeaderMeasurementParam1Block_h
#define _ROS_sick_scan_RadarPreHeaderMeasurementParam1Block_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace sick_scan
{

  class RadarPreHeaderMeasurementParam1Block : public ros::Msg
  {
    public:
      typedef uint32_t _uiCycleDuration_type;
      _uiCycleDuration_type uiCycleDuration;
      typedef uint32_t _uiNoiseLevel_type;
      _uiNoiseLevel_type uiNoiseLevel;

    RadarPreHeaderMeasurementParam1Block():
      uiCycleDuration(0),
      uiNoiseLevel(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->uiCycleDuration >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->uiCycleDuration >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->uiCycleDuration >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->uiCycleDuration >> (8 * 3)) & 0xFF;
      offset += sizeof(this->uiCycleDuration);
      *(outbuffer + offset + 0) = (this->uiNoiseLevel >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->uiNoiseLevel >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->uiNoiseLevel >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->uiNoiseLevel >> (8 * 3)) & 0xFF;
      offset += sizeof(this->uiNoiseLevel);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->uiCycleDuration =  ((uint32_t) (*(inbuffer + offset)));
      this->uiCycleDuration |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->uiCycleDuration |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->uiCycleDuration |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->uiCycleDuration);
      this->uiNoiseLevel =  ((uint32_t) (*(inbuffer + offset)));
      this->uiNoiseLevel |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->uiNoiseLevel |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->uiNoiseLevel |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->uiNoiseLevel);
     return offset;
    }

    virtual const char * getType() override { return "sick_scan/RadarPreHeaderMeasurementParam1Block"; };
    virtual const char * getMD5() override { return "34fa13bb693fa69fead0a46da987eb62"; };

  };

}
#endif
