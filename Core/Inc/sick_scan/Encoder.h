#ifndef _ROS_sick_scan_Encoder_h
#define _ROS_sick_scan_Encoder_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace sick_scan
{

  class Encoder : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int32_t _enc_position_type;
      _enc_position_type enc_position;
      typedef int16_t _enc_speed_type;
      _enc_speed_type enc_speed;

    Encoder():
      header(),
      enc_position(0),
      enc_speed(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_enc_position;
      u_enc_position.real = this->enc_position;
      *(outbuffer + offset + 0) = (u_enc_position.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_enc_position.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_enc_position.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_enc_position.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->enc_position);
      union {
        int16_t real;
        uint16_t base;
      } u_enc_speed;
      u_enc_speed.real = this->enc_speed;
      *(outbuffer + offset + 0) = (u_enc_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_enc_speed.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->enc_speed);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_enc_position;
      u_enc_position.base = 0;
      u_enc_position.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_enc_position.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_enc_position.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_enc_position.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->enc_position = u_enc_position.real;
      offset += sizeof(this->enc_position);
      union {
        int16_t real;
        uint16_t base;
      } u_enc_speed;
      u_enc_speed.base = 0;
      u_enc_speed.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_enc_speed.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->enc_speed = u_enc_speed.real;
      offset += sizeof(this->enc_speed);
     return offset;
    }

    virtual const char * getType() override { return "sick_scan/Encoder"; };
    virtual const char * getMD5() override { return "54930fcfc2dd947b1ad5f398b208008f"; };

  };

}
#endif
