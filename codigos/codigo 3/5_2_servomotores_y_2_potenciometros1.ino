// C++ code
#include <Servo.h>
int valor1;		//variable que almacena la 
				//lectura analógica1
int valor2;		//variable que almacena la 
				//lectura analógica2
int pos1;        //Variable que almacena la posicion del servo1
int pos2;        //Variable que almacena la posicion del servo2


//Le decimos al codigo que va a existir un servo
//llamado my servo
Servo myservo1;
Servo myservo2;

void setup()
{
  //Le decimos al codigo donde esta conectado el servo 1
  myservo1.attach(9);
  //Le decimos al codigo donde esta conectado el servo 2
  myservo2.attach(2);
}

void loop()
{
  // leemos el valor de potenciometro1
  valor1 = analogRead(A0);
  // leemos el valor de potenciometro2
  valor2 = analogRead(A1);
  //Convertimos el valor del potenciometro a una 
  //que entienda el servo
  pos1 = map(valor1, 0, 1023, 0, 180);
  pos2 = map(valor2, 0, 1023, 0, 180);
  //Mandamos la posicion al servo 1
  myservo1.write(pos1);
  //Mandamos la posicion al servo 2
  myservo2.write(pos2);
  //esperamos un poco para que se mueva
  delay(10);
}