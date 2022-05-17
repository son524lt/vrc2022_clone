#ifndef _MAIN_H_
#define _MAIN_H_

//define pin to communicate with PS2 
#define PS2_DAT 12 //MISO  19
#define PS2_CMD 13 //MOSI  23
#define PS2_SEL 15 //SS     5
#define PS2_CLK 14 //SLK   18
#define pressures   true
//#define pressures   false
#define rumble      true
//#define rumble      false


//GPIO input output expansion
#define MAX_END_STOP 25     // using for lift endstop
#define MID_END_STOP 32
#define MIN_END_STOP 36
#define ANOTHER1    0       // modify your name pin define here
#define ANOTHER2    2
#define ANOTHER3    39

//mid joystick has value: 128 -> offset it to safe in control
#define NOISE_J_UP      140
#define NOISE_J_DOWN    116

#define MAX_PWM 4096
#define MIN_PWM 50

#define LEFT_MOTOR      1
#define RIGHT_MOTOR     2
#define LIFT_MOTOR      3
#define ROTATE_MOTOR    4

#define PICK_UP_SERVO1   3
#define PICK_UP_SERVO2   4

#define SERVO1  1
#define SERVO2  2

#endif
