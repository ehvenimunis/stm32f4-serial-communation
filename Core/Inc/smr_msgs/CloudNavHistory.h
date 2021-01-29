#ifndef _ROS_smr_msgs_CloudNavHistory_h
#define _ROS_smr_msgs_CloudNavHistory_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "std_msgs/String.h"

namespace smr_msgs
{

  class CloudNavHistory : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _px_type;
      _px_type px;
      typedef double _py_type;
      _py_type py;
      typedef double _oz_type;
      _oz_type oz;
      typedef double _ow_type;
      _ow_type ow;
      typedef uint8_t _batt_percent_type;
      _batt_percent_type batt_percent;
      typedef bool _charging_type;
      _charging_type charging;
      typedef std_msgs::String _state_type;
      _state_type state;
      typedef std_msgs::String _floor_name_type;
      _floor_name_type floor_name;

    CloudNavHistory():
      header(),
      px(0),
      py(0),
      oz(0),
      ow(0),
      batt_percent(0),
      charging(0),
      state(),
      floor_name()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_px;
      u_px.real = this->px;
      *(outbuffer + offset + 0) = (u_px.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_px.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_px.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_px.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_px.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_px.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_px.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_px.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->px);
      union {
        double real;
        uint64_t base;
      } u_py;
      u_py.real = this->py;
      *(outbuffer + offset + 0) = (u_py.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_py.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_py.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_py.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_py.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_py.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_py.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_py.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->py);
      union {
        double real;
        uint64_t base;
      } u_oz;
      u_oz.real = this->oz;
      *(outbuffer + offset + 0) = (u_oz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_oz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_oz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_oz.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_oz.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_oz.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_oz.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_oz.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->oz);
      union {
        double real;
        uint64_t base;
      } u_ow;
      u_ow.real = this->ow;
      *(outbuffer + offset + 0) = (u_ow.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ow.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ow.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ow.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ow.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ow.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ow.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ow.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ow);
      *(outbuffer + offset + 0) = (this->batt_percent >> (8 * 0)) & 0xFF;
      offset += sizeof(this->batt_percent);
      union {
        bool real;
        uint8_t base;
      } u_charging;
      u_charging.real = this->charging;
      *(outbuffer + offset + 0) = (u_charging.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->charging);
      offset += this->state.serialize(outbuffer + offset);
      offset += this->floor_name.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_px;
      u_px.base = 0;
      u_px.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_px.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_px.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_px.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_px.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_px.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_px.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_px.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->px = u_px.real;
      offset += sizeof(this->px);
      union {
        double real;
        uint64_t base;
      } u_py;
      u_py.base = 0;
      u_py.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_py.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_py.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_py.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_py.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_py.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_py.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_py.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->py = u_py.real;
      offset += sizeof(this->py);
      union {
        double real;
        uint64_t base;
      } u_oz;
      u_oz.base = 0;
      u_oz.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_oz.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_oz.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_oz.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_oz.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_oz.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_oz.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_oz.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->oz = u_oz.real;
      offset += sizeof(this->oz);
      union {
        double real;
        uint64_t base;
      } u_ow;
      u_ow.base = 0;
      u_ow.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ow.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ow.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ow.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ow.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ow.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ow.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ow.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ow = u_ow.real;
      offset += sizeof(this->ow);
      this->batt_percent =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->batt_percent);
      union {
        bool real;
        uint8_t base;
      } u_charging;
      u_charging.base = 0;
      u_charging.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->charging = u_charging.real;
      offset += sizeof(this->charging);
      offset += this->state.deserialize(inbuffer + offset);
      offset += this->floor_name.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/CloudNavHistory"; };
    virtual const char * getMD5() override { return "1d4b41edd8cef515b5843f45cc3a6f0c"; };

  };

}
#endif
