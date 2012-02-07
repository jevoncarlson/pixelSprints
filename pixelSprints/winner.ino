//compare times for awarding

void winner() {
  if(finish0 < finish1) {
    win = 180;
  }
  else if (finish1 < finish0) {
    win = 220;
  }
  else if (finish0 == finish1) {
    win = 200;
  }
  draw_pixelSprintsSprites(380, win, 2, 0);
}
