#include <Servo.h>
Servo myservo; // create servo object to control a servo
int val; // variable to read the value from the analog pin
long SuggestedSocialDistance = 100; //100 cm equals to One meter // Can be modifiable
const int pingPin = 9; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 8; // Echo Pin of Ultrasonic Sensor
int angle = 0;

void setup() {
  Serial.begin(9600); // Starting Serial Terminal
  myservo.attach(11); // attaches the servo on pin 1 to the servo object

}

void loop() {

  long duration, inches, distanceinCm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  inches = microsecondsToInches(duration);
  distanceinCm = microsecondsToCentimeters(duration);
  //Serial.print(inches);
  //Serial.print("in, ");

  if (distanceinCm < SuggestedSocialDistance) //hand is placed near sensor
  {
    distanceinCm = microsecondsToCentimeters(duration);
    delay(10);
    angle += 1;
    if (angle <= 180)
    {
      myservo.write(angle);                 //command to rotate the servo to the specified angle
      delay(5);

      Serial.println(angle);
    }
    else
    {

      for (angle = 180; angle >= 1; angle -= 10) // command to move from 180 degrees to 0 degrees // 
      {

        myservo.write(angle);              //command to rotate the servo to the specified angle
        Serial.println(angle);

      }
      angle = 0;

    }
    delay(5);
  }
  else
  {
    angle = 0;
    Serial.print("cm  ");
    Serial.println(distanceinCm);
    myservo.write(0);                 //command to rotate the servo to the specified angle
    delay(5);


  }
  //Serial.print("cm");
  //Serial.println();
  delay(10);
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
