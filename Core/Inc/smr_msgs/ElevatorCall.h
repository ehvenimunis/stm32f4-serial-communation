#ifndef _ROS_smr_msgs_ElevatorCall_h
#define _ROS_smr_msgs_ElevatorCall_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/String.h"

namespace smr_msgs
{

  class ElevatorCall : public ros::Msg
  {
    public:
      typedef int8_t _floor_type;
      _floor_type floor;
      typedef std_msgs::String _robot_id_type;
      _robot_id_type robot_id;
      typedef bool _any_elevator_type;
      _any_elevator_type any_elevator;
      typedef int64_t _elev_id_type;
      _elev_id_type elev_id;
      typedef int64_t _elev_group_id_type;
      _elev_group_id_type elev_group_id;
      typedef bool _release_type;
      _release_type release;
      typedef bool _delete_assigned_type;
      _delete_assigned_type delete_assigned;

    ElevatorCall():
      floor(0),
      robot_id(),
      any_elevator(0),
      elev_id(0),
      elev_group_id(0),
      release(0),
      delete_assigned(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_floor;
      u_floor.real = this->floor;
      *(outbuffer + offset + 0) = (u_floor.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->floor);
      offset += this->robot_id.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_any_elevator;
      u_any_elevator.real = this->any_elevator;
      *(outbuffer + offset + 0) = (u_any_elevator.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->any_elevator);
      union {
        int64_t real;
        uint64_t base;
      } u_elev_id;
      u_elev_id.real = this->elev_id;
      *(outbuffer + offset + 0) = (u_elev_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_elev_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_elev_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_elev_id.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_elev_id.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_elev_id.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_elev_id.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_elev_id.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->elev_id);
      union {
        int64_t real;
        uint64_t base;
      } u_elev_group_id;
      u_elev_group_id.real = this->elev_group_id;
      *(outbuffer + offset + 0) = (u_elev_group_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_elev_group_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_elev_group_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_elev_group_id.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_elev_group_id.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_elev_group_id.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_elev_group_id.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_elev_group_id.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->elev_group_id);
      union {
        bool real;
        uint8_t base;
      } u_release;
      u_release.real = this->release;
      *(outbuffer + offset + 0) = (u_release.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->release);
      union {
        bool real;
        uint8_t base;
      } u_delete_assigned;
      u_delete_assigned.real = this->delete_assigned;
      *(outbuffer + offset + 0) = (u_delete_assigned.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->delete_assigned);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_floor;
      u_floor.base = 0;
      u_floor.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->floor = u_floor.real;
      offset += sizeof(this->floor);
      offset += this->robot_id.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_any_elevator;
      u_any_elevator.base = 0;
      u_any_elevator.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->any_elevator = u_any_elevator.real;
      offset += sizeof(this->any_elevator);
      union {
        int64_t real;
        uint64_t base;
      } u_elev_id;
      u_elev_id.base = 0;
      u_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_elev_id.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->elev_id = u_elev_id.real;
      offset += sizeof(this->elev_id);
      union {
        int64_t real;
        uint64_t base;
      } u_elev_group_id;
      u_elev_group_id.base = 0;
      u_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_elev_group_id.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->elev_group_id = u_elev_group_id.real;
      offset += sizeof(this->elev_group_id);
      union {
        bool real;
        uint8_t base;
      } u_release;
      u_release.base = 0;
      u_release.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->release = u_release.real;
      offset += sizeof(this->release);
      union {
        bool real;
        uint8_t base;
      } u_delete_assigned;
      u_delete_assigned.base = 0;
      u_delete_assigned.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->delete_assigned = u_delete_assigned.real;
      offset += sizeof(this->delete_assigned);
     return offset;
    }

    virtual const char * getType() override { return "smr_msgs/ElevatorCall"; };
    virtual const char * getMD5() override { return "2f97bdea9f20d91aaebef5df83140d47"; };

  };

}
#endif
