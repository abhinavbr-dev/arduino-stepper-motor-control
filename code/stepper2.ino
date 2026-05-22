void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);//A
pinMode(4,OUTPUT);//B
pinMode(5,OUTPUT);//C
pinMode(6,OUTPUT);//D
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<=90/7.2;i++)
{
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(6,LOW);
  exit(0);
}
}

