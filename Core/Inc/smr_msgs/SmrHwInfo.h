#ifndef _ROS_smr_msgs_SmrHwInfo_h
#define _ROS_smr_msgs_SmrHwInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace smr_msgs
{

  class SmrHwInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint8_t _dbg_start_type;
      _dbg_start_type dbg_start;
      typedef uint8_t _dbg_function_type;
      _dbg_function_type dbg_function;
      typedef uint16_t _dbg_length_type;
      _dbg_length_type dbg_length;
      typedef double _motor_l_pos_rev_type;
      _motor_l_pos_rev_type motor_l_pos_rev;
      typedef double _motor_r_pos_rev_type;
      _motor_r_pos_rev_type motor_r_pos_rev;
      typedef double _motor_l_speed_rpm_type;
      _motor_l_speed_rpm_type motor_l_speed_rpm;
      typedef double _motor_r_speed_rpm_type;
      _motor_r_speed_rpm_type motor_r_speed_rpm;
      typedef double _motor_l_prev_req_speed_rpm_type;
      _motor_l_prev_req_speed_rpm_type motor_l_prev_req_speed_rpm;
      typedef double _motor_r_prev_req_speed_rpm_type;
      _motor_r_prev_req_speed_rpm_type motor_r_prev_req_speed_rpm;
      typedef double _lid_curr_pos_type;
      _lid_curr_pos_type lid_curr_pos;
      typedef uint8_t _lid_info_old_style_type;
      _lid_info_old_style_type lid_info_old_style;
      typedef double _batt_volt_type;
      _batt_volt_type batt_volt;
      typedef double _batt_curr_amp_type;
      _batt_curr_amp_type batt_curr_amp;
      typedef double _batt_temp_celc_type;
      _batt_temp_celc_type batt_temp_celc;
      typedef uint8_t _batt_percent_type;
      _batt_percent_type batt_percent;
      typedef uint8_t _input_pins_info_type;
      _input_pins_info_type input_pins_info;
      typedef uint8_t _output_pins_info_type;
      _output_pins_info_type output_pins_info;
      typedef uint8_t _homing_status_type;
      _homing_status_type homing_status;
      enum { LID_CLOSED =  0 };
      enum { LID_OPEN =  1 };
      enum { LID_MIDDLE =  2 };
      enum { LID_ERROR =  3 };

    SmrHwInfo():
      header(),
      dbg_start(0),
      dbg_function(0),
      dbg_length(0),
      motor_l_pos_rev(0),
      motor_r_pos_rev(0),
      motor_l_speed_rpm(0),
      motor_r_speed_rpm(0),
      motor_l_prev_req_speed_rpm(0),
      motor_r_prev_req_speed_rpm(0),
      lid_curr_pos(0),
      lid_info_old_style(0),
      batt_volt(0),
      batt_curr_amp(0),
      batt_temp_celc(0),
      batt_percent(0),
      input_pins_info(0),
      output_pins_info(0),
      homing_status(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->dbg_start >> (8 * 0)) & 0xFF;
      offset += sizeof(this->dbg_start);
      *(outbuffer + offset + 0) = (this->dbg_function >> (8 * 0)) & 0xFF;
      offset += sizeof(this->dbg_function);
      *(outbuffer + offset + 0) = (this->dbg_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->dbg_length >> (8 * 1)) & 0xFF;
      offset += sizeof(this->dbg_length);
      union {
        double real;
        uint64_t base;
      } u_motor_l_pos_rev;
      u_motor_l_pos_rev.real = this->motor_l_pos_rev;
      *(outbuffer + offset + 0) = (u_motor_l_pos_rev.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_l_pos_rev.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_l_pos_rev.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_l_pos_rev.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motor_l_pos_rev.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motor_l_pos_rev.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motor_l_pos_rev.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motor_l_pos_rev.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motor_l_pos_rev);
      union {
        double real;
        uint64_t base;
      } u_motor_r_pos_rev;
      u_motor_r_pos_rev.real = this->motor_r_pos_rev;
      *(outbuffer + offset + 0) = (u_motor_r_pos_rev.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_r_pos_rev.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_r_pos_rev.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_r_pos_rev.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motor_r_pos_rev.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motor_r_pos_rev.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motor_r_pos_rev.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motor_r_pos_rev.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motor_r_pos_rev);
      union {
        double real;
        uint64_t base;
      } u_motor_l_speed_rpm;
      u_motor_l_speed_rpm.real = this->motor_l_speed_rpm;
      *(outbuffer + offset + 0) = (u_motor_l_speed_rpm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_l_speed_rpm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_l_speed_rpm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_l_speed_rpm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motor_l_speed_rpm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motor_l_speed_rpm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motor_l_speed_rpm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motor_l_speed_rpm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motor_l_speed_rpm);
      union {
        double real;
        uint64_t base;
      } u_motor_r_speed_rpm;
      u_motor_r_speed_rpm.real = this->motor_r_speed_rpm;
      *(outbuffer + offset + 0) = (u_motor_r_speed_rpm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_r_speed_rpm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_r_speed_rpm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_r_speed_rpm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motor_r_speed_rpm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motor_r_speed_rpm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motor_r_speed_rpm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motor_r_speed_rpm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motor_r_speed_rpm);
      union {
        double real;
        uint64_t base;
      } u_motor_l_prev_req_speed_rpm;
      u_motor_l_prev_req_speed_rpm.real = this->motor_l_prev_req_speed_rpm;
      *(outbuffer + offset + 0) = (u_motor_l_prev_req_speed_rpm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_l_prev_req_speed_rpm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_l_prev_req_speed_rpm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_l_prev_req_speed_rpm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motor_l_prev_req_speed_rpm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motor_l_prev_req_speed_rpm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motor_l_prev_req_speed_rpm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motor_l_prev_req_speed_rpm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motor_l_prev_req_speed_rpm);
      union {
        double real;
        uint64_t base;
      } u_motor_r_prev_req_speed_rpm;
      u_motor_r_prev_req_speed_rpm.real = this->motor_r_prev_req_speed_rpm;
      *(outbuffer + offset + 0) = (u_motor_r_prev_req_speed_rpm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_r_prev_req_speed_rpm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_r_prev_req_speed_rpm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_r_prev_req_speed_rpm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motor_r_prev_req_speed_rpm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motor_r_prev_req_speed_rpm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motor_r_prev_req_speed_rpm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motor_r_prev_req_speed_rpm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motor_r_prev_req_speed_rpm);
      union {
        double real;
        uint64_t base;
      } u_lid_curr_pos;
      u_lid_curr_pos.real = this->lid_curr_pos;
      *(outbuffer + offset + 0) = (u_lid_curr_pos.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lid_curr_pos.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lid_curr_pos.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lid_curr_pos.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_lid_curr_pos.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_lid_curr_pos.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_lid_curr_pos.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_lid_curr_pos.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->lid_curr_pos);
      *(outbuffer + offset + 0) = (this->lid_info_old_style >> (8 * 0)) & 0xFF;
      offset += sizeof(this->lid_info_old_style);
      union {
        double real;
        uint64_t base;
      } u_batt_volt;
      u_batt_volt.real = this->batt_volt;
      *(outbuffer + offset + 0) = (u_batt_volt.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_batt_volt.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_batt_volt.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_batt_volt.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_batt_volt.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_batt_volt.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_batt_volt.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_batt_volt.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->batt_volt);
      union {
        double real;
        uint64_t base;
      } u_batt_curr_amp;
      u_batt_curr_amp.real = this->batt_curr_amp;
      *(outbuffer + offset + 0) = (u_batt_curr_amp.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_batt_curr_amp.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_batt_curr_amp.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_batt_curr_amp.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_batt_curr_amp.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_batt_curr_amp.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_batt_curr_amp.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_batt_curr_amp.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->batt_curr_amp);
      union {
        double real;
        uint64_t base;
      } u_batt_temp_celc;
      u_batt_temp_celc.real = this->batt_temp_celc;
      *(outbuffer + offset + 0) = (u_batt_temp_celc.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_batt_temp_celc.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_batt_temp_celc.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_batt_temp_celc.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_batt_temp_celc.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_batt_temp_celc.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_batt_temp_celc.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_batt_temp_celc.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->batt_temp_celc);
      *(outbuffer + offset + 0) = (this->batt_percent >> (8 * 0)) & 0xFF;
      offset += sizeof(this->batt_percent);
      *(outbuffer + offset + 0) = (this->input_pins_info >> (8 * 0)) & 0xFF;
      offset += sizeof(this->input_pins_info);
      *(outbuffer + offset + 0) = (this->output_pins_info >> (8 * 0)) & 0xFF;
      offset += sizeof(this->output_pins_info);
      *(outbuffer + offset + 0) = (this->homing_status >> (8 * 0)) & 0xFF;
      offset += sizeof(this->homing_status);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->dbg_start =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->dbg_start);
      this->dbg_function =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->dbg_function);
      this->dbg_length =  ((uint16_t) (*(inbuffer + offset)));
      this->dbg_length |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->dbg_length);
      union {
        double real;
        uint64_t base;
      } u_motor_l_pos_rev;
      u_motor_l_pos_rev.base = 0;
      u_motor_l_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_l_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_l_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_l_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_motor_l_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_motor_l_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_motor_l_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_motor_l_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->motor_l_pos_rev = u_motor_l_pos_rev.real;
      offset += sizeof(this->motor_l_pos_rev);
      union {
        double real;
        uint64_t base;
      } u_motor_r_pos_rev;
      u_motor_r_pos_rev.base = 0;
      u_motor_r_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_r_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_r_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_r_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_motor_r_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_motor_r_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_motor_r_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_motor_r_pos_rev.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->motor_r_pos_rev = u_motor_r_pos_rev.real;
      offset += sizeof(this->motor_r_pos_rev);
      union {
        double real;
        uint64_t base;
      } u_motor_l_speed_rpm;
      u_motor_l_speed_rpm.base = 0;
      u_motor_l_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_l_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_l_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_l_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_motor_l_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_motor_l_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_motor_l_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_motor_l_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->motor_l_speed_rpm = u_motor_l_speed_rpm.real;
      offset += sizeof(this->motor_l_speed_rpm);
      union {
        double real;
        uint64_t base;
      } u_motor_r_speed_rpm;
      u_motor_r_speed_rpm.base = 0;
      u_motor_r_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_r_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_r_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_r_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_motor_r_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_motor_r_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_motor_r_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_motor_r_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->motor_r_speed_rpm = u_motor_r_speed_rpm.real;
      offset += sizeof(this->motor_r_speed_rpm);
      union {
        double real;
        uint64_t base;
      } u_motor_l_prev_req_speed_rpm;
      u_motor_l_prev_req_speed_rpm.base = 0;
      u_motor_l_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_l_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_l_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_l_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_motor_l_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_motor_l_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_motor_l_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_motor_l_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->motor_l_prev_req_speed_rpm = u_motor_l_prev_req_speed_rpm.real;
      offset += sizeof(this->motor_l_prev_req_speed_rpm);
      union {
        double real;
        uint64_t base;
      } u_motor_r_prev_req_speed_rpm;
      u_motor_r_prev_req_speed_rpm.base = 0;
      u_motor_r_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_r_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_r_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_r_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_motor_r_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_motor_r_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_motor_r_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_motor_r_prev_req_speed_rpm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->motor_r_prev_req_speed_rpm = u_motor_r_prev_req_speed_rpm.real;
      offset += sizeof(this->motor_r_prev_req_speed_rpm);
      union {
        double real;
        uint64_t base;
      } u_lid_curr_pos;
      u_lid_curr_pos.base = 0;
      u_lid_curr_pos.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_lid_curr_pos.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_lid_curr_pos.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_lid_curr_pos.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_lid_curr_pos.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_lid_curr_pos.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_lid_curr_pos.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_lid_curr_pos.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->lid_curr_pos = u_lid_curr_pos.real;
      offset += sizeof(this->lid_curr_pos);
      this->lid_info_old_style =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->lid_info_old_style);
      union {
        double real;
        uint64_t base;
      } u_batt_volt;
      u_batt_volt.base = 0;
      u_batt_volt.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_batt_volt.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_batt_volt.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_batt_volt.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_batt_volt.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_batt_volt.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_batt_volt.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_batt_volt.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->batt_volt = u_batt_volt.real;
      offset += sizeof(this->batt_volt);
      union {
        double real;
        uint64_t base;
      } u_batt_curr_amp;
      u_batt_curr_amp.base = 0;
      u_batt_curr_amp.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_batt_curr_amp.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_batt_curr_amp.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_batt_curr_amp.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_batt_curr_amp.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_batt_curr_amp.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_batt_curr_amp.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_batt_curr_amp.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->batt_curr_amp = u_batt_curr_amp.real;
      offset += sizeof(this->batt_curr_amp);
      union {
        double real;
        uint64_t base;
      } u_batt_temp_celc;
      u_batt_temp_celc.base = 0;
      u_batt_temp_celc.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_batt_temp_celc.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_batt_temp_celc.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_batt_temp_celc.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_batt_temp_celc.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_batt_temp_celc.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_batt_temp_celc.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_batt_temp_celc.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->batt_temp_celc = u_batt_temp_celc.real;
      offset += sizeof(this->batt_temp_celc);
      this->batt_percent =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->batt_percent);
      this->input_pins_info =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->input_pins_info);
      this->output_pins_info =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->output_pins_info);
      this->homing_status =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->homing_status);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/SmrHwInfo"; };
    virtual const char * getMD5() override { return "e6bc6444b005b8b370ba7f7da0250c01"; };

  };

}
#endif
