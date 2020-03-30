/*
     The Program:
        -Just practice converting .ino files to PlatformIO with multiple files.
        -
        - 
     The Circuit:
        -Using a Teensy 3.6 microcontroller with Audio Shield
     References:
        - https://docs.platformio.org/en/latest/platforms/teensy.html //How to set USB Type in PlatformIO
        - book C++Primer Plus. ch7 pg 343. ch9 pg 447. ch4 pg 140.
        - https://youtu.be/FXhALMsHwEY //Cherno constructor tutorial
     Author(s):
       Juan Estrella
*/

//=============
//Include Files
//=============
#include <Arduino.h>
#include <Audio.h>
#include "Functions.h"
#include "GlobalInits.h" 
#include "GuiTool.h"
#include "Martone.h"

//======================
//Declare Class Objects
//======================
string1 balls; 

//================
//Setup. Run once
//================
void setup() 
{
  delay(5000);
  Serial.begin(115200);
  int blah = Funky(fish);
  Serial.println(fish);
  Serial.println(blah); 
  Serial.println(dog);
  Serial.println(monkey);
  Funky(fish);
  Serial.println(str[0].effect[2]);
  str[0].effect[2] = 7;
  Serial.println(str[0].effect[2]);
  ShowStuff();
  PtrStructFunct(&str[0]);
  Serial.println(str[0].waveform1);
  ShowStructure(&str[0]);
  balls.ShowBalls();
  balls.length = 111;
  Serial.println(balls.length);
  marStr[1].ShowString();
  Serial.println(NUM);
  Serial.println(NUM2);
  marStr[0].ShowString();

}

//=======================
//Loop. Run over and over
//=======================
void loop() 
{
   
}