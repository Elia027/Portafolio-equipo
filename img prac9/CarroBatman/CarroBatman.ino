#include <SoftwareSerial.h> // Librería para comunicación Bluetooth
// Pines del puente H para controlar el motor
#define IN1 11
#define IN2 10
// Configuración del módulo Bluetooth
int bluetoothTx = 13; 
int bluetoothRx = 12; 
SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);
void setup() {
  // Configuración de los pines del puente H
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  digitalWrite(IN1, LOW); // Apagar motor inicialmente
  digitalWrite(IN2, LOW);
  // Configuración de comunicación serial
  Serial.begin(9600); 
  bluetooth.begin(9600);
  Serial.println("Motor listo. Esperando comandos...");
}
void loop() {
  if (bluetooth.available() > 0) {
    char command = bluetooth.read(); // Leer comando del Bluetooth
    Serial.print("Comando recibido: ");
    Serial.println(command); // Mostrar comando en el monitor serial
    // Control del motor en función del comando recibido
    if (command == 'F') {
      // Mover el motor hacia adelante
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      Serial.println("Motor avanzando");
    } else if (command == 'B') {
      // Mover el motor hacia atrás
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      Serial.println("Motor retrocediendo");
    } else if (command == 'S') {
      // Detener el motor
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      Serial.println("Motor detenido");
    } else {
      Serial.println("Comando no reconocido");
    }
  }
}
