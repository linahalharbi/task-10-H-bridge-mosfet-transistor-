void setup() //runs once 
{
  pinMode(6, OUTPUT); //output info as moving motors
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()// runs continously 
{
  digitalWrite(6, HIGH); // the upper motor rotate clockwise 
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);//the upper motor rotate counter clockwise 
  delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(4, HIGH);// the bottom motor rotate clockwise 
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);// the bottom motor rotate counter clockwise 
  delay(1000); // Wait for 1000 millisecond(s)
  
  
}
