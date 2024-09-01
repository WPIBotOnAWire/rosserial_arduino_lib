#ifndef _ROS_actionlib_TestRequestActionFeedback_h
#define _ROS_actionlib_TestRequestActionFeedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "actionlib/TestRequestFeedback.h"

namespace actionlib
{

    static const char actionlib_TestRequestActionFeedback_type[] PROGMEM= "actionlib/TestRequestActionFeedback";
    static const char actionlib_TestRequestActionFeedback_md5[] PROGMEM= "aae20e09065c3809e8a8e87c4c8953fd";
  class TestRequestActionFeedback : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef actionlib_msgs::GoalStatus _status_type;
      _status_type status;
      typedef actionlib::TestRequestFeedback _feedback_type;
      _feedback_type feedback;

    TestRequestActionFeedback():
      header(),
      status(),
      feedback()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->feedback.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->feedback.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType(const char * type_msg) override { strcpy_P(type_msg, (char *)actionlib_TestRequestActionFeedback_type);return type_msg; };
    virtual const char * getMD5(const char * md5_msg) override { strcpy_P(md5_msg, (char *)actionlib_TestRequestActionFeedback_md5);return md5_msg; };

  };

}
#endif
