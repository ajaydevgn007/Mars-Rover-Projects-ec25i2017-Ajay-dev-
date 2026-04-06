# Smart Servo Password Lock

## Overview

A password-based locking system using a keypad and servo motor, where access is granted only when the correct password is entered.

---

## Components

* Arduino
* Keypad (4x4)
* Servo Motor
* LEDs
* Power Supply

---

## Features

* Password-based authentication
* Keypad input system
* Servo-controlled locking mechanism
* LED indication for correct/incorrect password
* Reset and clear input options

---

## Working

1. User enters password using the keypad
2. Input is stored and compared with the predefined password
3. Press `*` to confirm the password
4. If the password is correct:

   * Green LED turns ON
   * Red LED turns OFF
   * Servo rotates to unlock position
5. If the password is incorrect:

   * Red LED turns ON
   * Green LED turns OFF
   * Servo remains locked
6. Press `#` to clear the input

---

## Challenges Faced & Solutions

* **Password comparison** → Implemented string matching for validation
* **Servo control** → Adjusted angles for proper locking/unlocking
* **Input reset issue** → Fixed using clear (`#`) and confirm (`*`) keys

---
## Tinkercad Link:https://www.tinkercad.com/things/e08lCr23k58-smart-servo-password-lock?sharecode=lMhMqWLbj3Ca0Ku0nzrowmh83xxTqfBjpcd7zqlbXL4
