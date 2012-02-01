// kill the current race
void raceKill() {
  raceStarted = false;
  digitalWrite(goLed0,LOW);
  digitalWrite(goLed1,LOW);
}
