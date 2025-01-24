# Obstacle Avoiding Remote Control Car

## Overview
This project is an obstacle-avoiding remote control car. The car is equipped with sensors that detect obstacles in its path and automatically stop the car to avoid collisions. It can also be controlled remotely using a smartphone or a remote control device.

## Features
- **Obstacle Avoidance:** Uses ultrasonic sensors to detect obstacles and avoid collisions.
- **Remote Control:** Can be controlled via a smartphone app or a remote control.
- **Real-time Feedback:** Provides real-time data on the car's status and surroundings.

## Components
- **Microcontroller:** Arduino Uno
- **Ultrasonic Sensors:** HC-SR04
- **Motor Driver:** L298N
- **DC Motors:** 2x DC motors with wheels
- **Bluetooth Module:** HC-05
- **Power Supply:** 9V battery or power bank
- **Chassis:** Car chassis with mounts for components

## Setup and Installation
1. **Hardware Assembly:**
   - Attach the DC motors to the car chassis.
   - Connect the L298N motor driver to the motors and the Arduino Uno.
   - Mount the ultrasonic sensors on the front of the car.
   - Connect the HC-05 Bluetooth module to the Arduino Uno.
   - Power the Arduino Uno with a 9V battery or a power bank.

2. **Software Installation:**
   - Download and install the Arduino IDE from [Arduino official website](https://www.arduino.cc/en/software).
   - Clone this repository or download the ZIP file and extract it.
   - Open the `Remote_Car.ino` file in the Arduino IDE.
   - Install necessary libraries if not already installed:
     - `NewPing` library for ultrasonic sensors
     - `SoftwareSerial` library for Bluetooth communication
   - Upload the code to the Arduino Uno.

3. **Remote Control Setup:**
   - Pair the HC-05 Bluetooth module with your smartphone.
   - Use an app like `Bluetooth RC Controller` to control the car remotely.

## Usage
1. **Remote Control Mode:**
   - Open the Bluetooth RC Controller app on your smartphone.
   - Connect to the HC-05 Bluetooth module.
   - Use the app interface to control the car's movement.

## Code Explanation
The code is divided into several sections:
- **Setup:** Initializes the pins and sensors.
- **Loop:** Continuously checks for obstacles and controls the motors accordingly.
- **Functions:** Handles obstacle detection, motor control, and Bluetooth communication.

## Troubleshooting
- **Car not moving:** Check the power supply and motor connections.
- **Sensors not detecting obstacles:** Ensure the ultrasonic sensors are connected properly and not obstructed.
- **Bluetooth not connecting:** Ensure the HC-05 module is properly paired with your smartphone.

## Contributing
Feel free to submit issues and pull requests to help improve this project. Contributions are welcome!

## Acknowledgments
- Special thanks to the open-source community for providing helpful libraries and resources.
