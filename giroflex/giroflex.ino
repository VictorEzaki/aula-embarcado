const int LED_VERMELHO = 6;
const int LED_AZUL = 5;
const int PORTA_PIEZO = A0;

void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
  pinMode(PORTA_PIEZO, OUTPUT);
}

void loop() {
  azul();
  delay(250);
  vermelho();
  delay(250);
}

void azul() {
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_AZUL, HIGH);
  tone(PORTA_PIEZO, 1200);
}

void vermelho() {
  digitalWrite(LED_AZUL, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
  tone(PORTA_PIEZO, 1400);
}