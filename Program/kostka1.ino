void setup() {
//DIODY LED
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
//PRZYCISK
pinMode(12,INPUT);
}
int oczka=0;
int przeskok=0;
void loop() {
randomSeed(millis());
if(digitalRead(12)==HIGH){
  delay(20);
przeskok=random(3,15);
  while(digitalRead(12)==HIGH);
delay(20);
}
int czas=50;
for(int i=1; i<=przeskok; i++){
digitalWrite(1,LOW);
  digitalWrite(2,LOW);
digitalWrite(3,LOW);
  digitalWrite(4,LOW);
digitalWrite(5,LOW);
  digitalWrite(6,LOW);
digitalWrite(7,LOW);
  oczka=random(1,7);
switch (oczka){
  case 1:
digitalWrite(4,HIGH);
  break;
case 2:
    digitalWrite(1,HIGH);
digitalWrite(7,HIGH);
  break;
case 3:
    digitalWrite(1,HIGH);
digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
break;
  case 4:
digitalWrite(1,HIGH);
    digitalWrite(3,HIGH);
digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
break;
  case 5:
digitalWrite(1,HIGH);
    digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
digitalWrite(7,HIGH);
  break;
case 6:
    digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
  break;
default:
  break;
}
  delay(czas);
czas+=40;
}
while(digitalRead(12)==LOW);
}
