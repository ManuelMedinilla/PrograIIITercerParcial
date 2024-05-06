int relayPin = 8;  // Pin para controlar el relé
int ledPin = 13;   // Pin para el LED adicional

void setup() {
  pinMode(relayPin, OUTPUT);  // Configura el pin del relé como salida
  pinMode(ledPin, OUTPUT);    // Configura el pin del LED como salida
}

void loop() {
  // Activar relé y LED al mismo tiempo
  digitalWrite(relayPin, HIGH);  // Activa el relé
  digitalWrite(ledPin, HIGH);    // Enciende el LED
  delay(2000);  // Espera 2 segundos
  
  // Desactivar relé y LED al mismo tiempo
  digitalWrite(relayPin, LOW);  // Desactiva el relé
  digitalWrite(ledPin, LOW);    // Apaga el LED
  delay(2000);  // Espera 2 segundos
}

