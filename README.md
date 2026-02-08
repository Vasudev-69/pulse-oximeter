# Pulse Oximeter Using Arduino

## Overview
This project implements a basic pulse oximeter system using an Arduino and the MAX30100 sensor.
It measures heart rate (BPM) and blood oxygen saturation (SpO₂) and displays the values on an LCD.

## Components Used
- Arduino (Uno/Nano)
- MAX30100 Pulse Oximeter Sensor
- 16x2 I2C LCD
- Jumper Wires
- Breadboard
- USB Cable

## Working Principle
The MAX30100 sensor uses infrared and red LEDs to detect changes in blood volume.
From this signal, heart rate and SpO₂ values are calculated.
The Arduino processes the data and displays the results on an LCD in real time.

## Software & Libraries
- Arduino IDE
- MAX30100 PulseOximeter Library
- LiquidCrystal_I2C Library
- Wire Library

## Output
- Heart Rate displayed in BPM
- SpO₂ level displayed in percentage (%)



 
