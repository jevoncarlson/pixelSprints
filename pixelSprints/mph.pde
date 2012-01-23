void mph() {
  if((millis() - lastMphMillis) > 250) {
    tickSample0 = (ticks0 - lastTickSample0);
    mph0 = tickSample0 * 2.309;
    tickSample1 = (ticks1 - lastTickSample1);
    mph1 = tickSample1 * 2.309;
    
    lastTickSample0 = ticks0;
    lastTickSample1 = ticks1;
    lastMphMillis = millis();
  }
}
