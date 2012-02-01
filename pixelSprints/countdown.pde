void countdown()
{
  if (raceStarting) {
    if((millis() - lastCountDownMillis) > 1000){
      lastCountDown -= 1;
      lastCountDownMillis = millis();
    }
    if(lastCountDown == 3) {
      count3();
    }
    if(lastCountDown == 2) {
      count2();
    }
    if(lastCountDown == 1) {
      count1();
    }
    if(lastCountDown == 0) {
      start();
      raceStarting = false;
      raceStarted = true;
      
      green0();
      green1();

      digitalWrite(goLed0,HIGH);
      digitalWrite(goLed1,HIGH);
    }
  }
}
