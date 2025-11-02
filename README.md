# Motion Detection and Alert System using Arduino UNO

## Project Image
![Motion Detection and Alert System](Motion%20Detection%20and%20Alert%20System%20using%20Arduino%20UNO.png)

## Project Preview
You can view and interact with this project on Tinkercad here:  
[Tinkercad Preview](https://www.tinkercad.com/things/7OLqWUVRuvN-motion-detection-and-alert-system-using-arduino-uno?sharecode=gJrSnu_DONJMdRQ_x1HzWhpei_-0fTA1NRbmrG0-1n8)

## Description
This Arduino UNO project detects motion using a PIR sensor and immediately triggers alerts through LEDs and a buzzer. When movement is sensed, the LEDs light up and the buzzer sounds, providing instant notification. Simple, responsive, and effective, making it ideal for security systems, intruder alerts, or home automation applications.

## Components Used
- Arduino UNO  
- PIR Motion Sensor  
- LEDs (e.g., Red and Blue)  
- Buzzer  
- Breadboard  
- Jumper Wires  
- Resistors (if needed for LEDs)  

## Circuit Overview
- PIR sensor output connected to Arduino digital input pin.  
- LED anodes connected to digital output pins through resistors, cathodes to GND.  
- Buzzer positive connected to a digital output pin, negative to GND.  

## How It Works
1. The PIR sensor continuously monitors for motion.  
2. When motion is detected, it sends a HIGH signal to the Arduino.  
3. Arduino triggers the LEDs to turn on and the buzzer to sound.  
4. When no motion is detected, the system stays idle.  

## Applications
- Home security and intruder alert systems  
- Office or room monitoring  
- Automated lighting or alert systems  
