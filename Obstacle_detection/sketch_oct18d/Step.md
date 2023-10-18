To ensure the code provided for the IR sensor functions correctly, you need to establish specific connections and configure the Arduino environment. Follow these steps for setting up the code with the IR sensor:

**Step 1: Select the Appropriate Arduino Board**

1. Open the Arduino IDE on your computer.
2. Before proceeding, make sure you've selected the correct Arduino board from the "Tools" menu.
   - If you are using an Arduino Nano, select "Arduino Nano" from the "Tools" > "Board" menu.
   - If you are using an Arduino Uno, select "Arduino Uno" from the "Tools" > "Board" menu.

**Step 2: Connect the IR Sensor to Pin 7**

1. Connect the IR sensor module to the Arduino with the following connections:
   - Connect the signal pin of the IR sensor to digital pin 7 on the Arduino.
   - Connect the VCC (power) pin of the IR sensor to the 5V output on the Arduino.
   - Connect the GND (ground) pin of the IR sensor to any Ground (GND) pin on the Arduino.

**Step 3: Upload the Code**

1. Ensure you've selected the correct Arduino board in the "Tools" menu.
2. Copy and paste the provided Arduino code into the IDE.
3. Make sure your Arduino board is connected to your computer via USB.
4. Click the "Upload" button in the Arduino IDE to upload the code to your Arduino board.

**Step 4: Power on the Arduino**

1. Confirm that your Arduino is powered on and connected to your computer.

**Step 5: Observe the IR Sensor Output**

1. After uploading the code, the IR sensor will continuously check for obstacles.
2. Open the Arduino IDE's serial monitor (Tools > Serial Monitor) to view the output.
3. The code will print "Obstacle Detected!" if an obstacle is in front of the sensor and "No Obstacle" if there is no obstacle.
4. The code will continuously monitor the sensor with a 1-second delay between readings.

These steps will guide you in setting up and using the IR sensor with your Arduino, ensuring the correct board selection and necessary connections.

## Circuit Diagrams

Here are the circuit diagrams for both the Arduino Uno and Arduino Nano boards:

**Circuit Diagram for Arduino Uno Board**
![Arduino Uno Circuit Diagram](https://github.com/Adarsh-dhananjaya-k/arduino_workshop_TB/assets/76220527/d162d042-9387-46cb-b614-42c90cf2e49f)

**Circuit Diagram for Arduino Nano Board**
![Arduino Nano Circuit Diagram](https://github.com/Adarsh-dhananjaya-k/arduino_workshop_TB/assets/76220527/e1aa0f71-84dd-4472-8d94-a032856b1ce3)

Follow these steps and refer to the circuit diagrams to set up your Arduino board and IR sensor circuit successfully. Enjoy your Arduino project!
