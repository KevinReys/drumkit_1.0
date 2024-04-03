const int ledPin1 = 2; // Pino para o LED 1
const int ledPin2 = 3; // Pino para o LED 2
const int ledPin3 = 4; // Pino para o LED 3
const int ledPin4 = 5; // Pino para o LED 4
const int ledPin5 = 6; // Pino para o LED 5

const int buttonPin1 = 7; // Pino para o botão 1
const int buttonPin2 = 8; // Pino para o botão 2
const int buttonPin3 = 9; // Pino para o botão 3
const int buttonPin4 = 10; // Pino para o botão 4
const int buttonPin5 = 11; // Pino para o botão 5

void setup() {
  pinMode(ledPin1, OUTPUT); // Configura o pino do LED como saída
  pinMode(ledPin2, OUTPUT); // Configura o pino do LED como saída
  pinMode(ledPin3, OUTPUT); // Configura o pino do LED como saída
  pinMode(ledPin4, OUTPUT); // Configura o pino do LED como saída
  pinMode(ledPin5, OUTPUT); // Configura o pino do LED como saída

  pinMode(buttonPin1, INPUT_PULLUP); // Configura o pino do botão como entrada com pull-up interno
  pinMode(buttonPin2, INPUT_PULLUP); // Configura o pino do botão como entrada com pull-up interno
  pinMode(buttonPin3, INPUT_PULLUP); // Configura o pino do botão como entrada com pull-up interno
  pinMode(buttonPin4, INPUT_PULLUP); // Configura o pino do botão como entrada com pull-up interno
  pinMode(buttonPin5, INPUT_PULLUP); // Configura o pino do botão como entrada com pull-up interno
}

void loop() {
  // Verifica se o botão 1 foi pressionado
  if (digitalRead(buttonPin1) == LOW) {
    digitalWrite(ledPin1, HIGH); // Acende o LED 1
    delay(100); // Aguarda um curto período de tempo
    digitalWrite(ledPin1, LOW); // Apaga o LED 1
  }
  
  // Verifica se o botão 2 foi pressionado
  if (digitalRead(buttonPin2) == LOW) {
    digitalWrite(ledPin2, HIGH); // Acende o LED 2
    delay(100); // Aguarda um curto período de tempo
    digitalWrite(ledPin2, LOW); // Apaga o LED 2
  }

  // Verifica se o botão 3 foi pressionado
  if (digitalRead(buttonPin3) == LOW) {
    digitalWrite(ledPin3, HIGH); // Acende o LED 3
    delay(100); // Aguarda um curto período de tempo
    digitalWrite(ledPin3, LOW); // Apaga o LED 3
  }

  // Verifica se o botão 4 foi pressionado
  if (digitalRead(buttonPin4) == LOW) {
    digitalWrite(ledPin4, HIGH); // Acende o LED 4
    delay(100); // Aguarda um curto período de tempo
    digitalWrite(ledPin4, LOW); // Apaga o LED 4
  }

  // Verifica se o botão 5 foi pressionado
  if (digitalRead(buttonPin5) == LOW) {
    digitalWrite(ledPin5, HIGH); // Acende o LED 5
    delay(100); // Aguarda um curto período de tempo
    digitalWrite(ledPin5, LOW); // Apaga o LED 5
  }
}