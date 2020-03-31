#ifndef Functions_H
#define Functions_H
#include "GlobalInits.h"

//===================
//Function Prototypes
//===================
int Funky(int fish);
int Ducky(int cow);
void ShowStuff();
void PtrStructFunct(stringParameters * ptr);
void ShowStructure(const stringParameters * ptr);
void MyNoteOn(byte channel, byte note, byte velocity);                                  //Callback function.
void MyNoteOff(byte channel, byte note, byte velocity);                                 //Callback function.

#endif