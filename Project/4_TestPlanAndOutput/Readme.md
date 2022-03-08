# TEST PLAN 
* For every feature, define a test case.</br>
:heavy_check_mark: How to run that feature.</br>
:heavy_check_mark: Define expected behaviour.</br>
:heavy_check_mark: Capture the actual result.</br>

# TABLE
* ID, Description of Test case, Input values, Expected Output, Actual Output</br>

Table : High level test plan</br>

|Test ID| Description| Input values| Expected Output|
|:------|:-----------|:-------|:-------|
| H_01 | The sensor shall measure the disance between one another | Sensor data. | - |
| H_02 | The servo motor shall turn on if the distance is below the threshold range. | Sensor data. | Motor actuates. |
| H_03 | The servo motor shall turn off if the distance is the person is out of the threshold range. | Sensor data. | Motor stops actuating. |

Table : Low level test plan</br>

|Test ID| Description| Input values| Expected Output|
|:------|:-----------|:-------|:-------|
|L_01|The ultrasonic sensor is used to measure the distance and it is turned on using a switch.| Sensor data.|
|L_02|Depending upon the distance if the person is within the threshold range the motor will turn on.|The sensor sends the data to the controller which decides the threshold range based on the code.| - .|
|L_03|If no one is within the range the motor will be in a turned off state.|-.|
