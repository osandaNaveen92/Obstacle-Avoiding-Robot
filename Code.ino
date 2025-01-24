#include <Servo.h>
#include <Ultrasonic.h>

Servo s = Servo ();
Ultrasonic u = Ultrasonic(3,4); //trig,echo

int ENA = 11;
int IN1 = 10;
int IN2 = 9;

int ENB = 11;
int IN3 = 10;
int IN4 = 9;

void setup() {
    //put your setup code here,to run once
    s.attach (2);

    pinMode (8,OUTPUT);
    pinMode (12,OUTPUT);
    pinMode (13,OUTPUT);

    //Motor A
    pinMode (ENA,OUTPUT);
    pinMode (IN1,OUTPUT);
    pinMode (IN2,OUTPUT);
    analogWrite(ENA,250);

    //Motor A
    pinMode (ENB,OUTPUT);
    pinMode (IN3,OUTPUT);
    pinMode (IN4,OUTPUT);
    analogWrite(ENB,250);

    Serial.begin(9600);
}

void loop() {
    //put your main code here, to run repeatedly
    
    int x =Sereial.read();

    //FORWORD
    if( x == '1'){
        s.write(90);
        delay(400);
        int d = u.read();
    if (d > 15) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(500);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}
    }

// BACKWARD
if (x == '2') {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    digitalWrite(8, LOW);
}

// STOP
if (x == '5') {
    digitalWrite(8, HIGH);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(2000);
    digitalWrite(8, LOW);

// TURN LEFT FORWARD
if (x == '3') {
    s.write(135);
    delay(400);
    int d = u.read();
    if (d > 15) {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        digitalWrite(13, LOW);
    }
    s.write(90);
}

// TURN RIGHT FORWARD
if (x == '4') {
    s.write(45);
    delay(400);
    int d = u.read();
    if (d > 15) {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        digitalWrite(12, HIGH);
        delay(500);
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        digitalWrite(12, LOW);
    }
    s.write(90);
}

// TURN LEFT BACKWARD
if (x == '6') {
    s.write(135);
    delay(400);
    int d = u.read();
    if (d > 15) {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        digitalWrite(13, LOW);
    }
    s.write(90);
}

// TURN RIGHT BACKWARD
if (x == '7') {
    s.write(45);
    delay(400);
    int d = u.read();
    if (d > 15) {
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        digitalWrite(12, HIGH);
        delay(500);
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        digitalWrite(12, LOW);
    }
    s.write(90);

}