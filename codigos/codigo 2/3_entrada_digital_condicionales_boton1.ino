// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);	//LED
  pinMode(8, INPUT);	//BOTON
}

void loop()
{
  if (digitalRead(8) == HIGH)		//Pregunta si el boton1 esta activado
  {
    digitalWrite(13, HIGH);			//SI: encendemos el led1
  }
  else if(digitalRead(8) == LOW)	//Pregunta si el boton1 esta desactivado
  {
    digitalWrite(13, LOW);			//SI: apagamos el led1
  }
}