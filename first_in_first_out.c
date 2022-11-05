char *myLEDs[] = {"led1", "led10","led9","led8","led5",
				   "led6","led7","led3","led2", "led4"
				 };
void setup()
{
  Serial.begin(9600);
   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(4, OUTPUT);  
}

void loop()
{ 
	Serial.println("FIFO STARTED");

  
  	for(int i = 0; i<10; i++)
    {
      if (myLEDs[i] == "led1"){
        digitalWrite(13, HIGH);
  		delay(1000); 
  		digitalWrite(13, LOW);
      }
      else if (myLEDs[i] == "led2"){
        digitalWrite(12, HIGH);
  		delay(1000); 
  		digitalWrite(12, LOW);
      }
      else if (myLEDs[i] == "led3"){
        digitalWrite(11, HIGH);
  		delay(1000); 
  		digitalWrite(11, LOW);
      }
      else if (myLEDs[i] == "led4"){
        digitalWrite(10, HIGH);
  		delay(1000); 
  		digitalWrite(10, LOW);
      }
      else if (myLEDs[i] == "led5"){
        digitalWrite(9, HIGH);
  		delay(1000); 
  		digitalWrite(9, LOW);
      }
      else if (myLEDs[i] == "led6"){
        digitalWrite(8, HIGH);
  		delay(1000); 
  		digitalWrite(8, LOW);
      }
      else if (myLEDs[i] == "led7"){
        digitalWrite(7, HIGH);
  		delay(1000); 
  		digitalWrite(7, LOW);
      }
      else if (myLEDs[i] == "led8"){
        digitalWrite(6, HIGH);
  		delay(1000); 
  		digitalWrite(6, LOW);
      }
      else if (myLEDs[i] == "led9"){
        digitalWrite(5, HIGH);
  		delay(1000); 
  		digitalWrite(5, LOW);
      }
      else if (myLEDs[i] == "led10"){
        digitalWrite(4, HIGH);
  		delay(1000); 
  		digitalWrite(4, LOW);
      }
    }
  
  	Serial.println("FIFO FINISHED");
     
     while (Serial.available() == 0) { 
  	}

}
