#include "notas.h"

int PinD1 = 23;
int PinD2 = 22;
int PinD3 = 1;
int PinD4 = 3;

#define BUZZER_PIN 19
#define BUZZER_CHANNEL 0

ToneESP32 buzzer(BUZZER_PIN, BUZZER_CHANNEL);

void setup() {
  // put your setup code here, to run once:
pinMode(PinD1, INPUT);
pinMode(PinD2, INPUT);
pinMode(PinD3, INPUT);
pinMode(PinD4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  detectar();

  if(dedo1 > 1) {
    buzzer.tone(NOTE_C3, while(dedo1 > 1););
  }
  if(dedo2 > 1) {
    buzzer.tone(NOTE_D3, while(dedo2 > 1););
  }
  if(dedo3 > 1) {
    buzzer.tone(NOTE_E3, while(dedo3 > 1););
  }
  if(dedo4 > 1) {
    buzzer.tone(NOTE_F3, while(dedo4 > 1););
  }
  
}

void detectar() {
  int dedo1 = analogRead(PinD1)/1023*5;
  int dedo2 = analogRead(PinD2)/1023*5;
  int dedo3 = analogRead(PinD3)/1023*5;
  int dedo4 = analogRead(PinD4)/1023*5;
}