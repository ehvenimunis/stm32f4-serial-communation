#ifndef _ROS_smr_msgs_ElevatorManagerStatus_h
#define _ROS_smr_msgs_ElevatorManagerStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/String.h"

namespace smr_msgs
{

  class ElevatorManagerStatus : public ros::Msg
  {
    public:
      typedef std_msgs::String _e0_assigned_id_type;
      _e0_assigned_id_type e0_assigned_id;
      typedef std_msgs::String _e1_assigned_id_type;
      _e1_assigned_id_type e1_assigned_id;
      typedef bool _e0_idle_type;
      _e0_idle_type e0_idle;
      typedef bool _e1_idle_type;
      _e1_idle_type e1_idle;
      typedef int8_t _e0_floor_type;
      _e0_floor_type e0_floor;
      typedef int8_t _e1_floor_type;
      _e1_floor_type e1_floor;

    ElevatorManagerStatus():
      e0_assigned_id(),
      e1_assigned_id(),
      e0_idle(0),
      e1_idle(0),
      e0_floor(0),
      e1_floor(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->e0_assigned_id.serialize(outbuffer + offset);
      offset += this->e1_assigned_id.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_e0_idle;
      u_e0_idle.real = this->e0_idle;
      *(outbuffer + offset + 0) = (u_e0_idle.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->e0_idle);
      union {
        bool real;
        uint8_t base;
      } u_e1_idle;
      u_e1_idle.real = this->e1_idle;
      *(outbuffer + offset + 0) = (u_e1_idle.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->e1_idle);
      union {
        int8_t real;
        uint8_t base;
      } u_e0_floor;
      u_e0_floor.real = this->e0_floor;
      *(outbuffer + offset + 0) = (u_e0_floor.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->e0_floor);
      union {
        int8_t real;
        uint8_t base;
      } u_e1_floor;
      u_e1_floor.real = this->e1_floor;
      *(outbuffer + offset + 0) = (u_e1_floor.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->e1_floor);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->e0_assigned_id.deserialize(inbuffer + offset);
      offset += this->e1_assigned_id.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_e0_idle;
      u_e0_idle.base = 0;
      u_e0_idle.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->e0_idle = u_e0_idle.real;
      offset += sizeof(this->e0_idle);
      union {
        bool real;
        uint8_t base;
      } u_e1_idle;
      u_e1_idle.base = 0;
      u_e1_idle.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->e1_idle = u_e1_idle.real;
      offset += sizeof(this->e1_idle);
      union {
        int8_t real;
        uint8_t base;
      } u_e0_floor;
      u_e0_floor.base = 0;
      u_e0_floor.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->e0_floor = u_e0_floor.real;
      offset += sizeof(this->e0_floor);
      union {
        int8_t real;
        uint8_t base;
      } u_e1_floor;
      u_e1_floor.base = 0;
      u_e1_floor.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->e1_floor = u_e1_floor.real;
      offset += sizeof(this->e1_floor);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/ElevatorManagerStatus"; };
    virtual const char * getMD5() override { return "4264b8d120914b6df789eef6883ff0ef"; };

  };

}
#endif
