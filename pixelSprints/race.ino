void race() 
{
  currentTimeMillis = millis() - raceStartMillis;
  
  value0 = digitalRead(sensor0);
   if(value0 == HIGH && previousValue0 == LOW){
     ticks0 ++;
     if(finish0 == 0 && ticks0 >= raceLengthTicks) {
       finish0 = currentTimeMillis;          
           
       digitalWrite(goLed0, LOW);
       redOn0();
     }
   }
   previousValue0 = value0;
   
  value1 = digitalRead(sensor1);
   if(value1 == HIGH && previousValue1 == LOW){
     ticks1 ++;
     if(finish1 == 0 && ticks1 >= raceLengthTicks) {
       finish1 = currentTimeMillis;          
           
       digitalWrite(goLed1, LOW);
       redOn1();
     }
   }
   previousValue1 = value1;
}

