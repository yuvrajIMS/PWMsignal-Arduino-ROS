# BlueROVarmController
sending PWM signals from computer's keyboard to BlueROV Newton Arm 

## Make Your ROS Workspace 
$ mkdir -p ~/catkin_ws/src

$ cd ~/catkin_ws/

$ catkin_make

## Enable Workspace 

>type this following command in Terminal 


$ gedit .bashrc


>Now in this opened file source your_ws 
>
>Type in end 'source /opt/ros/< DISTRO >/setup.bash'           // DISTRO is your ROS version i.e. Noetic 
>
>And /YOUR_PATH/catkin_ws/devel/setup.bash 
>
>Now save changes and close this file and  
>
>Verify this step in Termail by command 
  
  
$ roscd 
  
  
  
# ROS & Ardunino 
  
> Install Arduino IDE on your machine 

## Install Arduino-rosserrial on ROS workstation
  
  
  $ sudo apt-get install ros-DISTRO-rosserial-arduino
  
  $ sudo apt-get install ros-DISTRO-rosserial
  
  
## ros_lib installation into Arduino IDE

> NOTE : NEVER DOWNLOAD ROS PACKGAE FOR ARDUNIO FROM ARDUNIO IDE ITSELF, IF PRESENT ALREADY DELETE IT !!!
>
  > Now go in your ardunio library folder 
  
  
  $ cd <arduino_sketchbook>/libraries
  
  $ rm -rf ros_lib
  
  $ rosrun rosserial_arduino make_libraries.py
  
  
> Now you can see ros_lib under examples in Ardunio IDE 
  
  
## Ardunio UNO and Newton Subsea Gripper setup 
  
 > 1.Connect Gripper PWM wire to Ardunio's port 9 (as defined in program) 
 > 2.Connect power cables to BlueRov or provide them 9 - 18 volts (6 Amps)
 > 3.Upload ServoContol code on Ardunio UNO Board (Take code from this repo)
 > 
 > 4.Verfy the port address from Arduino IDE 
  
 # Execution 
  
 > In 1st Terminal window 
  
  $ roscore 
  
 > In 2nd Terminal window 
  
  $ rosrun rosserial_python serial_node.py _port:=/dev/[address_ardunio_USB]
  
 > In 3rd Terminal window 
  
  $ rostopic pub BlueROV std_msgs/UInt16   < MicroSeconds >
  
>  When MicroSeconds = 1500 micros         (Neutral Signal)
>
>  When MicroSeconds = 1530 - 1900  micros ( open Signal  )
>
>  When MicroSeconds = 1470 - 1100  micros ( close Signal )
  

  
 
  


