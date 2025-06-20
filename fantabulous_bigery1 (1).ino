// C++ code

# include <Servo.h>

Servo lidServo;
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 11;

long duration;
int distance;
bool lidOpen = false;

void setup() {
  lidServo.attach(servoPin);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  lidServo.write(0); // initial closed position 
}

void loop(){
  //trigger ultrasonic burst
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  //read echo 
  duration = pulseIn(echoPin,HIGH);
  distance = duration*0.034/2;
  
  Serial.print("Distance: ");
  Serial.println(distance);
  
  //to check if something is nearby
  if (distance<20){
    lidServo.write(90);//stay open
    delay(3000);//open for 3 seconds
    lidServo.write(0);//close lid
  }
  
  delay(500);
}