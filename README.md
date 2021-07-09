# BlueROVarmROScontroller
sending PWM signals from computer's keyboard to BlueROV Newton Arm 

## Make Your ROS workspace 
$ mkdir -p ~/catkin_ws/src

$ cd ~/catkin_ws/

$ catkin_make

## Enable Workspace 

> type this following command in Terminal 

$ gedit .bashrc

>now in this opened file source your_ws 
>type in end 'source /opt/ros/<DISTRO>/setup.bash'      // DISTRO is your ROS version 
>
>and /YOUR_PATH/catkin_ws/devel/setup.bash 
>
>now save changes and close this file and  
>
>verify this step in Termail by command 
  
  
$ roscd 
  
  
  
# ROS & Ardunino 
  
> Install Arduino IDE on your machine 

## Installing arduino rosserrial on ROS workstation
  
  $ sudo apt-get install ros-DISTRO-rosserial-arduino
  
  $ sudo apt-get install ros-DISTRO-rosserial
  
## ROS_LIB installation into Arduino IDE

> NOTE : NEVER DOWNLOAD ROS PACKGAE FOR ARDUNIO FROM ARDUNIO IDE ITSELF, IF PRESENT ALREADY DELETE IT !!!
>
  > Now go in your ardunio library folder 
  
  $ cd <arduino_sketchbook>/libraries
  
  $ rm -rf ros_lib
  
  $ rosrun rosserial_arduino make_libraries.py
  
> Now you can see ros_lib under examples in Ardunio IDE 
  
  

  

  

