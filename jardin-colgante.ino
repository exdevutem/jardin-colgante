const unsigned long SEGUNDO = 1000;
const unsigned long MINUTO = SEGUNDO * 60;
const unsigned long HORA = MINUTO * 60;
const int PIN = 9;

void setup() {
  delay(2 * HORA);
  pinMode(PIN, OUTPUT);
}

void loop() {
  digitalWrite(PIN, HIGH);
  delay(30 * SEGUNDO);
  digitalWrite(PIN, LOW);
  delay(12 * HORA);
}
