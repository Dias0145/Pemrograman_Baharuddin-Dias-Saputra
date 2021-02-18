//Penggunaan If Else

void setup() {
pinMode(13,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
digitalWrite(5,HIGH);
if(digitalRead(5)==HIGH)
{
digitalWrite(13,HIGH);
}
else
{
digitalWrite(13,LOW);
}
}
