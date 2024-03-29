# Smart Automated Trashcan

## Overview

Welcome to the repository for the "smart," automated trashcan project! In this project, we've created an innovative solution using an Arduino Uno microcontroller, various electronic components, and simple materials to build a trashcan that opens automatically when an object is detected.
![thumbnail](https://github.com/StefanosNtouvlis/Arduino_SmartBin/assets/81410555/933581c0-2891-4c1b-82cd-930b62e06c5b)


## Components

The main components utilized in this project include:
- **Arduino Uno Microcontroller:** Acts as the brain of the system, controlling the overall operation.
- **Servo Mini 9g Motor:** Responsible for opening and closing the lid of the trashcan.
- **5V Active Buzzer:** Produces sound signals to indicate the successful operation of the trashcan.
- **Ultrasonic Sensor:** Detects objects in the vicinity and triggers the lid-opening mechanism.
- **Jumper Cables:** Used for connecting and organizing the electronic components.
- **USB-B Cable:** Serves as both the power source and the means to upload the code to the Arduino Uno.

For non-electronic parts, we've employed:
- **Plastic Bin:** Forms the base of the trashcan.
- **Cardboard:** Used to create the lid.
- **Thread and Small Weight:** Generate the leverage needed for opening the lid.
- **Scotch Tape:** Secures connections between the lid and bin, as well as stabilizes the motor.
  
![components](https://github.com/StefanosNtouvlis/Arduino_SmartBin/assets/81410555/c0e32809-88fa-4163-b950-c2f75b756e20)
![power source](https://github.com/StefanosNtouvlis/Arduino_SmartBin/assets/81410555/dfb63644-d7f9-4dc2-8ef1-9e92ede0579c)



## Code

The code for this project is simple and written in the Arduino IDE. You can find and experiment with it by downloading the `smartbin.ino` file. The code is uploaded to the Arduino Uno via the USB-B cable connected to a laptop.

## Functionality

The smartbin operates as expected from an automated trashcan. When an object enters the active radius of the ultrasonic sensor (adjustable within the sensor's capabilities), a signal is sent to the controller. The motor turns, pulling the thread and opening the lid. Simultaneously, the buzzer activates, providing an audible signal of the successful operation (and potentially annoying the neighbors).

Feel free to explore the code, suggest improvements, or adapt the project to suit your needs! If you have any questions or run into issues, don't hesitate to reach out. Happy coding!
