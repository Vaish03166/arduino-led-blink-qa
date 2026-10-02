# Arduino LED Blink with QA Tracking

A basic embedded systems project that blinks an LED on an Arduino Uno,
used to practice version control and QA issue tracking on GitHub.

## Hardware
- Arduino Uno
- 1 x LED (any colour)
- 1 x 220 ohm resistor
- Breadboard and jumper wires

## Wiring
Pin 13 -> 220 ohm resistor -> LED anode (long leg)
LED cathode (short leg) -> GND

## How to upload
1. Install Arduino IDE.
2. Open `src/led_blink/led_blink.ino`.
3. Select Tools -> Board -> Arduino Uno and the correct port.
4. Click Upload.

## Project structure
- `src/led_blink/` - Arduino sketch
- `docs/` - wiring notes
- `.github/ISSUE_TEMPLATE/` - QA bug report template

## Work Done By
- Vaishnavi Atpadkar (202301070089)

## Issue tracking
All defects and improvements are tracked in the Issues tab.
