void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(13, HIGH);   
  delay(500);              
  digitalWrite(13, LOW);    
  delay(500);
  digitalWrite(13, HIGH);   
  delay(50);              
  digitalWrite(13, LOW);    
  delay(50);    
  digitalWrite(13, HIGH);   
  delay(500);              
  digitalWrite(13, LOW);    
  delay(5000);           
  }
