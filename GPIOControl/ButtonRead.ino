int buttonPin = 4; // Set the pin connected with button
int buttonState = 0; //Create button state variable and set value to 0 


void setup() {
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input
  Serial.begin(115200); 
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value
  Serial.println(buttonState); //Print the button state
  delay(500);
}