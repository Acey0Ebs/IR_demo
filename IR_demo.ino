/*======================================================
                     Counter
========================================================
Description:
Using the Ir Sensor to count the objects detected and
display it on a 7 segment.

Designer Engineer:
Ebio, Ann Clarise
Jaena, Elaiza B.

Date:
Oct. 14, 2026
======================================================*/

#include "decoder.h"

// GPIOS
const byte IrAdd = 36;
const byte IrSub = 39;

// Variables
int counter = 0;
int inputAdd = 0;
int inputSub = 0;

void setup() {
  pinMode(IrAdd, INPUT);
  pinMode(IrSub, INPUT);
  // Initialize 7-segment display pins
  initDisplay();

  Serial.begin(9600);
}

void loop() {
  inputAdd = digitalRead(IrAdd);
  if (inputAdd == 0) {
    if (counter < 99) {
      counter++;
    }
    delay(300);
  }

  inputSub = digitalRead(IrSub);
  if (inputSub == 0) {
    if (counter > 0) {
      counter--;
    }
    delay(300);
  }

  displayCounter(counter);
  
  delay(50);
}