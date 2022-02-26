### ABSTRACT
The project titled “Social Distancing Cap” encompasses the introduction of the project and after that requirement modeling and under the requirement modeling it comprises the high-level requirements and the low-level requirements after the requirements are captured then the block diagram is created and as we go on then we have added the flowchart for easy understanding of the working process of the program or workflow of the program. After the program flowchart is added then the description of the working of the model is described and also the components will be listed that are going to be used for this particular project. Lastly, the conclusion will be added like how the project is done and how can we overcome the social distancing.

### DESCRIPTION
 :dart: The main objective of this project is, during the  Covid-19 pandemic social distancing is the main aspect that we must follow to prevent the spreading of the virus. Hence this project helps us to maintain strict distance between one another.
 
 ### REQUIREMENT MODELLING
 
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

![social distancing cap](https://user-images.githubusercontent.com/42488087/155828648-7b878f04-08e3-4f3b-b00c-0ba0ef16de6e.PNG)

### SWOT ANALYSIS


![swot analysis](https://user-images.githubusercontent.com/42488087/155829132-37898af4-6e0d-4d90-b020-45427d38dbd2.PNG)

### WORKING
The ultrasonic sensor is placed on the backside of the caps, which measures the distance between the sensor and the person who stood behind us. The cap is programmed using Arduino and through which the given variable can be modified accordingly in the given specific range. If the sensor senses a person below the threshold range then it sends a signal to the controller which actuates the servo motor that is placed adjacent to the person's ear.

