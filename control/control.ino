#include <ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/Twist.h>

#define FWD         HIGH
#define BWD         LOW
#define RACE_DIR    2
#define RACE_PWM    3
#define MAX_SPEED   255
#define MIN_SPEED   0
#define DIR_SPEED   120
#define STR_DIR     4
#define STR_PWM     5
#define STR_SENSOR  A0
#define STR_MAX     490
#define STR_MIN     200
#define STR_MID     360
#define ANG_COVER   60
#define STR_EDGE    20

/* Pre declare function */
void controlMotor(const geometry_msgs::Twist& cmd_vel);

/* Setup ros node, publisher subscriber */
ros::NodeHandle nh;

/* Subscriber for cmd_vel */
ros::Subscriber <geometry_msgs::Twist> cmd_vel("/cmd_vel", controlMotor);

/* Variable declation for IMU sensor */
const int MPU_addr=0x68;  // I2C address of the MPU-6050
int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;
String data;

/* Variable declation for cmd_vel */
int linear, angular, nowValue, setValue, prevAngular;

void setup(){
  Serial.begin(57600);
  nh.getHardware() -> setBaud(57600);
  nh.initNode();
  nh.subscribe(cmd_vel);

  prevAngular = 0;
  
  /* Setup motor controller */
  pinMode(RACE_DIR, OUTPUT);
  pinMode(RACE_PWM, OUTPUT);
  pinMode(STR_DIR, OUTPUT);
  pinMode(STR_PWM, OUTPUT);
  pinMode(STR_SENSOR, INPUT);

  digitalWrite(RACE_DIR, FWD);
  digitalWrite(STR_DIR, BWD);
}

void loop(){
  nowValue = analogRead(STR_SENSOR);

  
  nh.spinOnce();
  delay(1);
}

/* Control the motor from cmd_vel topic */
void controlMotor(const geometry_msgs::Twist& cmd_vel){
  linear = (int) cmd_vel.linear.x;
  angular = (int) cmd_vel.angular.x;

  /* Set Motor Direction by linear value */
  if(linear < 0)  digitalWrite(RACE_DIR, BWD);
  else            digitalWrite(RACE_DIR, FWD);

  /* Set Motor Speed by linear value */
  analogWrite(RACE_PWM, abs(linear));

  /* Check edit anuglar */
  setValue = (((double)(angular + 30) / (double)ANG_COVER) * (double)(STR_MAX - STR_MIN)) + STR_MIN;
  
  /* if edited value is small, did not move motor */
  if(abs(prevAngular - angular) <= 1)       return;
  
  /* if move the goal value, prevAngular do edit */
  if(abs(nowValue - setValue) <= STR_EDGE){
    analogWrite(STR_PWM, 0);
    prevAngular = angular;
  } else if(nowValue < setValue){
    digitalWrite(STR_DIR, LOW);
    analogWrite(STR_PWM, DIR_SPEED);
  } else {
    digitalWrite(STR_DIR, HIGH);
    analogWrite(STR_PWM, DIR_SPEED);
  }
}
