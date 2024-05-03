#include <DHT.h>

// Configuración del sensor DHT-11
#define DHTPIN 7     // Pin donde está conectado el sensor
#define DHTTYPE DHT11   // Tipo de sensor DHT

DHT dht(DHTPIN, DHTTYPE);  // Inicializar el sensor DHT-11

void setup() {
    Serial.begin(9600);  // Iniciar la comunicación serie
    Serial.println("Prueba de sensor DHT-11");  // Mensaje de inicio
    dht.begin();  // Iniciar el sensor DHT
}

void loop() {
    // Leer la humedad y temperatura desde el sensor DHT
    int h = dht.readHumidity();  // Leer la humedad
    int t = dht.readTemperature();  // Leer la temperatura en grados Celsius
    
    // Imprimir los valores en el monitor serie
    Serial.print("Humedad: ");
    Serial.print(h);
    Serial.print(" %, Temperatura: ");
    Serial.print(t);
    Serial.println(" °C");
    
    // Esperar un segundo antes de la próxima lectura
    delay(1000);
}
