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


## REQUIREMENT MODELLING

### HIGH LEVEL REQUIREMENTS

* ID, Description of Test case, Input values, Expected Output, Actual Output</br>

Table : High level test plan</br>

|Test ID| Description| 
|:------|:-----------|
| H_01 | Robot should balance itself | 
| H_02 | Robot should balance the payload on it and maintain the balance. |
| H_03 | Robot must move without dropping the payload. | 
| H_04 | Robot must move in all directions while maintaining the balance. |

Table : Low level test plan</br>

|Test ID| Description| 
|:------|:-----------|
|L_01| The robot when switched on must maintain balance without any payload over it and when disturbed it must regain back to it's initial position.|
|L_02| When payload is applied the robot must maintain it's balance.|
|L_03| When the payload is placed on the robot it must move without dropping the payload. |
|L_04| The robot must move forward, reverse, left, right while maintaining the balance. |


