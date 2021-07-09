
#if (ARDUINO >= 100)
 #include <Arduino.h>
#else
 #include <WProgram.h>
#endif

#include <Servo.h> 
#include <ros.h>
#include <std_msgs/UInt16.h>

ros::NodeHandle  nh;

Servo BlueROV;


void servo_cb( const std_msgs::UInt16& cmd_msg)
{
  BlueROV.writeMicroseconds(cmd_msg.data); 
  digitalWrite(13, HIGH-digitalRead(13));  //toggle led  
}


ros::Subscriber<std_msgs::UInt16> sub("BlueROV", servo_cb);

void setup()
{
  pinMode(13, OUTPUT);

  nh.initNode();
  nh.subscribe(sub);
  
  BlueROV.attach(9); //attach it to pin 9
  BlueROV.writeMicroseconds(1500); // arm at MID postion (Default)
}

void loop()
{
  nh.spinOnce();
  delay(1);  

}
