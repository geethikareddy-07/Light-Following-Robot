# Light-Following Robot

A light-following robot built using Arduino, LDR sensors, and simple motor control logic. This robot detects the direction of light and moves towards it in real time.


## Components Used

- **Arduino UNO** – Microcontroller to process sensor inputs and control motors  
- **2 × LDRs (Light Dependent Resistors)** – Detect light intensity (left and right)  
- **L298N Motor Driver Module** – Controls speed and direction of two DC motors  
- **2 × DC Motors** – Provide movement to the robot  
- **Chassis** – Robot body  
- **Breadboard & Jumper Wires** – Connections  
- **Wheels, Power Supply** – For mobility and powering the circuit  


##  Circuit / Wiring Overview

- **LDRs** are connected to analog pins (e.g., A0 and A1) on the Arduino  
- **Motor driver** is connected to digital pins to control the motors  
- **DC motors** are powered via the motor driver using an external battery pack  
- Use 10kΩ resistors with LDRs in a voltage divider configuration
 

## Working Principle

The robot constantly reads the light intensity from both LDRs:
- If **left LDR** sees more light → robot turns **left**  
- If **right LDR** sees more light → robot turns **right**  
- If both see equal light → robot moves **forward**

This way, the robot follows a light source, like a flashlight, automatically adjusting its path.


##  How to Use

1. Connect all components as per the circuit diagram.
2. Upload the code (`light_following_robot.ino`) to your Arduino UNO board using the Arduino IDE.
3. Power the robot and place it near a light source.
4. Observe it turning and following the light direction.


## Future Improvements (Optional)

- Add obstacle detection using ultrasonic sensors  
- Tune light sensitivity thresholds  
- Implement PID control for smoother turns  
- Make it solar-powered or remote-controllable  

---

## License

This project is open-source and free to use under the [MIT License](https://opensource.org/licenses/MIT).
