#ifndef _ROS_std_msgs_Duration_h
#define _ROS_std_msgs_Duration_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "ros/duration.h"

namespace std_msgs
{

    static const char std_msgs_Duration_type[] PROGMEM= "std_msgs/Duration";
    static const char std_msgs_Duration_md5[] PROGMEM= "3e286caf4241d664e55f3ad380e2ae46";
  class Duration : public ros::Msg
  {
    public:
      typedef ros::Duration _data_type;
      _data_type data;

    Duration():
      data()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->data.sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->data.sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->data.sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->data.sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->data.sec);
      *(outbuffer + offset + 0) = (this->data.nsec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->data.nsec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->data.nsec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->data.nsec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->data.nsec);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->data.sec =  ((uint32_t) (*(inbuffer + offset)));
      this->data.sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->data.sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->data.sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->data.sec);
      this->data.nsec =  ((uint32_t) (*(inbuffer + offset)));
      this->data.nsec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->data.nsec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->data.nsec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->data.nsec);
     return offset;
    }

    virtual const char * getType(const char * type_msg) override { strcpy_P(type_msg, (char *)std_msgs_Duration_type);return type_msg; };
    virtual const char * getMD5(const char * md5_msg) override { strcpy_P(md5_msg, (char *)std_msgs_Duration_md5);return md5_msg; };

  };

}
#endif
