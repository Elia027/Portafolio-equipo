#include <Servo.h>  // Asegúrate de incluir la librería Servo
int valor1;      // Variable que almacena la lectura analógica 1
int valor2;      // Variable que almacena la lectura analógica 2
int valor3;      // Variable que almacena la lectura analógica 3
int valor4;      // Variable que almacena la lectura analógica 4
int pos1;        // Variable que almacena la posición del servo 1
int pos2;        // Variable que almacena la posición del servo 2
int pos3;        // Variable que almacena la posición del servo 3
int pos4;        // Variable que almacena la posición del servo 4
// Declaramos los servos
Servo myservo1;
Servo myservo2;
Servo myservo3;  // Agregado el servo 3
Servo myservo4;  // Agregado el servo 4
void setup() {
  // Conectamos los servos a los pines correspondientes
  myservo1.attach(10);
  myservo2.attach(9);
  myservo3.attach(2);
  myservo4.attach(3);  // Agregado el punto y coma
}
void loop() {
  // Leemos el valor de los potenciómetros
  valor1 = analogRead(A0);
  valor2 = analogRead(A1);
  valor3 = analogRead(A2);
  valor4 = analogRead(A3);
  // Convertimos el valor del potenciómetro a una posición que entienda el servo
  pos1 = map(valor1, 0, 1023, 0, 180);
  pos2 = map(valor2, 0, 1023, 0, 180);
  pos3 = map(valor3, 0, 1023, 0, 180);
  pos4 = map(valor4, 0, 1023, 0, 180);
  // Mandamos la posición a cada servo
  myservo1.write(pos1);
  myservo2.write(pos2);
  myservo3.write(pos3);
  myservo4.write(pos4);  // Agregado el punto y coma
  // Esperamos un poco para que se muevan
  delay(10);
}