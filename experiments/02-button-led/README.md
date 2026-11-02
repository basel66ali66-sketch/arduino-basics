# 02 — Button-controlled LED

The LED turns on only while the pushbutton is pressed.

## Components

- Arduino Uno R3, breadboard
- Pushbutton (4-pin tactile)
- LED + 220 Ω resistor (output)
- 10 kΩ resistor (pull-down)

## Wiring

1. Button leg A → 5 V. Opposite leg → Arduino pin 2.
2. Same pin-2 node → 10 kΩ resistor → GND (pull-down).
3. Arduino pin 9 → 220 Ω resistor → LED anode. LED cathode → GND.

## Code

See `button-led.ino`.

## What it teaches

- `digitalRead(pin)` reads a digital input as HIGH or LOW.
- A pull-down resistor keeps the input at 0 V when the button is open, so the pin never floats.
- `if/else` turns an input into a decision: input → logic → output.
