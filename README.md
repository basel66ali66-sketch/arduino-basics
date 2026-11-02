# Arduino Basics

Five beginner Arduino experiments built and simulated in [Tinkercad Circuits](https://www.tinkercad.com/circuits). Each experiment introduces one core concept of embedded electronics: digital output, digital input, analog input, PWM, and sensors.

## Experiments

| # | Experiment | Concepts |
|---|------------|----------|
| 01 | [Blink](experiments/01-blink/) | Digital output, `pinMode`, `digitalWrite`, `delay` |
| 02 | [Button-controlled LED](experiments/02-button-led/) | Digital input, pull-down resistor, `digitalRead`, `if/else` |
| 03 | [Potentiometer readout](experiments/03-potentiometer/) | Analog input, ADC (0-1023), `Serial`, voltage divider |
| 04 | [PWM brightness control](experiments/04-pwm-brightness/) | PWM output (0-255), `analogWrite`, `map` |
| 05 | [Light sensor](experiments/05-light-sensor/) | Sensor input, LDR voltage divider, analog reading |

Each folder holds the sketch (`.ino`) and a README with the wiring and what the experiment shows.

## Hardware

- Arduino Uno R3 (simulated)
- Breadboard, LEDs, 220 Ω and 10 kΩ resistors
- Pushbutton, potentiometer, photoresistor (LDR)

## How to run

1. Open [Tinkercad Circuits](https://www.tinkercad.com/circuits) and create a new circuit.
2. Place the components listed in each experiment's README and wire them as described.
3. Paste the `.ino` file into the code editor.
4. Start the simulation and open the Serial Monitor when the sketch uses it.

## What this covers

Input → decision → output. Every experiment is the same loop with a different sensor or actuator. That is the foundation for motor control, robotics, and closed-loop (PID) systems built in later projects.
