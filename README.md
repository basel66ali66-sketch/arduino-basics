# Arduino Basics

Five beginner Arduino experiments built and simulated in [Tinkercad Circuits](https://www.tinkercad.com/circuits). Each experiment introduces one core concept of embedded electronics: digital output, digital input, analog input, PWM, and sensors.

## Experiments

| # | Experiment | Concepts |
|---|------------|----------|
| 01 | Blink | Digital output, `pinMode`, `digitalWrite`, `delay` |
| 02 | Button-controlled LED | Digital input, pull-down resistor, `digitalRead`, `if/else` |
| 03 | Potentiometer readout | Analog input, ADC (0-1023), `Serial`, voltage divider |
| 04 | PWM brightness control | PWM output (0-255), `analogWrite`, `map` |
| 05 | Light sensor | Sensor input, LDR voltage divider, analog reading |

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
