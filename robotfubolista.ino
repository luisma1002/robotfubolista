//REcibir orden del teclado

#include<Servo.h>
#define PINSERVODERECHO 12//pIN DEL SERVO DERECHO


Servo servoDerecho;//Declaro el servo derecho


void setup() {
  Serial.begin(9600);
  servoDerecho.attach(PINSERVODERECHO);//Indicar que esta conectado al pin SERVODERECHO
}

char orden;
void loop() {
  
  if(Serial.available()>0)
  {
    orden=Serial.read();
    Serial.println(orden);
  }
  if(orden=='w')
      {
        servoDerecho.write(0);//Girar en sentido horario
        delay(1000);
        servoDerecho.write(90);//Detenerse
        delay(1000);
        servoDerecho.write(180);//Girar en sentido antihorario
        delay(1000);
        servoDerecho.write(90);//Detenerse
        delay(1000);      
      }else{
            servoDerecho.write(90);//Detenerse
        }
  
}
