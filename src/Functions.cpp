#include <Arduino.h>
#include "GlobalInits.h"
#include "Functions.h"

//=========
//Functions
//=========

/***************************************************************************************************
   DESCRIPTION: -

   ARGUMENTS:   -

   RETURNS:     -

   NOTES:
 ****************************************************************************************************/
int Funky(int moo)
{
    return moo+10+fish+Ducky(10);
}
/***************************************************************************************************
   DESCRIPTION: -

   ARGUMENTS:   -

   RETURNS:     -

   NOTES:
 ****************************************************************************************************/
int Ducky(int cow)
{
    return cow+100;
}
/***************************************************************************************************
   DESCRIPTION: -Prints stuff on serial monitor

   ARGUMENTS:   -

   RETURNS:     -

   NOTES:
 ****************************************************************************************************/
void ShowStuff()
{
    Serial.println("hello");
}
/***************************************************************************************************
   DESCRIPTION: -

   ARGUMENTS:   -

   RETURNS:     -

   NOTES:
 ****************************************************************************************************/
void PtrStructFunct(stringParameters * ptr)
{
    ptr->waveform1 = 9;
}
/***************************************************************************************************
   DESCRIPTION: -Uses pointer to show structure member values.

   ARGUMENTS:   -

   RETURNS:     -

   NOTES:
 ****************************************************************************************************/
void ShowStructure(const stringParameters * ptr)
{
  Serial.println(ptr->stringVolume);
}