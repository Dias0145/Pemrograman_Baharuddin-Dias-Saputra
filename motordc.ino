//Menggerakkan Motor DC pada PIN PWM 5

void setup() {
pinMode(5,OUTPUT);
}

void loop() {
analogWrite(5,150);
}
