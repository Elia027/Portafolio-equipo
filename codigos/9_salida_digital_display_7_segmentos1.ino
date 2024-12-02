// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);	//Segmento e
  pinMode(12, OUTPUT);	//Segmento d
  pinMode(10, OUTPUT);	//Segmento c
  pinMode(9, OUTPUT);	//Segmento punto
  pinMode(7, OUTPUT);	//Segmento b
  pinMode(6, OUTPUT);	//Segmento a
  pinMode(5, OUTPUT);	//Segmento f
  pinMode(4, OUTPUT);	//Segmento g
}

void loop()
{
  // Mostramos el numero 0
  digitalWrite(6, HIGH);		//Encendido
  digitalWrite(7, HIGH);		//Encendido
  digitalWrite(10, HIGH);	//Encendido
  digitalWrite(12, HIGH);	//Encendido
  digitalWrite(13, HIGH);	//Encendido
  digitalWrite(5, HIGH);		//Encendido
  digitalWrite(4, LOW);	//Apagado
  digitalWrite(9, LOW);	//Apagado
  delay(1000);
  
  // Mostramos el numero 1
  digitalWrite(6, LOW);	//Apagado
  digitalWrite(7, HIGH);	//Encendido
  digitalWrite(10, HIGH);	//Encendido
  digitalWrite(12, LOW);	//Apagado
  digitalWrite(13, LOW);	//Apagado
  digitalWrite(5, LOW);	//Apagado
  digitalWrite(4, LOW);	//Apagado
  digitalWrite(9, LOW);	//Apagado
  delay(1000);
  
  // Mostramos el numero 2
  digitalWrite(6, HIGH);	//Apagado
  digitalWrite(7, HIGH);		//Encendido
  digitalWrite(10, LOW);	//Encendido
  digitalWrite(12, HIGH);	//Apagado
  digitalWrite(13, HIGH);	//Apagado
  digitalWrite(5, LOW);	//Apagado
  digitalWrite(4, HIGH);	//Apagado
  digitalWrite(9, LOW);	//Apagado
  delay(1000);
}