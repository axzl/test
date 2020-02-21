String gps_data = "$GPRMC,092927.000,A,2235.9058,N,11400.0518,E,0.000,74.11,151216,,D*49";
int date1[6];//年月日时分秒
int date2[6];

void setup() 
{
  Serial.begin(9600);
  
}

void loop() 
{
  
}

void fun1()
{

}

void fun2()
{

}

void print_data()
{
  Serial.println("GPS raw data:");
  Serial.println(gps_data);
  Serial.println("fun1 result:");
  for (int i = 0; i < 6; i++)
  {
    Serial.print(date1[i]);
    Serial.print(" ");
  }
  Serial.print(\n");
  Serial.println("fun2 result:");
  for (int i = 0; i < 6; i++)
  {
    Serial.print(date2[i]);
    Serial.print(" ");
  }
  Serial.print(\n");
}
