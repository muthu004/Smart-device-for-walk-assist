// Code for object detection in Arduino
int trigPin = 3;
int echoPin = 2;
int ledPin=9;
int trigPin1 = 4;
int echoPin1 = 5;
int ledPin1=11;
int trigPin2 = 7;
int echoPin2= 6;
int ledPin2=10;
int trigPin3 = 12;
int echoPin3= 13;
int ledPin3=8;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(ledPin3, OUTPUT);
  
 
} 

void loop() {
  int duration, distance;
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);
  duration = pulseIn (echoPin, HIGH);
distance = duration * 0.034 / 2;

Serial.print("distance-");
      Serial.print(distance);  
      Serial.print("cm");
      Serial.println();

  if (distance > 20) {  // Change the number for long or short distances.
    digitalWrite (ledPin, HIGH);
  } else {
    digitalWrite (ledPin, LOW);
  }
  int duration2, distance2;
  digitalWrite (trigPin1, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin1, LOW);
  duration = pulseIn (echoPin1, HIGH);
distance2 = duration * 0.034 / 2;

Serial.print("distance2-");
      Serial.print(distance2);  
      Serial.print("cm");
      Serial.println();

  if (distance2 < 20) {  // Change the number for long or short distances.
    digitalWrite (ledPin1, HIGH);
  } else {
    digitalWrite (ledPin1, LOW);
  }
 
  
  int duration4, distance4;
  digitalWrite (trigPin3, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin3, LOW);
  duration = pulseIn (echoPin3, HIGH);
distance4 = duration * 0.034 / 2;

Serial.print("distance3-");
      Serial.print(distance4);  
      Serial.print("cm");
      Serial.println();

  if (distance4 < 20) {  // Change the number for long or short distances.
    digitalWrite (ledPin3, HIGH);
  } else {
    digitalWrite (ledPin3, LOW);
  }
 }
