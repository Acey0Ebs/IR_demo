/*======================================================
                     DAC
========================================================
Description:
Where we convert digital to analog and to show how it
works inside the esp32.

Designer Engineer:
Ebio, Ann Clarise
Jaena, Elaiza B.

Date:
Oct. 14, 2026
======================================================*/

// GPIOS
const byte Ir = 36;

// variable
int counter = 0;
int input = 0;

void setup() {
  // PIN
  pinMode(Ir, INPUT);
  pinMode(NUM_PINS, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  input = digitalRead(Ir);
  if(input == 0) {
    counter++;
  }
  
  delay(500);
}
