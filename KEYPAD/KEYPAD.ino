void setup()
{  
pinMode(2 ,OUTPUT);pinMode(3 ,OUTPUT);pinMode(4 ,OUTPUT);
pinMode(5 ,OUTPUT);pinMode(6 ,OUTPUT);pinMode(7 ,OUTPUT);
pinMode(8 ,OUTPUT);pinMode(9 ,OUTPUT);pinMode(10 ,OUTPUT);
 Serial.begin(9600);
 }
 int i,j;
 int t=80;
 int a[][3]=
{{a[0][0]=2 ,a[0][1]=5 ,a[0][2]=8} ,
{a[1][0]=3 ,a[1][1]=6 ,a[1][2]=9} ,
{a[2][0]=4 ,a[2][1]=7 ,a[2][2]=10}};
int c=0;
int low=0;
void loop()
{
  c=Serial.read();
  
  if(c=='7')
  {i=0;j=0;
    digitalWrite(a[i][j],HIGH);
  delay(t);
  if(low==1)
  digitalWrite(a[i][j],LOW);
}
  if(c=='8')
  {i=0;j=1;
    digitalWrite(a[i][j],HIGH);
  delay(t);
  if(low==1)
  digitalWrite(a[i][j],LOW);
}


  if(c=='9')
  {i=0;j=2;
    digitalWrite(a[i][j],HIGH);
  delay(t);
  if(low==1)
  digitalWrite(a[i][j],LOW);
}
 
 
  if(c=='4')
  {i=1;j=0;
    digitalWrite(a[i][j],HIGH);
  delay(t);
  if(low==1)
  digitalWrite(a[i][j],LOW);
}
  if(c=='5')
  {i=1;j=1;
    digitalWrite(a[i][j],HIGH);
  delay(t);
  if(low==1)
  digitalWrite(a[i][j],LOW);
}
  if(c=='6')
  {i=1;j=2;
    digitalWrite(a[i][j],HIGH);
  delay(t);
  if(low==1)
  digitalWrite(a[i][j],LOW);
}
  if(c=='1')
  {i=2;j=0;
    digitalWrite(a[i][j],HIGH);
  delay(t);
  if(low==1)
  digitalWrite(a[i][j],LOW);
}
  if(c=='2')
  {i=2;j=1;
    digitalWrite(a[i][j],HIGH);
  delay(t);
  if(low==1)
  digitalWrite(a[i][j],LOW);
}

  if(c=='3')
  {i=2;j=2;
    digitalWrite(a[i][j],HIGH);
  delay(t);
  if(low==1)
  digitalWrite(a[i][j],LOW);
}


  if(c=='c')
  { delay(10);
for(int i=0;i<3;i++)
for(j=0;j<3;j++)
{digitalWrite(a[i][j],LOW);delay(40);}
}
}//lastt
