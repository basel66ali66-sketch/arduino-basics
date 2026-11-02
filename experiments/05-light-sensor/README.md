# 05 — Light sensor

Reads ambient light with a photoresistor (LDR) and prints the value to the Serial Monitor.

## Components

- Arduino Uno R3, breadboard
- Photoresistor (LDR)
- 10 kΩ resistor

## Wiring

1. 5 V → LDR leg 1.
2. LDR leg 2 → junction: Arduino A0 and 10 kΩ resistor leg 1 (all in the same node).
3. 10 kΩ resistor leg 2 → GND.

## Code

See `light-sensor.ino`.

## What it teaches

- An LDR changes resistance with light: bright light lowers resistance, darkness raises it.
- LDR + fixed resistor form a voltage divider; the midpoint voltage is read on A0.
- Bright light gives a high reading, darkness a low reading (with the LDR on the 5 V side).

## Note

A 1 kΩ resistor also works but gives a narrower range. 10 kΩ is the standard choice.
