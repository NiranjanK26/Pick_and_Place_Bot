char character;

void setup() {
  // put your setup code here, to run once: 
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  
  Serial.begin(9600);
}
void loop() {
if(Serial.available())
  character = Serial.read();
  
 if (character == 'D') {
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
analogWrite(5,250);
analogWrite(11,250);
character=0;
} 
else if (character =='E') {
  digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
analogWrite(5,250);
analogWrite(11,250);
character=0;   
}
else if (character =='C') {
   digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
analogWrite(5,250);
analogWrite(11,250);
character=0;

}
else if (character =='B') {
  digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
analogWrite(5,250);
analogWrite(11,250);
character=0;
}

else if (character =='b') {
analogWrite(5,0);
analogWrite(11,0);
}
else if (character =='c') {
analogWrite(5,0);
analogWrite(11,0);
}
else if (character =='d') {
analogWrite(5,0);
analogWrite(11,0);
}
else if (character =='e') {
analogWrite(5,0);
analogWrite(11,0);
}


}
