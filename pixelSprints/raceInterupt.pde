// kill the current race
void raceInterupt() {
  raceStarted = false;
  digitalWrite(goLed0,LOW);
  digitalWrite(goLed1,LOW);
}
