//DIGITAL INPUTS
#define FRONT_RIGHT_GROUND_SWITCH 0
#define FRONT_LEFT_GROUND_SWITCH 1
#define FRONT_RIGHT_BUMPER_SWITCH 2
#define FRONT_LEFT_BUMPER_SWITCH 3
#define BACK_RIGHT_BUMPER_SWITCH 4
#define BACK_LEFT_BUMPER_SWITCH 5
#define ON 1
#define OFF 0

//ANALOG INPUTS
#define TAPE_FOLLOWING_QRD_RIGHT  0
#define TAPE_FOLLOWING_QRD_LEFT 1
#define INTERSECTION_QRD_RIGHT 2
#define INTERSECTION_QRD_LEFT 3
#define SIDE_QSD_RIGHT 4
#define SIDE_QSD_LEFT 5

//MOTOR OUTPUTS
#define MOTOR_RIGHT_WHEEL 0
#define MOTOR_LEFT_WHEEL 1

//SERVO OUTPUTS
//RCServo0 = front facing scanners
//RCServo1 = 
//RCServo2 = 

// QRD to ground threshold
#define QRD_GROUND_THRESHOLD 150

// SIDE QSD to doll threshold
#define QSD_SIDE_THRESHOLD 750

// Navigation constants
# define TAPE_FOLLOWING_TRESHOLD QRD_GROUND_THRESHOLD
# define TAPE_FOLLOWING_CORRECTION 3
# define TAPE_FOLLOWING_DEFAULT_SPEED 120
# define HARD_STOP_WAIT_TIME 120 //ms
# define INTERSECTION_TURN_SPEED 150
# define UTURN_SPEED 100
# define PULLOVER_SPEED 100
# define INTERSECTION_TURN_WAIT_TICK 5
# define INTERSECTION_TURN_IGNORE_TIME 500
# define INTERSECTION_TURN_TIME 500

enum direction_e {
  LEFT,RIGHT,FORWARD
};

