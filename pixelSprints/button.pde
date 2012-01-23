void button(){
  buttonState0 = digitalRead(button0);
  if (raceStarted == false){
    if(buttonState0 == HIGH) {
      startReset();
     }
  }
  if (raceStarted == true){
   if(buttonState0 == HIGH) {
        raceInterupt();
    }   
  }
}

