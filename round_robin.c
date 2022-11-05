int myLEDS[10];


char *myLEDs[] = {"LED1", "LED2","LED3","LED4","LED5",
				   "LED6","LED7","LED8","LED9", "LED10"
				 };
// QT = Quantom Time, 
int QT = 2000;

int sort_desc(const void *cmp1, const void *cmp2)
{
  int a = *((int *)cmp1);
  int b = *((int *)cmp2);
  return a > b ? -1 : (a < b ? 1 : 0);
}

void setup()
{
  Serial.begin(9600);
   pinMode(13, OUTPUT); // LED 1
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(4, OUTPUT);  // LED 10
  
}
void loop()
{ 
  
   Serial.println("BURST TIME LED_1: "); 
  while (Serial.available() == 0) {	// LED 1
  }
  int led1= Serial.parseInt();
  myLEDS[0] = led1;
  
  Serial.println("BURST TIME LED_2: ");
   while (Serial.available() == 0) { //LED 2
  }
  int led2= Serial.parseInt();
    myLEDS[1] = led2;
  
   Serial.println("BURST TIME LED_3: ");
   while (Serial.available() == 0) { // LED 3 
   }
  int led3 = Serial.parseInt();
    myLEDS[2] = led3;
  
   Serial.println("BURST TIMELED_4: ");
   while (Serial.available() == 0) { // LED 4
  }
  int led4 = Serial.parseInt();
    myLEDS[3] = led4;
  
   Serial.println("BURST TIME LED_5: ");
   while (Serial.available() == 0) { // LED 5
  }
  int led5= Serial.parseInt();
    myLEDS[4] = led5;
  
   Serial.println("BURST TIME LED_6: ");
  while (Serial.available() == 0) {// LED 6
  }
  int led6= Serial.parseInt();
    myLEDS[5] = led6;
  
   Serial.println("BURST TIME LED_7: ");
   while (Serial.available() == 0) { // LED 7
  }
  int led7= Serial.parseInt();
    myLEDS[6] = led7;
  
    Serial.println("BURST TIME LED_8: ");
   while (Serial.available() == 0) { // LED 8
  }
  int led8= Serial.parseInt();
    myLEDS[7] = led8;
  
    Serial.println("BURST TIME LED_9: ");
   while (Serial.available() == 0) { // LED 9
  }
  int led9= Serial.parseInt();
    myLEDS[8] = led9;
  
   Serial.println("BURST TIME LED_10: ");
   while (Serial.available() == 0) { // LED 10
  }
  int led10= Serial.parseInt();
    myLEDS[9] = led10;

 int myLEDS_length = sizeof(myLEDS) / sizeof(myLEDS[0]);
  qsort(myLEDS, myLEDS_length, sizeof(myLEDS[0]), sort_desc);
  
  // Get max burstime
 int MaxBurstTime = myLEDS[0];
  
  // Determines the number of round robins
 int RR_count = MaxBurstTime/QT;
  
	Serial.println("ROUND ROBIN STARTED");
  
  for (int j = 0; j < RR_count; j++){// this loop is intender per round robin
    for(int i = 0; i<10; i++) // per round robin these LEDS perform their task if conditions are met
  {
    if (myLEDs[i] == "LED1"){
      if (led1 > QT)				// Executes when burst time is above 2000
      	{ 
        	digitalWrite(13, HIGH);
  			delay(QT); 
  			digitalWrite(13, LOW);
      		led1 = led1 - QT;
     	 }
      else if (led1 > 0 <= QT) // Executes the remaining burst time
      	{
        	
        	digitalWrite(13, HIGH);
  			delay(led1); 
  			digitalWrite(13, LOW);
        	led1 = 0;
      	}
      else 
        {
           Serial.println("LED/TASK 1 FINISHED");
        }			
      }
      else if (myLEDs[i] == "LED2"){
        if (led2 > QT)
      	{
      	    digitalWrite(12, HIGH);
  			delay(QT); 
  			digitalWrite(12, LOW);
            led2 = led2 - QT;
        }
         else if (led2 > 0 <= QT) // Executes the remaining burst time
      	{
        	digitalWrite(12, HIGH);
  			delay(led2); 
  			digitalWrite(12, LOW);
            led2 = 0;
      	}
        else 
        {
           Serial.println("LED/TASK 2 FINISHED");
        }
      }
      else if (myLEDs[i] == "LED3"){
        if (led3 > QT)
      	{
        	digitalWrite(11, HIGH);
  			delay(QT); 
  			digitalWrite(11, LOW);
      	    led3 = led3 - QT;
        }
        else if (led3 > 0 <= QT) // Executes the remaining burst time
      	{
        	digitalWrite(11, HIGH);
  			delay(led3); 
  			digitalWrite(11, LOW);
            led3 = 0;
      	}
        else 
        {
           Serial.println("LED/TASK 3 FINISHED");
        }
      }
      else if (myLEDs[i] == "LED4"){
        if (led4 > QT)
      	{
       		 digitalWrite(10, HIGH);
  			 delay(QT); 
  			 digitalWrite(10, LOW);
        	 led4 = led4 - QT;
        }
        else if (led4 > 0 <= QT) // Executes the remaining burst time
      	{
        	digitalWrite(10, HIGH);
  			delay(led4); 
  			digitalWrite(10, LOW);
            led4 = 0;
      	}
        else 
        {
           Serial.println("LED/TASK 4 FINISHED");
        }
      }
      else if (myLEDs[i] == "LED5"){
        if (led5 > QT)
      	{
      	   digitalWrite(9, HIGH);
  		   delay(QT); 
  		   digitalWrite(9, LOW);
           led5 = led5 - QT;
        }
        else if (led5 > 0 <= QT) // Executes the remaining burst time
      	{
        	digitalWrite(9, HIGH);
  			delay(led5); 
  		    digitalWrite(9, LOW);
           led5 = 0;
      	}
        else 
        {
           Serial.println("LED/TASK 5 FINISHED");
        }
      }
      else if (myLEDs[i] == "LED6"){
        if (led6 > QT)
      	{
       		 digitalWrite(8, HIGH);
  			 delay(QT); 
  		     digitalWrite(8, LOW);
             led6 = led6 - QT;
        }
        else if (led6 > 0 <= QT) // Executes the remaining burst time
      	{
        	digitalWrite(8, HIGH);
  			delay(led6); 
  			digitalWrite(8, LOW);
            led6 = 0;
      	}
        else 
        {
           Serial.println("LED/TASK 6 FINISHED");
        }
      }
      else if (myLEDs[i] == "LED7"){
        if (led7 > QT)
      	{
       		 digitalWrite(7, HIGH);
  			 delay(QT); 
  		     digitalWrite(7, LOW);
             led7 = led7 - QT;
        }
        else if (led7 > 0 <= QT) // Executes the remaining burst time
      	{
        	digitalWrite(7, HIGH);
  			delay(led7); 
  			digitalWrite(7, LOW);
            led7 = 0;
      	}
        else 
        {
           Serial.println("LED/TASK 7 FINISHED");
        }
      }
      else if (myLEDs[i] == "LED8"){
        if (led8 > QT)
      	{
       		 digitalWrite(6, HIGH);
  			 delay(QT); 
  		     digitalWrite(6, LOW);
             led8 = led8 - QT;
        }
        else if (led8 > 0 <= QT) // Executes the remaining burst time
      	{
        	digitalWrite(6, HIGH);
  			delay(led8); 
  			digitalWrite(6, LOW);
            led8 = 0;
      	}
        else 
        {
           Serial.println("LED/TASK 8 FINISHED");
        }
      }
      else if (myLEDs[i] == "LED9"){
        if (led9 > QT)
      	{
       	    digitalWrite(5, HIGH);
  			delay(QT); 
  			digitalWrite(5, LOW);
      	 	led9 = led9 - QT;
        }
        else if (led9 > 0 <= QT) // Executes the remaining burst time
      	{
        	digitalWrite(5, HIGH);
  			delay(led9); 
  			digitalWrite(5, LOW);
            led9 = 0;
      	}
        else 
        {
           Serial.println("LED/TASK 9 FINISHED");
        }
      }
      else if (myLEDs[i] == "LED10"){
        if (led10 > QT)
      	{
        	digitalWrite(4, HIGH);
  			delay(QT); 
  			digitalWrite(4, LOW);
        	led10 = led10 - QT;
        }
        else if (led10 > 0 <= QT) // Executes the remaining burst time
      	{
        	digitalWrite(4, HIGH);
  			delay(led10); 
  			digitalWrite(4, LOW);
            led10 = 0;
      	}
        else 
        {
           Serial.println("LED/TASK 10 FINISHED");
        }
      }
    }
  }
  Serial.println("ROUND ROBIN FINISHED");
  while (Serial.available() == 0) { 
  }
  
}
