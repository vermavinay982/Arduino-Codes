void setup() {
  pinMode(12,OUTPUT);  // put your setup code here, to run once:
Serial.begin(9600);
}

int a;
void loop() {
  // put your main code here, to run repeatedly:
//if(Serial.available()>0)
{a=Serial.read();
}

if(a=='1')
{digitalWrite(12,HIGH);
 }
else if(a=='2')
 digitalWrite(12,LOW);
}
