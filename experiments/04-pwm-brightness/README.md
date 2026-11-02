# 04 — PWM brightness control

A potentiometer controls LED brightness instead of just on/off.

## Components

- Arduino Uno R3, breadboard
- Potentiometer (10 kΩ)
- LED + 220 Ω resistor

## Wiring

1. Potentiometer outer legs → 5 V and GND; wiper → A0.
2. Arduino pin 9 (~ PWM) → 220 Ω resistor → LED anode. LED cathode → GND.

## Code

See `pwm-brightness.ino`.

## What it teaches

- `analogWrite(pin, 0-255)` uses PWM to approximate an analog voltage by switching the pin rapidly.
- `map(value, 0, 1023, 0, 255)` converts the ADC range to the PWM range.
- Only PWM-capable pins (marked `~`) work with `analogWrite`.
