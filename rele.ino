void setup() {
  pinMode(2, OUTPUT);  // Cambia el número por el pin de control
}

void loop() {
  digitalWrite(2, HIGH);  // Activa el relé (enciende el LED)
  delay(1000);            // Espera 1 segundo
  digitalWrite(2, LOW);   // Desactiva el relé (apaga el LED)
  delay(1000);            // Espera 1 segundo
}

