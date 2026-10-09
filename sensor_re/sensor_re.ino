const int LED_VERMELHO = 9;
const int LED_AZUL = 10;
const int LED_VERDE = 11;
const int TRIG = 3;
const int ECHO = 2;
const int distancia_obstaculo = 5;
const int distancia_amarelo = 10;
const int distancia_verde = 20;

void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  int distancia = sensor_morcego(TRIG, ECHO);

  if (distancia <= distancia_obstaculo) {
    Serial.print("Com obstaculo: ");
    Serial.print(distancia);
    Serial.println("cm");
    vermelho();
  } else if (distancia <= distancia_amarelo) {
    Serial.print("Sem obstaculo: ");
    Serial.print(distancia);
    Serial.println("cm");
    azul();
  } else if (distancia <= distancia_verde) {
    Serial.print("Sem obstaculo: ");
    Serial.print(distancia);
    Serial.println("cm");
    verde();
  } else {
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AZUL, LOW);
  }

  delay(100);
}

void azul() {
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AZUL, HIGH);
}

void vermelho() {
  digitalWrite(LED_AZUL, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
}

void verde() {
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_AZUL, LOW);
  digitalWrite(LED_VERDE, HIGH);
}

int sensor_morcego(int pinotrig, int pinoecho) {
  digitalWrite(pinotrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pinotrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinotrig, LOW);

  return pulseIn(pinoecho, HIGH) / 58;
}