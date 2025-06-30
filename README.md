# automated dustbin
## Problem statement
Develop a simple arduino-UNO-based automated dustbin system which can open the lid when it senses the object movement nearby.
## Scope of the solution
1. Hygenic and contactless trashbin.
2. Energy efficient as it only uses power when activated.
3. Learning of how the ultrasonic sensors and servo motors work.
## Components required
1. arduino IDE 2.3.6
2. Tinkercad software
3. Ultrasonic sensor HC-SR04
4. Servo motor SG90
5. Jumper wires
6. Arduino UNO board
7. USB cable for connecting arduino board to the device
8. Dustbin
## Working principle
1. The ultrasonic sensor constantly measures the distance in front of the bin.
2. When it detects any object within a certain distannce (eg.<15 cm), it signals the Arduino.
3. The servo motor rotates to open the bin.
4. After usually a few seconds (3-5 sec.) the servo returns to its original position.
## Hardware assembly
1. Attach the servo motor to the lid.
2. Mount the ultrasonic sensor in front of the bin
3. use jumper wires to connect all componenets as per the circuit diagram.
4. Upload the code from Arduino IDE via USB cable.
## Conclusion
The automatic trash bin system is a simple yet powerful application of embedded system. It introduces us to  sensors, motors and automation.
