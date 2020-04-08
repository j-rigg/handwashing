
int Step_1 = 2;
int Step_2 = 3;
int Step_3 = 4;
int Step_4 = 5;
int Step_5 = 6;
int Step_6 = 7; 
int Soap_pump = 1;
int Presense = 8;
int Water_valve = 0;

void setup() {
  // put your setup code here, to run once:
   pinMode(Step_6,OUTPUT); // Step 6
   pinMode(Step_5,OUTPUT); // Step 5
   pinMode(Step_4,OUTPUT); // Step 4
   pinMode(Step_3,OUTPUT); // Step 3
   pinMode(Step_2,OUTPUT); // Step 2
   pinMode(Step_1,OUTPUT); // Step 1
   pinMode(Soap_pump,OUTPUT); //Soap Pump
   pinMode(Water_valve,OUTPUT); //water valve
   pinMode(Presense,INPUT);  //Presense
}

void loop() 
{
  // put your main code here, to run repeatedly:
     if(digitalRead(Presense == HIGH)) 
     { 
      delay(200);
      if(digitalRead(Presense == HIGH))
        {
          digitalWrite(Water_valve,HIGH); /// Turn the water ON
          delay(2000); /// Wait 2 seconds
          digitalWrite(Water_valve,LOW); /// Turn OFF the water
          delay(100);/// Wait 100 mS 
          digitalWrite(Soap_pump,HIGH); /// Start Soap pump
          delay(1500);/// Wait 1.5 seconds
          digitalWrite(Soap_pump,LOW);/// Turn OFF the soap pump
          delay(100);/// Wait 100 mS 
          digitalWrite(Step_1,HIGH);/// Turn ON panel 1
          delay(5000);/// Wait 5 seconds
          digitalWrite(Step_1,LOW);/// Turn OFF panel 1
          delay(100);/// Wait 100 mS 
          digitalWrite(Step_2,HIGH);/// Turn ON panel 2
          delay(5000);/// Wait 5 seconds
          digitalWrite(Step_2,LOW);/// Turn OFF panel 2
          delay(100);/// Wait 100 mS 
          digitalWrite(Step_3,HIGH);/// Turn ON panel 3
          delay(5000);/// Wait 5 seconds
          digitalWrite(Step_3,LOW);/// Turn OFF panel 3
          delay(100);/// Wait 100 mS 
          digitalWrite(Step_4,HIGH);/// Turn ON panel 4
          delay(5000);/// Wait 5 seconds
          digitalWrite(Step_4,LOW);/// Turn OFF panel 4
          delay(100);/// Wait 100 mS 
          digitalWrite(Step_5,HIGH);/// Turn ON panel 5
          delay(5000);/// Wait 5 seconds
          digitalWrite(Step_5,LOW);/// Turn OFF panel 5
          delay(100);/// Wait 100 mS 
          digitalWrite(Step_6,HIGH);/// Turn ON panel 6
          delay(5000);/// Wait 5 seconds
          digitalWrite(Step_6,LOW);/// Turn OFF panel 6
          delay(100);/// Wait 100 mS 
          digitalWrite(Water_valve,HIGH);/// Turn the water ON
          delay(20000);/// Wait 20 seconds
          digitalWrite(Water_valve,LOW);/// Turn OFF the water
          delay(2000);/// Wait 2 seconds
        }
     }
}
