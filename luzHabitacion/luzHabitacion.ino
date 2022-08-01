
#include<Servo.h>
Servo myServo;


/*Sensor de luz*/
int sensor = A0;
int valorSensor = 0;


void setup() {
  //PIN SERVO
  myServo.attach(11);

  //PIN SENSOR
  pinMode(sensor, INPUT);
  Serial.begin(9600);
  
}

void loop() {

  //Crear un valor de intensidad de la luz//
  valorSensor = analogRead(sensor);
  Serial.println(valorSensor);

  
  //ValorSensor decide si encender la luz//
  if (valorSensor < 500){
    myServo.write(180);
    }
  else {
    myServo.write(0);
    }

  
}
