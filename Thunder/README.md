### Thunder Animation Project

To create the animation header, please go to [Arduino LED Matrix Editor](https://ledmatrix-editor.arduino.cc/)

Before burning the code into the board, please install the required dependency:

```bash
arduino-cli lib search ArduinoGraphics

arduino-cli lib install ArduinoGraphics
```

To burn the code into the board, please run:

```bash
cd ../

arduino-cli compile --upload -b arduino:renesas_uno:unor4wifi -p /dev/ttyACM1 ./Thunder
```