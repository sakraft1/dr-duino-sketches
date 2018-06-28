//Mode switching

int counter = 1;

int buttonPin = 8;
int LED1 = 11;
int LED2 = 10;
int LED3 = 06;

int delayTime;

void setup()
{
pinMode(buttonPin, INPUT);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);

Serial.begin(9600);
}

void loop() {
 //Handle input
 int switchVal = digitalRead(buttonPin);
 if(switchVal == LOW)
 {
   delay(500);  
   counter ++;
   //Reset count if over max mode number
   if(counter == 4)
   {
     counter = 1;
   }
 }

 
 //Change mode
 if(counter == 1)
 {
   delayTime = 250;
    
 }
 else if(counter == 2)
 {
   delayTime = 100;
   
 }
 else if(counter == 3)
 {
   delayTime = 50;
 }
 
 //Light show!
 digitalWrite(LED1, HIGH);
 delay(delayTime);
 digitalWrite(LED1, LOW);
 digitalWrite(LED2, HIGH);
 delay(delayTime);
 digitalWrite(LED2, LOW);
 digitalWrite(LED3, HIGH);
 delay(delayTime);
 digitalWrite(LED3, LOW);
 delay(delayTime);
}
