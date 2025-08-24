### Blinking LED

To burn the code into the board, please run:

```
cd ../

arduino-cli compile --upload --port /dev/ttyUSB0 --fqbn esp32:esp32:nodemcu-32s ./BlinkingLedEsp32
```