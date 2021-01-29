#ifndef _ROS_sick_scan_RadarPreHeaderStatusBlock_h
#define _ROS_sick_scan_RadarPreHeaderStatusBlock_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace sick_scan
{

  class RadarPreHeaderStatusBlock : public ros::Msg
  {
    public:
      typedef uint32_t _uiTelegramCount_type;
      _uiTelegramCount_type uiTelegramCount;
      typedef uint32_t _uiCycleCount_type;
      _uiCycleCount_type uiCycleCount;
      typedef uint32_t _udiSystemCountScan_type;
      _udiSystemCountScan_type udiSystemCountScan;
      typedef uint32_t _udiSystemCountTransmit_type;
      _udiSystemCountTransmit_type udiSystemCountTransmit;
      typedef uint16_t _uiInputs_type;
      _uiInputs_type uiInputs;
      typedef uint16_t _uiOutputs_type;
      _uiOutputs_type uiOutputs;

    RadarPreHeaderStatusBlock():
      uiTelegramCount(0),
      uiCycleCount(0),
      udiSystemCountScan(0),
      udiSystemCountTransmit(0),
      uiInputs(0),
      uiOutputs(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->uiTelegramCount >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->uiTelegramCount >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->uiTelegramCount >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->uiTelegramCount >> (8 * 3)) & 0xFF;
      offset += sizeof(this->uiTelegramCount);
      *(outbuffer + offset + 0) = (this->uiCycleCount >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->uiCycleCount >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->uiCycleCount >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->uiCycleCount >> (8 * 3)) & 0xFF;
      offset += sizeof(this->uiCycleCount);
      *(outbuffer + offset + 0) = (this->udiSystemCountScan >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->udiSystemCountScan >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->udiSystemCountScan >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->udiSystemCountScan >> (8 * 3)) & 0xFF;
      offset += sizeof(this->udiSystemCountScan);
      *(outbuffer + offset + 0) = (this->udiSystemCountTransmit >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->udiSystemCountTransmit >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->udiSystemCountTransmit >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->udiSystemCountTransmit >> (8 * 3)) & 0xFF;
      offset += sizeof(this->udiSystemCountTransmit);
      *(outbuffer + offset + 0) = (this->uiInputs >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->uiInputs >> (8 * 1)) & 0xFF;
      offset += sizeof(this->uiInputs);
      *(outbuffer + offset + 0) = (this->uiOutputs >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->uiOutputs >> (8 * 1)) & 0xFF;
      offset += sizeof(this->uiOutputs);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->uiTelegramCount =  ((uint32_t) (*(inbuffer + offset)));
      this->uiTelegramCount |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->uiTelegramCount |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->uiTelegramCount |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->uiTelegramCount);
      this->uiCycleCount =  ((uint32_t) (*(inbuffer + offset)));
      this->uiCycleCount |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->uiCycleCount |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->uiCycleCount |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->uiCycleCount);
      this->udiSystemCountScan =  ((uint32_t) (*(inbuffer + offset)));
      this->udiSystemCountScan |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->udiSystemCountScan |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->udiSystemCountScan |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->udiSystemCountScan);
      this->udiSystemCountTransmit =  ((uint32_t) (*(inbuffer + offset)));
      this->udiSystemCountTransmit |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->udiSystemCountTransmit |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->udiSystemCountTransmit |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->udiSystemCountTransmit);
      this->uiInputs =  ((uint16_t) (*(inbuffer + offset)));
      this->uiInputs |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->uiInputs);
      this->uiOutputs =  ((uint16_t) (*(inbuffer + offset)));
      this->uiOutputs |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->uiOutputs);
     return offset;
    }

    virtual const char * getType() override { return "sick_scan/RadarPreHeaderStatusBlock"; };
    virtual const char * getMD5() override { return "fa00447ba5857e64792524ca30b37274"; };

  };

}
#endif
