#ifndef _ROS_sick_scan_RadarScan_h
#define _ROS_sick_scan_RadarScan_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "sick_scan/RadarPreHeader.h"
#include "sensor_msgs/PointCloud2.h"
#include "sick_scan/RadarObject.h"

namespace sick_scan
{

  class RadarScan : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef sick_scan::RadarPreHeader _radarPreHeader_type;
      _radarPreHeader_type radarPreHeader;
      typedef sensor_msgs::PointCloud2 _targets_type;
      _targets_type targets;
      uint32_t objects_length;
      typedef sick_scan::RadarObject _objects_type;
      _objects_type st_objects;
      _objects_type * objects;

    RadarScan():
      header(),
      radarPreHeader(),
      targets(),
      objects_length(0), st_objects(), objects(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->radarPreHeader.serialize(outbuffer + offset);
      offset += this->targets.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->objects_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->objects_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->objects_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->objects_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->objects_length);
      for( uint32_t i = 0; i < objects_length; i++){
      offset += this->objects[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->radarPreHeader.deserialize(inbuffer + offset);
      offset += this->targets.deserialize(inbuffer + offset);
      uint32_t objects_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      objects_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      objects_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      objects_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->objects_length);
      if(objects_lengthT > objects_length)
        this->objects = (sick_scan::RadarObject*)realloc(this->objects, objects_lengthT * sizeof(sick_scan::RadarObject));
      objects_length = objects_lengthT;
      for( uint32_t i = 0; i < objects_length; i++){
      offset += this->st_objects.deserialize(inbuffer + offset);
        memcpy( &(this->objects[i]), &(this->st_objects), sizeof(sick_scan::RadarObject));
      }
     return offset;
    }

    virtual const char * getType() override { return "sick_scan/RadarScan"; };
    virtual const char * getMD5() override { return "db9483dce93673bbf6148baa3d967315"; };

  };

}
#endif
