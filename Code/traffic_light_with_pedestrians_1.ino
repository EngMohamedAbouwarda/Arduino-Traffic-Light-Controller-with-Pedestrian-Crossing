//declare the LEDs
int redLed = 8;
int yellowLed = 9;
int greenLed = 10;
  
// declare the push button
int pushButton = 7;
  
int readPushButton = 0;
  
void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(pushButton, INPUT);
  
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  
  Serial.begin(9600);
}

void loop()
{
 readPushButton = digitalRead(pushButton);
 if(readPushButton == 0){
  	digitalWrite(redLed, LOW);
  	digitalWrite(yellowLed, LOW);
  	digitalWrite(greenLed, HIGH);
  }
  else{
	digitalWrite(redLed, LOW);
  	digitalWrite(yellowLed, HIGH);
  	digitalWrite(greenLed, LOW);
    Serial.println("PEDESTRIANS WAITING");
    delay(3000);
    
    digitalWrite(redLed, HIGH);
  	digitalWrite(yellowLed, LOW);
  	digitalWrite(greenLed, LOW);
    Serial.println("PEDESTRIANS CROSSING");
    delay(5000);
  }
}