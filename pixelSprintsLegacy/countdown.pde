void countdown() {
  if((millis() - lastCountDownMillis) > 1000){
    lastCountDown -= 1;
    lastCountDownMillis = millis();
  }
  if(lastCountDown == 3) {
    count3on();
  }
  if(lastCountDown == 2) {
    count2on();
  }
  if(lastCountDown == 1) {
    count1on();
  }
  if(lastCountDown == 0) {
    raceStarting = false;
    raceStarted = true;
      
    greenOn0();
    greenOn1();

    digitalWrite(goLed0,HIGH);
    digitalWrite(goLed1,HIGH);
  }
}
