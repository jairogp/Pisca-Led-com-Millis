
#define pinLed1 13

void setup() {
  pinMode(pinLed1, OUTPUT);
  }

void controlaLed1() {
static unsigned long delayPisca;  

   if ( (millis() - delayPisca) < 200 ) {
      digitalWrite(pinLed1, HIGH);
  } else {
      digitalWrite(pinLed1, LOW);
  }

  if ( (millis() - delayPisca) >= 2000 ) {
    delayPisca = millis(); 
  }
  }

void loop() {
  controlaLed1();
  }


