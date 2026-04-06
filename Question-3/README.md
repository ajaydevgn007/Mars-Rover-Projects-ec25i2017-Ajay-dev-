# Reaction Time Tester

## Overview

A simple system that measures how quickly a user responds to a visual signal using a button and LED.

---

## Components

* Arduino
* LED
* Push Button
* Resistors
* Power Supply

---

## Features

* Random delay for unpredictable signal
* LED-based reaction trigger
* Measures user reaction time in milliseconds
* Displays result on Serial Monitor

---

## Working

1. The system displays "Get Ready..." on the Serial Monitor
2. After a random delay, the LED turns ON
3. At that moment, timing starts using `millis()`
4. The user presses the button as quickly as possible
5. Reaction time is calculated and displayed
6. System resets and repeats the process

---

## Challenges Faced & Solutions

* **Accurate timing** → Used `millis()` instead of delay for precise measurement
* **Randomization** → Added random delay to avoid predictable timing

---
## Tinkercad Link:https://www.tinkercad.com/things/1nxzkisWBW7-reaction-speed-test?sharecode=6fO2b5MKS-wm_hBZwegvqcEPCyCnna_soLsaW5J7Xgw
