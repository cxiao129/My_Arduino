void setup() {
  Serial.begin(9600);         //�������ӣ����ò�����Ϊ9600
  pinMode(2, INPUT_PULLUP);   //������2����Ϊ���벢�����ڲ���������
  pinMode(13, OUTPUT);        //������13����Ϊ���
}

void loop() {
  int sensorVal = digitalRead(2);   //����ťֵ���߻�ͣ��������
  Serial.println(sensorVal);        //�ڴ��м����������������ֵ
  //���������ﰴť���߼���ϵ�ǵ��õ�
  if (sensorVal == HIGH) {          //������ťʱ��ֵ�Ǹߵ�ƽ
    digitalWrite(13, LOW);          //�ر�13����
  } else {                          //���°�ťʱ��ֵ�ǵ͵�ƽ
    digitalWrite(13, HIGH);         //��13���ţ���� 
  }
}
