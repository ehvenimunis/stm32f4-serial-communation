#ifndef _ROS_smr_msgs_CloudOverride_h
#define _ROS_smr_msgs_CloudOverride_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace smr_msgs
{

  class CloudOverride : public ros::Msg
  {
    public:
      typedef bool _get_ready_type;
      _get_ready_type get_ready;
      typedef bool _conn_established_type;
      _conn_established_type conn_established;
      typedef bool _fillment_completed_type;
      _fillment_completed_type fillment_completed;
      typedef bool _open_lid_type;
      _open_lid_type open_lid;
      typedef bool _order_delivered_type;
      _order_delivered_type order_delivered;
      typedef int64_t _target_door_type;
      _target_door_type target_door;

    CloudOverride():
      get_ready(0),
      conn_established(0),
      fillment_completed(0),
      open_lid(0),
      order_delivered(0),
      target_door(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_get_ready;
      u_get_ready.real = this->get_ready;
      *(outbuffer + offset + 0) = (u_get_ready.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->get_ready);
      union {
        bool real;
        uint8_t base;
      } u_conn_established;
      u_conn_established.real = this->conn_established;
      *(outbuffer + offset + 0) = (u_conn_established.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->conn_established);
      union {
        bool real;
        uint8_t base;
      } u_fillment_completed;
      u_fillment_completed.real = this->fillment_completed;
      *(outbuffer + offset + 0) = (u_fillment_completed.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->fillment_completed);
      union {
        bool real;
        uint8_t base;
      } u_open_lid;
      u_open_lid.real = this->open_lid;
      *(outbuffer + offset + 0) = (u_open_lid.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->open_lid);
      union {
        bool real;
        uint8_t base;
      } u_order_delivered;
      u_order_delivered.real = this->order_delivered;
      *(outbuffer + offset + 0) = (u_order_delivered.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->order_delivered);
      union {
        int64_t real;
        uint64_t base;
      } u_target_door;
      u_target_door.real = this->target_door;
      *(outbuffer + offset + 0) = (u_target_door.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_target_door.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_target_door.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_target_door.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_target_door.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_target_door.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_target_door.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_target_door.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->target_door);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_get_ready;
      u_get_ready.base = 0;
      u_get_ready.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->get_ready = u_get_ready.real;
      offset += sizeof(this->get_ready);
      union {
        bool real;
        uint8_t base;
      } u_conn_established;
      u_conn_established.base = 0;
      u_conn_established.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->conn_established = u_conn_established.real;
      offset += sizeof(this->conn_established);
      union {
        bool real;
        uint8_t base;
      } u_fillment_completed;
      u_fillment_completed.base = 0;
      u_fillment_completed.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->fillment_completed = u_fillment_completed.real;
      offset += sizeof(this->fillment_completed);
      union {
        bool real;
        uint8_t base;
      } u_open_lid;
      u_open_lid.base = 0;
      u_open_lid.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->open_lid = u_open_lid.real;
      offset += sizeof(this->open_lid);
      union {
        bool real;
        uint8_t base;
      } u_order_delivered;
      u_order_delivered.base = 0;
      u_order_delivered.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->order_delivered = u_order_delivered.real;
      offset += sizeof(this->order_delivered);
      union {
        int64_t real;
        uint64_t base;
      } u_target_door;
      u_target_door.base = 0;
      u_target_door.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_target_door.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_target_door.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_target_door.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_target_door.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_target_door.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_target_door.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_target_door.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->target_door = u_target_door.real;
      offset += sizeof(this->target_door);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/CloudOverride"; };
    virtual const char * getMD5() override { return "0eb75bcdfba5cc5bb187823babaab570"; };

  };

}
#endif
