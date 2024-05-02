int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
const int punto = 9; // Pin para el punto decimal
const int totalSegmentos = 7; // Reducido a 7 ya que no se usa el pin g en el arreglo de pines

// Definir pines para cada segmento del display
const int segmentos[] = {a, b, c, d, e, f, g};

// Definir los patrones para cada número
const byte numeros[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() {
  // Configurar los pines de los segmentos como salida
  for (int i = 0; i < totalSegmentos; i++) {
    pinMode(segmentos[i], OUTPUT);
  }
  // Configurar el pin del punto como salida
  pinMode(punto, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    mostrarNumero(i);
    delay(1000); // Esperar un segundo
  }
}

void mostrarNumero(int numero) {
  // Apagar todos los segmentos
  for (int i = 0; i < totalSegmentos; i++) {
    digitalWrite(segmentos[i], LOW); // Ánodo común, se cambia a LOW para encender el segmento
  }
  digitalWrite(punto, HIGH); // Apagar el punto

  // Encender los segmentos correspondientes al número
  for (int i = 0; i < totalSegmentos; i++) {
    digitalWrite(segmentos[i], numeros[numero][i]); // Ánodo común, se cambia a LOW para encender el segmento
  }
  digitalWrite(punto, numeros[numero][totalSegmentos]); // Encender el punto si está activo
}