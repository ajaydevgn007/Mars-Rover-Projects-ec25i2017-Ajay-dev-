# Multi-LED Blinking System (Using millis)

## Overview

A system that controls multiple LEDs to blink at different time intervals simultaneously using non-blocking timing.

---

## Components

* Arduino
* 3 LEDs
* Resistors
* Connecting Wires
* Power Supply

---

## Features

* Independent blinking of multiple LEDs
* Uses `millis()` (non-blocking timing)
* No delay used → efficient execution
* Simultaneous operation of LEDs

---

## Working

1. Each LED is assigned a different time interval
2. The program continuously checks elapsed time using `millis()`
3. When the set interval is reached, the corresponding LED toggles
4. All LEDs operate independently without affecting each other
5. This allows multiple LEDs to blink at different speeds simultaneously

---

## Challenges Faced & Solutions

* **Simultaneous control issue** → Solved using separate timers for each LED
* **Delay blocking problem** → Replaced `delay()` with `millis()`

---
