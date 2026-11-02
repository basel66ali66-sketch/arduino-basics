# 03 — Potentiometer readout

Reads a knob position as a number from 0 to 1023 and prints it to the Serial Monitor.

## Components

- Arduino Uno R3, breadboard
- Potentiometer (10 kΩ)

## Wiring

1. Potentiometer outer legs → 5 V and GND.
2. Middle leg (wiper) → Arduino A0.

## Code

See `potentiometer.ino`.

## What it teaches

- `analogRead(A0)` returns a 10-bit value: 0–1023 maps to 0–5 V.
- The potentiometer works as a voltage divider: the wiper voltage changes with the knob.
- `Serial.begin(9600)` + `Serial.println()` let the board report values to the computer.
