#include <Arduino.h>
#include "Functions.h"
#include "GlobalInits.h"
#include "Martone.h"

//===============================
//Global Variable Initializations
//===============================
int fish = 3;
int dog = 6;
int monkey = Funky(fish);

//=================
//Global Constants
//=================
const int NUM2 = 6;


struct stringParameters str[2]
{         //.effect .stringVolume .waveform1 .waveform1Volume
/*string1*/   {1,       2,             3,           4},  
/*string2*/   {5,       200,           7,           8}    
};


//======================
//Class Initialization
//======================
Martone marStr[3]
{//                  tuning.  waveform.
  /*string 1*/ Martone(1,      1),
  /*string 2*/ Martone(2,      2)
};











//***********************************************************
/*
struct stringParameters sp[2]
{
    {                //string 1
     .effect = 1,
     .stringVolume = 2,
     .waveform1 = 3,
     .waveform1Volume = 4
     },
     {              //string 2
     .effect = 1,
     .stringVolume = 2,
     .waveform1 = 3,
     .waveform1Volume = 4
     }
};
*/