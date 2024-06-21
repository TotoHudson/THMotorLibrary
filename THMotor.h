#ifndef FORWARD
#define FORWARD 1
#endif
#ifndef BACKWARD
#define BACKWARD 2
#endif
#ifndef RELEASE
#define RELEASE 0
#endif

class THMotor {
    byte pin_a_BH;
    byte pin_b_BH;
    byte pin_enable_BH;
    byte pwm_enable_BH;
  public:
    THMotor(byte cpy_pin_a_BH, byte copy_pin_b_BH, byte copy_en_BH);
    void setSpeed(byte cpy_pwm_enable_BH);
    void run(byte pol);
};
THMotor::THMotor(byte cpy_pin_a_BH, byte copy_pin_b_BH, byte copy_en_BH) {
  pin_a_BH = cpy_pin_a_BH;
  pin_b_BH = copy_pin_b_BH;
  pin_enable_BH = copy_en_BH;
  pwm_enable_BH = 0;
}

void THMotor::setSpeed(byte cpy_pwm_enable_BH) {
  if (cpy_pwm_enable_BH > 255) {
    pwm_enable_BH = 255;
  } else if(cpy_pwm_enable_BH < 0){
    pwm_enable_BH = 0;
  } else{
    pwm_enable_BH = cpy_pwm_enable_BH;
  }
}

void THMotor::run(byte pol) {
  switch (pol) {
    case FORWARD: analogWrite(pin_enable_BH, pwm_enable_BH);
      digitalWrite(pin_a_BH, HIGH); digitalWrite(pin_b_BH, LOW);
      break;
    case BACKWARD:  analogWrite(pin_enable_BH, pwm_enable_BH);
      digitalWrite(pin_a_BH, LOW); digitalWrite(pin_b_BH, HIGH);
      break;
    case RELEASE: analogWrite(pin_enable_BH, pwm_enable_BH);
      digitalWrite(pin_a_BH, LOW); digitalWrite(pin_b_BH, LOW);
      break;
  }
}
