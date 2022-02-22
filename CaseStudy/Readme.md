# CASE STUDY 1
## LINE FOLLOWING ROBOT (LFR)

![LINE FOLLOWING ROBOT](https://user-images.githubusercontent.com/42488087/154838568-03b4affb-f9d6-4e68-ad3c-88571c2eb81e.PNG)

### DESCRIPTION
:point_right: The above block diagram is the representation of a simple Line following robot.</br>

:point_right: The line following robot consists of two IR sensors, two color sensors TCS230, Arduino Uno as a Microcontroller, dc motors.</br>

:point_right: IR sensors are used to detect the heat or detects the motion and it is one of the important sensor for a simple line following robot.</br>

:point_right: Color sensors(TCS 230) are used to detect and measure almost an infinite range of visible colors and in this robot it is mainly used to detect white and black coloured path.</br>

:point_right: Arduino Uno which is a programmable microcontroller board is used to control the entire motion of the robot by the help of program which could be compiled and run by the Arduino IDE.</br>

:point_right: The robot follows the given predefined path and the line is indicated by the help of black color line with white as a background or white as a contrast.

This is a brief description about the first case study which is Line following robot.



# CASE STUDY 2
## TWO WHEELED SELF BALANCING ROBOT

![TWBR](https://user-images.githubusercontent.com/42488087/154841372-3f9a9eae-7032-4dd1-974b-223517c77214.PNG)


### DESCRIPTION

:dart: The robot consists of sensor, Motors, Motor Driver and Microcontroller.

#### SENSOR
:dart: The sensors used are accelerometer and gyroscope sensor which is collectively called MPU6050 and are used to maintain and balance the positiom.

#### MOTORS
:dart: The motors are used in the rotation of wheels and for motion of the robot.

#### MOTOR DRIVER
:dart: The motor drivers are used to control the speed of motors and are very much helpful in maintaining the balance of the robot.

#### MICROCONTROLLER
:dart: The microcontroller used is Arduino Uno where the robot is completely controlled from balancing to the controlled motion of the robot so that the robot is balanced position and the program is written in such a way that the robot automatically gets balanced and makes sure that it doesn't lose the balance.

#### APPLICATION
* One of the most general purpose application is it carries payload from one end to the other end.</br>
* The self balancing robot can also be used as medium of transportation.



# CASE STUDY 3
## SOCIAL DISTANCING CAP
### BLOCK DIAGRAM

![social distancing cap](https://user-images.githubusercontent.com/42488087/155119437-e711f269-ef87-422a-9b32-867863a97290.PNG)

### DESCRIPTION
 :dart: The main objective of this project is, during Covid-19 pandemic social distancing is the main aspect that we must follow to prevent the spreading of the virus. Hence this project helps us to maintain strict distance between one another.
 
 ### WORKING
 :dart: The ultrasonic sensor is placed on backside of the caps, which measure the distance between the sensor and person stood behind us. The cap is programmed using Arduino and through which the given variable can be modified accordingly in the given specific range.</br>
 
 :dart: If the sensor senses a person below the threshold range then it sends signal to the controller which actuates the servo motor that is placed adjacent to the person's ear.
 
 # REQUIREMENT MODELLING
 
 Table : High level test plan</br>

|Test ID| Description| 
|:------|:-----------|
| H_01 | The sensor shall measure the distance between one another. | 
| H_02 | The servo motor shall turn on if the distance is below the threshold range. |
| H_03 | . |

Table : Low level test plan</br>

|Test ID| Description| Input values| Expected Output|
|:------|:-----------|:-------|:-------|
|L_01|Checking if a 3X3 grid is drawn or not. This 3X3 grid is the basic need to play the game.|Player has to choose the symbol.| 3X3 graph is drawn.|
|L_02|Play proceeds with the player or computer alternately placing their marks in any unoccupied cell. Check if player/computer got 3 of his symbols consecutively in vertical, horizontal or diagonal format.|'X' or 'O' input from the player/computer.| The player/computer won the game.|
|L_03|Check if a total of 9 moves have been made player+computer, the game ends up in a draw when neither the user nor the computer is able to get 3 marks in a row.|9 inputs from (player+computer).|The game is over.|






