int transmitPin = 2; 

void setup()
{
  pinMode(transmitPin,OUTPUT);
  digitalWrite(transmitPin,LOW);
  Serial.begin(9600);
}

void loop()
{
	//screen down
     screenDown();
     delay(100);
     screenDown();
     delay(100);
     screenDown();
     delay(1000000);

     //screen up
     screenUp();
     delay(100);
     screenUp();
     delay(100);
     screenUp();
     delay(1000000);
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
	Serial.print("transmitting ScreenUp\n");

	setStateWithDelay(transmitPin,1,200);//1
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,200);//5
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);//10
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,200);//15
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);//20
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,400);//25
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);//30
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,100);//35
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);//40
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);//45
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	digitalWrite(transmitPin,LOW);

	Serial.print("transmitted ScreenUp\n");
}

void screenDown()
{
	Serial.print("transmitting ScreenDown\n");

	setStateWithDelay(transmitPin,1,200);//1
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,200);//5
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);//10
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,200);//15
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);//20
	setStateWithDelay(transmitPin,1,200);
	setStateWithDelay(transmitPin,0,400);
	setStateWithDelay(transmitPin,1,500);
	setStateWithDelay(transmitPin,0,100);
	setStateWithDelay(transmitPin,1,400);//25
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);//30
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);//35
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);//40
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,500);
	setStateWithDelay(transmitPin,1,400);//45
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,400);
	setStateWithDelay(transmitPin,0,200);
	setStateWithDelay(transmitPin,1,100);
	setStateWithDelay(transmitPin,0,10000);//50
	digitalWrite(transmitPin,LOW);
    
    Serial.print("transmitted ScreenDown\n");
}

void screenStop()
{
	setStateWithDelay(transmitPin,1,10000);
	digitalWrite(transmitPin,LOW);
}
