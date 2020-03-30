#ifndef GlobalInits_H
#define GlobalInits_H

#include "Martone.h"

//============================
//Global Variable Declarations
//============================
extern int fish;
extern int dog;
extern int monkey;

//=================
//Global Constants
//=================
#define NUM 3
extern const int NUM2;

//============================
//Object Instantiations
//============================
extern struct stringParameters str[2];
extern Martone marStr[3];


//============================
//Struct Declarations
//============================
struct stringParameters
{
  int effect[3];
  int stringVolume;
  int waveform1;
  int waveform1Volume;
};
//============================
//Class Declarations
//============================
class string1
{
public:
  uint8_t length;
  uint8_t width;

  void ShowBalls()
  {
    Serial.println("balls");
  }
};

#endif