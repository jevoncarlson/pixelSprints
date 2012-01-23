void finish() {
  if(finish0 != 0 && finish1 != 0){
    if(raceStarted) {
      raceStarted = false;
      winner();
    }
  } 
}
