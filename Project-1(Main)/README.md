# Autonomous Rover with Path Memory and Auto Return

## Overview

A rover that records its movement path and automatically retraces it when communication is lost.

---

## Components

* Arduino
* L293D H-bridge Motor Driver
* 2 DC Motors
* Power Supply

---

## Features

* Serial control (F, L, R, S)
* Path recording
* Auto return after 10 seconds of no input
* Simple fail-safe system

---

## Working

1. You send commands (F, L, R, S) to move the rover
2. The rover remembers each movement step
3. If no command is received for 10 seconds, it assumes connection is lost
4. It retraces the path in reverse:

   * Forward → Backward
   * Left → Right
   * Right → Left
5. Finally, it stops at the starting point

---

## Challenges Faced & Solutions

* **Motor control issue** → Fixed by testing connections and adjusting logic
* **Path storage issue** → Solved using an array and reverse traversal
* **Repeated execution issue** → Fixed using a flag (`returning`)

---

