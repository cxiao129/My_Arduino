void setup() {
  Serial.begin(9600);         //建立连接，设置波特率为9600
  pinMode(2, INPUT_PULLUP);   //将引脚2设置为输入并启用内部上拉电阻
  pinMode(13, OUTPUT);        //将引脚13设置为输出
}

void loop() {
  int sensorVal = digitalRead(2);   //将按钮值（高或低）读入变量
  Serial.println(sensorVal);        //在串行监视器里输出变量的值
  //串行上拉里按钮的逻辑关系是倒置的
  if (sensorVal == HIGH) {          //不按按钮时，值是高电平
    digitalWrite(13, LOW);          //关闭13引脚
  } else {                          //按下按钮时，值是低电平
    digitalWrite(13, HIGH);         //打开13引脚，输出 
  }
}
