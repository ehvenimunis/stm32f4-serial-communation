#ifndef _ROS_smr_msgs_CloudInfo_h
#define _ROS_smr_msgs_CloudInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace smr_msgs
{

  class CloudInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
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
      typedef bool _elev_assigned_type;
      _elev_assigned_type elev_assigned;
      typedef int64_t _target_door_type;
      _target_door_type target_door;
      typedef int64_t _assigned_elev_id_type;
      _assigned_elev_id_type assigned_elev_id;
      typedef int64_t _assigned_elev_group_id_type;
      _assigned_elev_group_id_type assigned_elev_group_id;
      typedef int64_t _assigned_elev_floor_type;
      _assigned_elev_floor_type assigned_elev_floor;
      typedef bool _assigned_elev_independent_type;
      _assigned_elev_independent_type assigned_elev_independent;
      enum { NOT_ASSIGNED =  -1 };

    CloudInfo():
      header(),
      get_ready(0),
      conn_established(0),
      fillment_completed(0),
      open_lid(0),
      order_delivered(0),
      elev_assigned(0),
      target_door(0),
      assigned_elev_id(0),
      assigned_elev_group_id(0),
      assigned_elev_floor(0),
      assigned_elev_independent(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
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
        bool real;
        uint8_t base;
      } u_elev_assigned;
      u_elev_assigned.real = this->elev_assigned;
      *(outbuffer + offset + 0) = (u_elev_assigned.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->elev_assigned);
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
      union {
        int64_t real;
        uint64_t base;
      } u_assigned_elev_id;
      u_assigned_elev_id.real = this->assigned_elev_id;
      *(outbuffer + offset + 0) = (u_assigned_elev_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_assigned_elev_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_assigned_elev_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_assigned_elev_id.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_assigned_elev_id.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_assigned_elev_id.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_assigned_elev_id.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_assigned_elev_id.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->assigned_elev_id);
      union {
        int64_t real;
        uint64_t base;
      } u_assigned_elev_group_id;
      u_assigned_elev_group_id.real = this->assigned_elev_group_id;
      *(outbuffer + offset + 0) = (u_assigned_elev_group_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_assigned_elev_group_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_assigned_elev_group_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_assigned_elev_group_id.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_assigned_elev_group_id.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_assigned_elev_group_id.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_assigned_elev_group_id.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_assigned_elev_group_id.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->assigned_elev_group_id);
      union {
        int64_t real;
        uint64_t base;
      } u_assigned_elev_floor;
      u_assigned_elev_floor.real = this->assigned_elev_floor;
      *(outbuffer + offset + 0) = (u_assigned_elev_floor.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_assigned_elev_floor.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_assigned_elev_floor.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_assigned_elev_floor.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_assigned_elev_floor.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_assigned_elev_floor.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_assigned_elev_floor.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_assigned_elev_floor.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->assigned_elev_floor);
      union {
        bool real;
        uint8_t base;
      } u_assigned_elev_independent;
      u_assigned_elev_independent.real = this->assigned_elev_independent;
      *(outbuffer + offset + 0) = (u_assigned_elev_independent.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->assigned_elev_independent);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
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
        bool real;
        uint8_t base;
      } u_elev_assigned;
      u_elev_assigned.base = 0;
      u_elev_assigned.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->elev_assigned = u_elev_assigned.real;
      offset += sizeof(this->elev_assigned);
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
      union {
        int64_t real;
        uint64_t base;
      } u_assigned_elev_id;
      u_assigned_elev_id.base = 0;
      u_assigned_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_assigned_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_assigned_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_assigned_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_assigned_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_assigned_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_assigned_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_assigned_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->assigned_elev_id = u_assigned_elev_id.real;
      offset += sizeof(this->assigned_elev_id);
      union {
        int64_t real;
        uint64_t base;
      } u_assigned_elev_group_id;
      u_assigned_elev_group_id.base = 0;
      u_assigned_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_assigned_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_assigned_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_assigned_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_assigned_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_assigned_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_assigned_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_assigned_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->assigned_elev_group_id = u_assigned_elev_group_id.real;
      offset += sizeof(this->assigned_elev_group_id);
      union {
        int64_t real;
        uint64_t base;
      } u_assigned_elev_floor;
      u_assigned_elev_floor.base = 0;
      u_assigned_elev_floor.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_assigned_elev_floor.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_assigned_elev_floor.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_assigned_elev_floor.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_assigned_elev_floor.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_assigned_elev_floor.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_assigned_elev_floor.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_assigned_elev_floor.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->assigned_elev_floor = u_assigned_elev_floor.real;
      offset += sizeof(this->assigned_elev_floor);
      union {
        bool real;
        uint8_t base;
      } u_assigned_elev_independent;
      u_assigned_elev_independent.base = 0;
      u_assigned_elev_independent.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->assigned_elev_independent = u_assigned_elev_independent.real;
      offset += sizeof(this->assigned_elev_independent);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/CloudInfo"; };
    virtual const char * getMD5() override { return "7d80dc7c3a354c865f8c645828638b8d"; };

  };

}
#endif
