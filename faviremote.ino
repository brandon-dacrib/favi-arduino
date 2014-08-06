int transmitPin = 2; 

void setup()
{
  pinMode(transmitPin,OUTPUT);
  digitalWrite(transmitPin,LOW);
  Serial.begin(9600);
}

void loop()
{
     screenDown();
     delay(10);
     screenDown();
     delay(10);
     screenDown();
     delay(10);
     //screenDown();
     //delay(1000);
}

void customDelay(unsigned long time) 
{
    unsigned long end_time = micros() + time;
    while(micros() < end_time);
}

//1000=1ms
void setStateWithDelay(int pin, int state,int delayTime)
{
  if(state==1)
    digitalWrite(pin,HIGH);
  else
    digitalWrite(pin,LOW);
    
  customDelay(delayTime);
}

void screenUp()
{

	digitalWrite(transmitPin,LOW);
}

void screenDown()
{
	Serial.print("transmitting ScreenDown\n");

	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,10000);
	digitalWrite(transmitPin,LOW);
    
    Serial.print("transmitted ScreenDown\n");
}

void screenStop()
{
	setStateWithDelay(transmitPin,1,10000);
	digitalWrite(transmitPin,LOW);
}
