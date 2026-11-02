# 01 — Blink

The "hello world" of Arduino: turn an LED on and off once per second.

## Components

- Arduino Uno R3
- Breadboard
- LED (any color)
- 220 Ω resistor

## Wiring

1. Arduino pin 13 → 220 Ω resistor → LED anode (long leg).
2. LED cathode (short leg) → GND.

## Code

See `blink.ino`.

## What it teaches

- `pinMode(pin, OUTPUT)` configures a pin to drive a signal.
- `digitalWrite(pin, HIGH/LOW)` sets the pin to 5 V or 0 V.
- `delay(ms)` blocks the program for a number of milliseconds.
- The 220 Ω resistor limits current so the LED does not burn out.
