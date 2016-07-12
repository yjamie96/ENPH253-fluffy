//DIGITAL INPUTS
#define TEST_STOP_BUTTON 0 // FOR TESTING

//ANALOG INPUTS
#define TAPE_FOLLOWING_QRD_RIGHT  0
#define TAPE_FOLLOWING_QRD_LEFT 2
#define INTERSECTION_QRD_RIGHT 4
#define INTERSECTION_QRD_LEFT 5
#define SIDE_QSD_RIGHT 1
#define SIDE_QSD_LEFT 3

//MOTOR OUTPUTS
#define MOTOR_RIGHT_WHEEL 0
#define MOTOR_LEFT_WHEEL 3

//SERVO OUTPUTS
//RCServo0 = front facing scanners
//RCServo1 = 
//RCServo2 = 

// QRD to ground threshold
#define QRD_GROUND_THRESHOLD 150

// SIDE QSD to doll threshold
#define QSD_SIDE_THRESHOLD 750

enum direction_e {
  LEFT,RIGHT,FORWARD
};

