void buttonStateChange() {
  buttonState0 = digitalRead(button0);
  if (buttonState0 != lastButtonState0) {
    if (buttonState == HIGH) {
      buttonPushCounter0 != lastPushCounter0;

    } 
    else {
      // if the current state is LOW then the button
      // wend from on to off:
    }
  }

  lastButtonState0 = buttonState0;
  
  if (buttonPushCounter0 == 1) {
    digitalWrite(ledPin, HIGH);
  } else {
   digitalWrite(ledPin, LOW);
  }
  
}





