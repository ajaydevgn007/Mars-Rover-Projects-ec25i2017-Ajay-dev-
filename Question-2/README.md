# RGB LED Control with Potentiometer

## Overview

A system that controls the color of an RGB LED using a potentiometer, along with a blinking LED whose speed varies based on input.

---

## Components

* Arduino
* RGB LED
* Potentiometer
* LED
* Resistors
* Connecting Wires
* Power Supply

---

## Features

* Smooth RGB color transition using potentiometer
* Dynamic color mixing (Red → Green → Blue)
* Adjustable blinking speed based on input
* Uses PWM for brightness control
* Non-blocking timing using `millis()`

---

## Working

1. The potentiometer value is read using analog input
2. Based on the value, RGB components are calculated
3. Colors smoothly transition between Red, Green, and Blue
4. The RGB LED displays the mixed color using PWM
5. The potentiometer also controls blinking speed of another LED
6. The LED toggles based on time calculated using `millis()`

---

## Challenges Faced & Solutions

* **Smooth color transition** → Solved using mapping of analog values to RGB ranges
* **Simultaneous control** → Used `millis()` for non-blocking blinking

---
## Tinkercad link:https://www.tinkercad.com/things/0OkpWLC4Mz9-controlling-blinking-speed-and-colour-of-led-using-potentiometer?sharecode=x2pFxD1iC2qlGkM7Z6fkIPzAvyj0Yv-X66H99pRSZOw
