#include <MsTimer2.h>     //定时器库的头文件
int pinInterrupt=2;
int tick = 0;  //全局变量
//中断服务程序
void myTimer()
{
  tick=(tick+1)%10;
  digitalWrite(4,tick&0x1);
  digitalWrite(5,(tick>>1)&0x1);
  digitalWrite(6,(tick>>2)&0x1);
  digitalWrite(7,(tick>>3)&0x1);
}
void myfunc()
{
  tick=-1;
}
void setup()
{
  int i;
  Serial.begin(9600); 
  for(i=4;i<=10;i++)
  {
  	pinMode(i,OUTPUT);
  }
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  MsTimer2::set(1000, myTimer); 
  MsTimer2::start(); 
  attachInterrupt(digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
}
 
void loop()
{
  
}
