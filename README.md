# 🫀 Pulse Oximeter Using Arduino

## 📌 Overview

This project presents the design and implementation of a real-time **Pulse Oximeter system** using an Arduino microcontroller and the **MAX30100 sensor module**. The system measures **Heart Rate (BPM)** and **Blood Oxygen Saturation (SpO₂)** and displays the results on a 16x2 I2C LCD.

The project demonstrates practical knowledge of biomedical signal acquisition, embedded system programming, and real-time physiological parameter estimation.



## 🎯 Objective

To develop a low-cost, functional pulse oximeter prototype capable of acquiring photoplethysmography (PPG) signals and computing key cardiovascular parameters in real time.



## 🧠 System Description

The MAX30100 sensor integrates red and infrared LEDs along with a photodetector to measure variations in light absorption caused by pulsatile blood flow in the fingertip.

### System Workflow

1. The sensor emits red and infrared light through the fingertip.
2. Reflected light intensity varies according to blood volume changes.
3. The sensor converts these variations into digital PPG signals.
4. The Arduino processes the data using signal processing algorithms.
5. Heart Rate (BPM) and SpO₂ (%) are calculated.
6. Results are displayed on the LCD in real time.



## 🔧 Hardware Components

- Arduino Uno / Nano  
- MAX30100 Pulse Oximeter Sensor  
- 16x2 I2C LCD Display  
- Breadboard  
- Jumper Wires  
- USB Cable  



## 💻 Software & Libraries

- Arduino IDE  
- MAX30100 PulseOximeter Library  
- LiquidCrystal_I2C Library  
- Wire Library  



## ⚙️ Features

- Real-time Heart Rate measurement (BPM)  
- Real-time SpO₂ estimation (%)  
- I2C communication interface  
- LCD-based live display  
- Compact and low-cost prototype design  



## 📊 Output Example

```
BPM: 76
SpO2: 98%
```

SpO2: 98%
