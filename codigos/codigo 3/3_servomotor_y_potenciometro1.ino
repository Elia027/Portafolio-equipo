// C++ code
// Incluímos la librería para poder controlar el servo
#include <Servo.h>

// Declaramos la variable para controlar el servo
Servo servoMotor;
int valor;		//variable que almacena la lectura analógica raw
int pos;        //Variable que almacena la posicion del servo

void setup()
{
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(9);
}

void loop()
{
  // leemos del pin A0 valor
  valor = analogRead(A0);
  //Convertimos el valor del potenciometro a una 
  //que entienda el servo
  pos = map(valor, 0, 1023, 0, 180);
  //Mandamos la posicion al servo 
  servoMotor.write(pos);
  // Esperamos 1 segundo
  delay(1000);
}