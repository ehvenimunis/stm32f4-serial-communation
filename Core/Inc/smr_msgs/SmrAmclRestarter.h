#ifndef _ROS_smr_msgs_SmrAmclRestarter_h
#define _ROS_smr_msgs_SmrAmclRestarter_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/String.h"

namespace smr_msgs
{

  class SmrAmclRestarter : public ros::Msg
  {
    public:
      typedef double _init_px_type;
      _init_px_type init_px;
      typedef double _init_py_type;
      _init_py_type init_py;
      typedef double _init_oz_type;
      _init_oz_type init_oz;
      typedef double _init_ow_type;
      _init_ow_type init_ow;
      typedef std_msgs::String _map_name_type;
      _map_name_type map_name;

    SmrAmclRestarter():
      init_px(0),
      init_py(0),
      init_oz(0),
      init_ow(0),
      map_name()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_init_px;
      u_init_px.real = this->init_px;
      *(outbuffer + offset + 0) = (u_init_px.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_init_px.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_init_px.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_init_px.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_init_px.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_init_px.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_init_px.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_init_px.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->init_px);
      union {
        double real;
        uint64_t base;
      } u_init_py;
      u_init_py.real = this->init_py;
      *(outbuffer + offset + 0) = (u_init_py.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_init_py.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_init_py.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_init_py.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_init_py.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_init_py.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_init_py.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_init_py.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->init_py);
      union {
        double real;
        uint64_t base;
      } u_init_oz;
      u_init_oz.real = this->init_oz;
      *(outbuffer + offset + 0) = (u_init_oz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_init_oz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_init_oz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_init_oz.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_init_oz.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_init_oz.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_init_oz.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_init_oz.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->init_oz);
      union {
        double real;
        uint64_t base;
      } u_init_ow;
      u_init_ow.real = this->init_ow;
      *(outbuffer + offset + 0) = (u_init_ow.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_init_ow.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_init_ow.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_init_ow.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_init_ow.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_init_ow.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_init_ow.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_init_ow.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->init_ow);
      offset += this->map_name.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_init_px;
      u_init_px.base = 0;
      u_init_px.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_init_px.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_init_px.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_init_px.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_init_px.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_init_px.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_init_px.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_init_px.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->init_px = u_init_px.real;
      offset += sizeof(this->init_px);
      union {
        double real;
        uint64_t base;
      } u_init_py;
      u_init_py.base = 0;
      u_init_py.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_init_py.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_init_py.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_init_py.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_init_py.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_init_py.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_init_py.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_init_py.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->init_py = u_init_py.real;
      offset += sizeof(this->init_py);
      union {
        double real;
        uint64_t base;
      } u_init_oz;
      u_init_oz.base = 0;
      u_init_oz.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_init_oz.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_init_oz.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_init_oz.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_init_oz.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_init_oz.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_init_oz.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_init_oz.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->init_oz = u_init_oz.real;
      offset += sizeof(this->init_oz);
      union {
        double real;
        uint64_t base;
      } u_init_ow;
      u_init_ow.base = 0;
      u_init_ow.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_init_ow.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_init_ow.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_init_ow.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_init_ow.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_init_ow.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_init_ow.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_init_ow.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->init_ow = u_init_ow.real;
      offset += sizeof(this->init_ow);
      offset += this->map_name.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/SmrAmclRestarter"; };
    virtual const char * getMD5() override { return "2909f6e7dff857d39f82764e0f9489f1"; };

  };

}
#endif
