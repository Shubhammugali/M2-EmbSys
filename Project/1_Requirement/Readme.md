## SOCIAL DISTANCING CAP
# REQUIREMENT MODELLING
 
 Table : High level Requirements</br>

|Test ID| Description| 
|:------|:-----------|
| H_01 | The sensor shall measure the distance between one another. | 
| H_02 | The servo motor shall turn on if the distance is below the threshold range. |
| H_03 | The servo motor shall turn off if the person is out of the threshold range. |

Table : Low level Requirements</br>

|Test ID| Description|
|:------|:-----------|
|L_01| The ultrasonic sensor is used to measure the distance and it is turned on using a switch.|
|L_02| Depending upon the distance if the person is within the threshold range the motor will turn on.|
|L_03| If no one is within the range the motor will be in a turned-off state.|

### BLOCK DIAGRAM

![social distancing cap](https://user-images.githubusercontent.com/42488087/155119437-e711f269-ef87-422a-9b32-867863a97290.PNG)


### DESCRIPTION
 :dart: The main objective of this project is, during the  Covid-19 pandemic social distancing is the main aspect that we must follow to prevent the spreading of the virus. Hence this project helps us to maintain strict distance between one another.
 
 ### WORKING
 :dart: The ultrasonic sensor is placed on the backside of the caps, which measures the distance between the sensor and the person who stood behind us. The cap is programmed using Arduino and through which the given variable can be modified accordingly in the given specific range.</br>
 
 :dart: If the sensor senses a person below the threshold range then it sends a signal to the controller which actuates the servo motor that is placed adjacent to the person's ear.

## FLOWCHART


![social distancing flowchart](https://user-images.githubusercontent.com/42488087/155679974-32b97170-5f95-4a5e-bfc9-2be1bbcca11b.PNG)


### COMPONENTS AND THEIR USES
:one:
