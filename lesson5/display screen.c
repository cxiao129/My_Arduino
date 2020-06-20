void setup()
{
  int i=0;
  for(i=2;i<=11;i++){
  	pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

/*定义
2，3，4，5接口：信号输出接口
6接口：指示灯测试接口
7接口：空白接口
8，9，10，11接口：分别是1,2,3,4显示屏的锁销接口
*/

/*每次输入1位数字，显示在最低位数码管*/
/*
void loop()
{
  byte income=0;
  int i=0;
  for(i=6;i<11;i++){
  	digitalWrite(i, HIGH);
  }
  digitalWrite(11, LOW);
  if(Serial.available()>0)
  {
  	income=Serial.read();
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
  	delay(10);
  }
}
*/

/*每次输入四位数字，分别显示在四个数码管上*/
/*
int i=8;
void loop()
{
  byte income=0;
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  if(i==12)
  {
    i=8;
  }    
  if(Serial.available()>0)
  {
    income=Serial.read();
    digitalWrite(i, LOW);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    digitalWrite(i, HIGH);
    i++;
  }
}
*/
  
/*每次输入一串数字，滚动在4位数码管上显示*/

int i=8;
int control[4]={8,9,10,11};
void loop()
{
  int j=0;
  byte income=0;
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  if(i==12)
  {
    i=8;
  }    
  if(Serial.available()>0)
  {
    income=Serial.read();
    digitalWrite(i, LOW);
    for(j=0;j<4;j++)
    {
      if(control[j]!=i)
      {
        digitalWrite(control[j], HIGH);
      }
    }   
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    i++;
    delay(500);
  }
}

