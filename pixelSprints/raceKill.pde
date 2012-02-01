// kill the current race
void raceKill() {
  raceStarting = false;
  raceStarted = false;
  
  digitalWrite(goLed0,LOW);
  digitalWrite(goLed1,LOW);

}
