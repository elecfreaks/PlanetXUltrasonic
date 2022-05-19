#include "PlanetXUltrasonic.h"

PlanetXUltrasonic::PlanetXUltrasonic(RJPin pin)
{
  _trigPin = pins[pin][0];
  _echoPin = pins[pin][1];
  pinMode(_trigPin, OUTPUT);
  pinMode(_echoPin, INPUT);
}

PlanetXUltrasonic::PlanetXUltrasonic() { }

void PlanetXUltrasonic::setPin(uint8_t trigPin, uint8_t echoPin)
{
  _trigPin = trigPin;
  _echoPin = echoPin;
  pinMode(_trigPin, OUTPUT);
  pinMode(_echoPin, INPUT);
}

uint16_t PlanetXUltrasonic::getDistance()
{
  delayMicroseconds(2);
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
  float distance = pulseIn(_echoPin, HIGH) / 58.00;
  return (uint16_t)distance;
}
