// C++ code
//
int myLEDS[10];

// Sorting algorithm 
int sort_desc(const void *cmp1, const void *cmp2)
{
  // Need to cast the void * to int *
  int a = *((int *)cmp1);
  int b = *((int *)cmp2);
  // The comparison
  return a > b ? -1 : (a < b ? 1 : 0);
}
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
  // The program prompts user to enter BURST TIME
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
  
   Serial.println("BURST TIME LED_4: ");
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
  
	Serial.println("SJF STARTED");
  
 	 int myLEDS_length = sizeof(myLEDS) / sizeof(myLEDS[0]);
  //sort list descending
 	 qsort(myLEDS, myLEDS_length, sizeof(myLEDS[0]), sort_desc);
  
  // executing first the LED with the least amount of burst time
  for(int i = 9; i>=0;i--)
  {
    if (myLEDS[i] == led1){
        digitalWrite(13, HIGH);
  		delay(led1); 
  		digitalWrite(13, LOW);
      }
      else if (myLEDS[i] == led2){
        digitalWrite(12, HIGH);
  		delay(led2); 
  		digitalWrite(12, LOW);
      }
      else if (myLEDS[i] == led3){
        digitalWrite(11, HIGH);
  		delay(led3); 
  		digitalWrite(11, LOW);
      }
      else if (myLEDS[i] == led4){
        digitalWrite(10, HIGH);
  		delay(led4); 
  		digitalWrite(10, LOW);
      }
      else if (myLEDS[i] == led5){
        digitalWrite(9, HIGH);
  		delay(led5); 
  		digitalWrite(9, LOW);
      }
      else if (myLEDS[i] == led6){
        digitalWrite(8, HIGH);
  		delay(led6); 
  		digitalWrite(8, LOW);
      }
      else if (myLEDS[i] == led7){
        digitalWrite(7, HIGH);
  		delay(led7); 
  		digitalWrite(7, LOW);
      }
      else if (myLEDS[i] == led8){
        digitalWrite(6, HIGH);
  		delay(led8); 
  		digitalWrite(6, LOW);
      }
      else if (myLEDS[i] == led9){
        digitalWrite(5, HIGH);
  		delay(led9); 
  		digitalWrite(5, LOW);
      }
      else if (myLEDS[i] == led10){
        digitalWrite(4, HIGH);
  		delay(led10); 
  		digitalWrite(4, LOW);
      }
  }
  Serial.println("SJF FINISH");
  
  while (Serial.available() == 0) { 
  }
}
