#ifndef GuiTool_h
#define GuiTool_h
#include <Audio.h>
// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=89,366
AudioSynthWaveform       waveform2;      //xy=92,420
AudioSynthNoisePink      pink1;          //xy=120,479
AudioMixer4              mixer1;         //xy=268,404
AudioOutputI2S           i2s1;           //xy=390,358
AudioConnection          patchCord1(waveform1, 0, mixer1, 0);
AudioConnection          patchCord2(waveform2, 0, mixer1, 1);
AudioConnection          patchCord3(pink1, 0, mixer1, 2);
AudioConnection          patchCord4(mixer1, 0, i2s1, 0);
AudioConnection          patchCord5(mixer1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=350,485
// GUItool: end automatically generated code

#endif