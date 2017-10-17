/* 
programa name: blink_SOS
Description: The led will blink on and off in differnt ways to make the morise code S.O.S
It uses the led to turn on and off to make the sos message.
Setup: one led, 3 wires, one 561 5% resistors. Pins uses pin 5, gnd.
gnd i connected to the negtive of the the arudiono to the led then it goses to the resistors and finally to pin 5 
Date: Wesday 28 2017
name: ALex Niebergall
*/



int led = 5; // setup to get pin 5 to send out the intructions to the led
int uTime = 240;// set the rate
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);// intizlized how the pin will do with the information

}

void loop() {
  
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(uTime);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(uTime); // wait for a second

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(uTime);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(uTime);

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(uTime);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay( 3*uTime);

  // O

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3*uTime);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(uTime); // wait for a second
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3*uTime);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(uTime); // wait for a second

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3*uTime);
  digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(3*uTime);  

   //S

   digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(uTime);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(uTime); // wait for a second

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(uTime);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(uTime);

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(uTime);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay( 7*uTime);
  
}
