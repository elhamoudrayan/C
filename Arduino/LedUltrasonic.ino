const int trigPin = 6;
const int echoPin = 5;

const int redLedPin1 = 12;
const int redLedPin2 = 13;
const int yellowLedPin1 = 4;
const int yellowLedPin2 = 2;
const int greenLedPin1 = 8;
const int greenLedPin2 = 7;

long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redLedPin1, OUTPUT);
  pinMode(redLedPin2, OUTPUT);
  pinMode(yellowLedPin1, OUTPUT);
  pinMode(yellowLedPin2, OUTPUT);
  pinMode(greenLedPin1, OUTPUT);
  pinMode(greenLedPin2, OUTPUT);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  // Control the LEDs based on the distance
  if (distance >= 2 && distance <= 20) {
    // Red LEDs on
    digitalWrite(redLedPin1, HIGH);
    digitalWrite(redLedPin2, HIGH);
    digitalWrite(yellowLedPin1, LOW);
    digitalWrite(yellowLedPin2, LOW);
    digitalWrite(greenLedPin1, LOW);
    digitalWrite(greenLedPin2, LOW);
  }
  if (distance >= 21 && distance <= 40) {
        // yellow LEDs on
      digitalWrite(redLedPin1, LOW);
      digitalWrite(redLedPin2, LOW);
      digitalWrite(yellowLedPin1, HIGH);
      digitalWrite(yellowLedPin2, HIGH);
      digitalWrite(greenLedPin1, LOW);
      digitalWrite(greenLedPin2, LOW);
  }if (distance >= 40){
        // green LEDs on
      digitalWrite(redLedPin1, LOW);
      digitalWrite(redLedPin2, LOW);
      digitalWrite(greenLedPin1, HIGH);
      digitalWrite(greenLedPin2, HIGH);
      digitalWrite(yellowLedPin1, LOW);
      digitalWrite(yellowLedPin2, LOW);    
      
  }
    
    }
