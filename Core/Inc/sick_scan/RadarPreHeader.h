#ifndef _ROS_sick_scan_RadarPreHeader_h
#define _ROS_sick_scan_RadarPreHeader_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "sick_scan/RadarPreHeaderDeviceBlock.h"
#include "sick_scan/RadarPreHeaderStatusBlock.h"
#include "sick_scan/RadarPreHeaderMeasurementParam1Block.h"
#include "sick_scan/RadarPreHeaderEncoderBlock.h"

namespace sick_scan
{

  class RadarPreHeader : public ros::Msg
  {
    public:
      typedef uint16_t _uiVersionNo_type;
      _uiVersionNo_type uiVersionNo;
      typedef sick_scan::RadarPreHeaderDeviceBlock _radarPreHeaderDeviceBlock_type;
      _radarPreHeaderDeviceBlock_type radarPreHeaderDeviceBlock;
      typedef sick_scan::RadarPreHeaderStatusBlock _radarPreHeaderStatusBlock_type;
      _radarPreHeaderStatusBlock_type radarPreHeaderStatusBlock;
      typedef sick_scan::RadarPreHeaderMeasurementParam1Block _radarPreHeaderMeasurementParam1Block_type;
      _radarPreHeaderMeasurementParam1Block_type radarPreHeaderMeasurementParam1Block;
      uint32_t radarPreHeaderArrayEncoderBlock_length;
      typedef sick_scan::RadarPreHeaderEncoderBlock _radarPreHeaderArrayEncoderBlock_type;
      _radarPreHeaderArrayEncoderBlock_type st_radarPreHeaderArrayEncoderBlock;
      _radarPreHeaderArrayEncoderBlock_type * radarPreHeaderArrayEncoderBlock;

    RadarPreHeader():
      uiVersionNo(0),
      radarPreHeaderDeviceBlock(),
      radarPreHeaderStatusBlock(),
      radarPreHeaderMeasurementParam1Block(),
      radarPreHeaderArrayEncoderBlock_length(0), st_radarPreHeaderArrayEncoderBlock(), radarPreHeaderArrayEncoderBlock(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->uiVersionNo >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->uiVersionNo >> (8 * 1)) & 0xFF;
      offset += sizeof(this->uiVersionNo);
      offset += this->radarPreHeaderDeviceBlock.serialize(outbuffer + offset);
      offset += this->radarPreHeaderStatusBlock.serialize(outbuffer + offset);
      offset += this->radarPreHeaderMeasurementParam1Block.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->radarPreHeaderArrayEncoderBlock_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->radarPreHeaderArrayEncoderBlock_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->radarPreHeaderArrayEncoderBlock_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->radarPreHeaderArrayEncoderBlock_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->radarPreHeaderArrayEncoderBlock_length);
      for( uint32_t i = 0; i < radarPreHeaderArrayEncoderBlock_length; i++){
      offset += this->radarPreHeaderArrayEncoderBlock[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->uiVersionNo =  ((uint16_t) (*(inbuffer + offset)));
      this->uiVersionNo |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->uiVersionNo);
      offset += this->radarPreHeaderDeviceBlock.deserialize(inbuffer + offset);
      offset += this->radarPreHeaderStatusBlock.deserialize(inbuffer + offset);
      offset += this->radarPreHeaderMeasurementParam1Block.deserialize(inbuffer + offset);
      uint32_t radarPreHeaderArrayEncoderBlock_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      radarPreHeaderArrayEncoderBlock_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      radarPreHeaderArrayEncoderBlock_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      radarPreHeaderArrayEncoderBlock_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->radarPreHeaderArrayEncoderBlock_length);
      if(radarPreHeaderArrayEncoderBlock_lengthT > radarPreHeaderArrayEncoderBlock_length)
        this->radarPreHeaderArrayEncoderBlock = (sick_scan::RadarPreHeaderEncoderBlock*)realloc(this->radarPreHeaderArrayEncoderBlock, radarPreHeaderArrayEncoderBlock_lengthT * sizeof(sick_scan::RadarPreHeaderEncoderBlock));
      radarPreHeaderArrayEncoderBlock_length = radarPreHeaderArrayEncoderBlock_lengthT;
      for( uint32_t i = 0; i < radarPreHeaderArrayEncoderBlock_length; i++){
      offset += this->st_radarPreHeaderArrayEncoderBlock.deserialize(inbuffer + offset);
        memcpy( &(this->radarPreHeaderArrayEncoderBlock[i]), &(this->st_radarPreHeaderArrayEncoderBlock), sizeof(sick_scan::RadarPreHeaderEncoderBlock));
      }
     return offset;
    }

    virtual const char * getType() override { return "sick_scan/RadarPreHeader"; };
    virtual const char * getMD5() override { return "2b96d942f26bd5b00da7e631bf199685"; };

  };

}
#endif
