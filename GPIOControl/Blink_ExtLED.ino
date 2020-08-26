// set pin numbers
const int ledPin1 = 12; // the number of the LED #1 pin
const int ledPin2 = 14; // the number of the LED #2 pin

void setup() {
  // initialize the LED pin as an output  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // turn LED on  
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(1000); //stop for 1 sencond
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  delay(1000); //stop for 1 sencond
}