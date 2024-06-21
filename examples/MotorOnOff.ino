//    Ejemplo de utilizacion de  //
//     la libreria THMotor.h     //

#include "THMotor.h"

//pin conectado a la entrada A del puente H
#define PINIA 9
//pin conectado a la entrada B del puente H
#define PINIB 10
//pin conectado al enable del puente H
#define PINEN 11
//pin potenciometro
#define POTE A0

//objeto M1 del tipo THMotor
THMotor M1(PINIA, PINIB, PINEN);

void setup() {
  //los pines conectados al puente H como salida
  pinMode(PINIA, OUTPUT);
  pinMode(PINIB, OUTPUT);
  pinMode(PINEN, OUTPUT);

  //estado bajo en todas las salidas
  digitalWrite(PINIA, LOW);
  digitalWrite(PINIB, LOW);
  analogWrite(PINEN, 0);

}

void loop() {
  int pote = analogRead( POTE );  //valor pote
  int pwm = map( pote, 0, 1024, 0, 255 ); //valor pwm
  //velocidad M1
  M1.setSpeed( pwm );
  //M1 adelante
  M1.run(FORWARD);
}
