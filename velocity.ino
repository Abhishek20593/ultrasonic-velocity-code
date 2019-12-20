const int trigPin = 7;
const int echoPin = 8;


long duration1, duration2;
float distance, velocity;

void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
Serial.begin(9600); 
}

void loop()
{ 
   
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
 
  digitalWrite(trigPin, LOW);
 // duration1= pulseIn(echoPin, LOW);
  duration2 = pulseIn(echoPin, HIGH);
  distance= duration2/29/2;
  Serial.print("Distance_In_cm: ");
  Serial.println(distance);
  velocity= (distance/2)/(duration2);
Serial.print("velocity: ");
Serial.println(velocity);
//Serial.println(duration1);
Serial.println(duration2);
delay(2000);
}

