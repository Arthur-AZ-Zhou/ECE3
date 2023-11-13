//CALIBRATION DATA
int sensorMax[8] = {2500, 2500, 2500, 1452.4, 1556.6, 2367.6, 2158.8, 2500};
int sensorMin[8] = {455.4, 883.2, 741.2, 623.6, 539.8, 647.2, 628.25,  769.25}; 
uint16_t sensorValues[8];
float Kp = 0;
float Kd = 0;

//BUMP SWITCHES
uint16_t bumpSw2_pin = 6;
uint16_t bumpSw2Reading;
uint16_t bumpSw3_pin = 27;
uint16_t bumpSw3Reading;

//USER SWITCHES (sides of LaunchPad)
uint16_t userSw1_pin = 73;
int userSw1Reading;
uint16_t userSw2_pin = 74;
int userSw2Reading;

//LEFT MOTOR
const int LEFT_NSLP_PIN = 31;
const int LEFT_DIR_PIN = 29;
const int LEFT_PWM_PIN = 40;
const int BASE_LEFT_SPEED = 30;

//RIGHT MOTOR
const int RIGHT_NSLP_PIN = 11;
const int RIGHT_DIR_PIN = 30;
const int RIGHT_PWM_PIN = 39;
const int BASE_RIGHT_SPEED = 30;

void setup() {
// put your setup code here, to run once:
  pinMode(LEFT_NSLP_PIN, OUTPUT);
  pinMode(LEFT_DIR_PIN, OUTPUT);
  pinMode(LEFT_PWM_PIN, OUTPUT);
  pinMode(RIGHT_NSLP_PIN, OUTPUT);
  pinMode(RIGHT_DIR_PIN, OUTPUT);
  pinMode(RIGHT_PWM_PIN, OUTPUT);

  digitalWrite(LEFT_DIR_PIN,LOW);
  digitalWrite(LEFT_NSLP_PIN,HIGH);
  digitalWrite(RIGHT_DIR_PIN,LOW);
  digitalWrite(RIGHT_NSLP_PIN,HIGH);
}

void loop() {
  analogWrite(LEFT_PWM_PIN, BASE_LEFT_SPEED);
  analogWrite(RIGHT_PWM_PIN, BASE_RIGHT_SPEED);
}
