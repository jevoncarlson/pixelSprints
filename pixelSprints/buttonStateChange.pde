void button() {
  buttonState0 = digitalRead(button0);
  if (buttonState0 != lastButtonState0) {
    if (buttonState0 == LOW) {
      buttonVar0 = !buttonVar0;
    } 
    else {
      
    }
  }

  lastButtonState0 = buttonState0;
  
  if (buttonVar0 == true) {
  goVal = true;
  digitalWrite(buttonLed0, HIGH);
  } else {
  goVal = false;
  digitalWrite(buttonLed0, LOW);
  }
}




