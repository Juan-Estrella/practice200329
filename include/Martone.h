#ifndef Martone_H
#define Martone_H

#include <Arduino.h>

class Martone
{
private:
  int8_t m_tuning;
  int8_t m_waveform;

public:
  Martone();
  Martone(int8_t tuning, int8_t waveform);
  ~Martone();
  void SetScale();
  void SetOctave();
  void ShowString();
};

#endif