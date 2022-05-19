#ifndef _PlanetXULTRASONIC_H_
#define _PlanetXULTRASONIC_H_

#include "RJPins.h"

class PlanetXUltrasonic
{
public:
  PlanetXUltrasonic(RJPin pin);
  PlanetXUltrasonic();
  void setPin(uint8_t trigPin, uint8_t echoPin);
  uint16_t getDistance();

private:
  uint8_t _trigPin;
  uint8_t _echoPin;
  uint16_t _distance;
};

#endif
