#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#include <LiquidCrystal_I2C.h>

#define REPORTING_PERIOD_MS 1000

LiquidCrystal_I2C lcd(0x27, 16, 2);
PulseOximeter pox;

uint32_t lastReportTime = 0;
int heartRate = 0;
int spo2 = 0;

// Custom heart symbol for LCD
byte heartSymbol[8] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000,
  B00000
};

void onBeatDetected() {
  Serial.println("Beat detected");
}

void setup() {
  Serial.begin(9600);

  lcd.init();
  lcd.backlight();
  lcd.createChar(0, heartSymbol);

  lcd.setCursor(0, 0);
  lcd.print("Health Monitor");
  lcd.setCursor(0, 1);
  lcd.print("Initializing");
  delay(2000);
  lcd.clear();

  if (!pox.begin()) {
    lcd.print("Sensor Failed");
    while (1);
  }

  pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
  pox.setOnBeatDetectedCallback(onBeatDetected);

  lcd.clear();
  lcd.print("Place Finger");
}

void loop() {
  pox.update();

  if (millis() - lastReportTime >= REPORTING_PERIOD_MS) {
    heartRate = pox.getHeartRate();
    spo2 = pox.getSpO2();

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("HR: ");
    lcd.print(heartRate);
    lcd.print(" bpm");

    lcd.setCursor(0, 1);
    lcd.print("SpO2: ");
    lcd.print(spo2);
    lcd.print(" %");

    Serial.print("HR: ");
    Serial.print(heartRate);
    Serial.print(" bpm | SpO2: ");
    Serial.print(spo2);
    Serial.println(" %");

    lastReportTime = millis();
  }
}
