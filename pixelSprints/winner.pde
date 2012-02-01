//compare times for awarding

void winner() {
  if(finish0 < finish1) {
    win = 132;
  }
  else if (finish1 < finish0) {
    win = 172;
  }
  else if (finish0 == finish1) {
    win = 64;
  }
  draw_pixelSprintsSprites(380, win, 2, 0);
}
