#define LM35 A0   // Verbunden mit LM35
#define DELAY 10    // Pausenwert
const int cycles = 20;    // Anzahl der Messungen

void setup() {
  Serial.begin(9600);
}

void loop() {
  float resultTemp = 0.0;
  for(int i = 0; i < cycles; i++){
    int analogValue = analogRead(LM35);
    float temperature = (5.0 * 100.0 * analogValue) / 1024;
    resultTemp += temperature;    // Aufsummieren der Messwerte
    delay(DELAY);   // Kurze Pause
  }
  resultTemp /= cycles;   // Berechnung des Durchschnitts
  Serial.println(resultTemp);   // Ausgabe an die serielle Schnittstelle
}
