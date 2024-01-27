
#include <Servo.h>   //servo library
Servo servo;     
int trigPin = 5;    
int echoPin = 6;   
int servoPin = 7;
int soundPin = 4;  // Digital pin for sound output
long duration, dist, average;   
long aver[3];   //array for average


void setup() {       
    Serial.begin(9600);
    servo.attach(servoPin);  
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(soundPin, OUTPUT);  // Set sound pin as OUTPUT
    pinMode(trigPin, OUTPUT);  
    pinMode(echoPin, INPUT);  
    servo.write(0);         //close cap on power on
    delay(100);
    servo.detach(); 
} 

void measure() {  
digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (LOW is the voltage level)
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(15);
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
dist = (duration/2) / 29.1;    //obtain distance
}
void loop() { 
  for (int i=0;i<=2;i++) {   //average distance
    measure();               
   aver[i]=dist;            
    delay(10);              //delay between measurements
  }
 dist=(aver[0]+aver[1]+aver[2])/3;    

if ( dist<50 ) {
//Change distance as per your need
 digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
digitalWrite(soundPin, HIGH); // Turn on sound
 servo.attach(servoPin);
  delay(1);
 servo.write(0);  
 delay(3000);       
 servo.write(180);
 digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (LOW is the voltage level)  
 digitalWrite(soundPin, LOW);  // Turn off sound
  
 delay(1000);
 servo.detach(); 

}
Serial.print(dist);
}
