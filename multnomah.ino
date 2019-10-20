#define pwm0 0
#define pwm1 1

int revs=128;

void setup()
{
  pinMode(pwm0, OUTPUT);
  pinMode(pwm1, OUTPUT);
}

void loop()
{
  for (float i=0;i<(3.1415*2);i+=(3.1415/revs))
  {
    analogWrite(pwm0,127*(-cos(i)+1));
    analogWrite(pwm1,127*(sin(i)+1));
  } 
}
