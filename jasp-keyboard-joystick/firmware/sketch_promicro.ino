#include <Joystick.h>

Joystick_ Joystick;

int xaxis = 0;
int yaxis = 0;

const bool initAutoSendState = true;

void setup() {
  Joystick.begin();
  pinMode(14,INPUT_PULLUP);
}

void loop() {

  xaxis = analogRead(A1);
  Joystick.setXAxis(xaxis);

  yaxis = analogRead(A0);
  Joystick.setYAxis(yaxis);

  if (digitalRead(14)== LOW)
  {Joystick.pressButton(0);}
  else
  {Joystick.releaseButton(0);}
}