// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);	//LED
  pinMode(8, INPUT);	//BOTON
}

void loop()
{
  digitalWrite(13, digitalRead(8)); //Escribimpos en el LED el valor del BOTON
}