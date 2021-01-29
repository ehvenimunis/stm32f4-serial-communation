#ifndef _ROS_sick_scan_RadarPreHeaderDeviceBlock_h
#define _ROS_sick_scan_RadarPreHeaderDeviceBlock_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace sick_scan
{

  class RadarPreHeaderDeviceBlock : public ros::Msg
  {
    public:
      typedef uint32_t _uiIdent_type;
      _uiIdent_type uiIdent;
      typedef uint32_t _udiSerialNo_type;
      _udiSerialNo_type udiSerialNo;
      typedef bool _bDeviceError_type;
      _bDeviceError_type bDeviceError;
      typedef bool _bContaminationWarning_type;
      _bContaminationWarning_type bContaminationWarning;
      typedef bool _bContaminationError_type;
      _bContaminationError_type bContaminationError;

    RadarPreHeaderDeviceBlock():
      uiIdent(0),
      udiSerialNo(0),
      bDeviceError(0),
      bContaminationWarning(0),
      bContaminationError(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->uiIdent >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->uiIdent >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->uiIdent >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->uiIdent >> (8 * 3)) & 0xFF;
      offset += sizeof(this->uiIdent);
      *(outbuffer + offset + 0) = (this->udiSerialNo >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->udiSerialNo >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->udiSerialNo >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->udiSerialNo >> (8 * 3)) & 0xFF;
      offset += sizeof(this->udiSerialNo);
      union {
        bool real;
        uint8_t base;
      } u_bDeviceError;
      u_bDeviceError.real = this->bDeviceError;
      *(outbuffer + offset + 0) = (u_bDeviceError.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bDeviceError);
      union {
        bool real;
        uint8_t base;
      } u_bContaminationWarning;
      u_bContaminationWarning.real = this->bContaminationWarning;
      *(outbuffer + offset + 0) = (u_bContaminationWarning.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bContaminationWarning);
      union {
        bool real;
        uint8_t base;
      } u_bContaminationError;
      u_bContaminationError.real = this->bContaminationError;
      *(outbuffer + offset + 0) = (u_bContaminationError.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bContaminationError);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->uiIdent =  ((uint32_t) (*(inbuffer + offset)));
      this->uiIdent |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->uiIdent |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->uiIdent |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->uiIdent);
      this->udiSerialNo =  ((uint32_t) (*(inbuffer + offset)));
      this->udiSerialNo |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->udiSerialNo |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->udiSerialNo |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->udiSerialNo);
      union {
        bool real;
        uint8_t base;
      } u_bDeviceError;
      u_bDeviceError.base = 0;
      u_bDeviceError.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bDeviceError = u_bDeviceError.real;
      offset += sizeof(this->bDeviceError);
      union {
        bool real;
        uint8_t base;
      } u_bContaminationWarning;
      u_bContaminationWarning.base = 0;
      u_bContaminationWarning.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bContaminationWarning = u_bContaminationWarning.real;
      offset += sizeof(this->bContaminationWarning);
      union {
        bool real;
        uint8_t base;
      } u_bContaminationError;
      u_bContaminationError.base = 0;
      u_bContaminationError.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bContaminationError = u_bContaminationError.real;
      offset += sizeof(this->bContaminationError);
     return offset;
    }

    virtual const char * getType() override { return "sick_scan/RadarPreHeaderDeviceBlock"; };
    virtual const char * getMD5() override { return "8c1dc3fa07dfb079c66dfaa39765f5a0"; };

  };

}
#endif
