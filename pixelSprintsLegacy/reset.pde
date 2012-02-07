// reseting the variable values to 0, and the position of the win sprite
void reset() {
  
  ticks0 = 0;
  ticks1 = 0;
  
  finish0 = 256*0;
  finish1 = 256*0;
  
  raceStarting = true;
  raceStarted = false;
  
  lastCountDown = 4;
  lastCountDownMillis = millis();
  
  win = 310;
  
  count3off();
  count2off();
  count1off();
  greenOff0();
  greenOff1();
  redOff0();
  redOff1();
}
