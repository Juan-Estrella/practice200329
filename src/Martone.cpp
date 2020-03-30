
//====================
//Class Implementation
//====================
#include "Martone.h"
#include <Arduino.h>

Martone::Martone()
{
    m_tuning = 1;
    m_waveform = 2;
}

Martone::Martone(int8_t tuning, int8_t waveform)
{
    m_tuning = tuning;
    m_waveform = waveform;
}

void Martone::ShowString()
{
    Serial.println(m_tuning);
}

Martone::~Martone() {}