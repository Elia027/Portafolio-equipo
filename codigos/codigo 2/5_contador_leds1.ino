// C++ code
// CONTADOR

int cuenta = 0;		//Variable que guarda el numero de veces que se ha contado

void setup()
{
  //Inicializamos puertos
  pinMode(13, OUTPUT);	//LED1
  pinMode(12, OUTPUT);	//LED2
  pinMode(11, OUTPUT);	//LED3
  pinMode(10, OUTPUT);	//LED4
  pinMode(2, INPUT);	//BOTON
}

void loop()
{
  if (digitalRead(2) == HIGH)		//Pregunta si el boton esta activado
  {
    cuenta++;
    delay(500);
  }
  if(cuenta >= 5)
  {
    cuenta = 0;
  }
  
  if(cuenta == 0)
  {
  	digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  } 
  else if(cuenta == 1)
  {
  	digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  } 
  else if(cuenta == 2)
  {
  	digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  else if(cuenta == 3)
  {
  	digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  }
  else if(cuenta == 4)
  {
  	digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
  }
}