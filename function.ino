//Penggunaan Function
#define M_PI 3.14159265

float RPM (int jari2, int cepat)
{
float RPM;
RPM=(cepat*60)/(2*M_PI*jari2);
return RPM;
}

void setup() {
pinMode(5,OUTPUT);
}

void loop() {
int r,Putar,v=100;
for(r=7;r<=49;r=r+7)
{
Putar=RPM(r,v);
analogWrite(5,Putar);
}
}
