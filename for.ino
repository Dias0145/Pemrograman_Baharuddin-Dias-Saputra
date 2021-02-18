//Penggunaan For

#include <Servo.h>
Servo servo1;


void setup() {
servo1.attach(7);
}

void loop() {
int i;
for(i=0;i<=10;i++)
{
servo1.write(0+18*i);
delay(1000);
}
}
