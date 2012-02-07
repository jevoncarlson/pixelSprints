// yellow lights are unified

void count3on(){
  draw_pixelSprintsSprites(200, 16, 3, 0);
  draw_pixelSprintsSprites(200, 284, 3, 0);
}

void count3off(){
  draw_pixelSprintsSprites(200, 16, 4, 0);
  draw_pixelSprintsSprites(200, 284, 4, 0);
}

void count2on(){
  draw_pixelSprintsSprites(200, 48, 3, 0);
  draw_pixelSprintsSprites(200, 252, 3, 0);
}

void count2off(){
  draw_pixelSprintsSprites(200, 48, 4, 0);
  draw_pixelSprintsSprites(200, 252, 4, 0);
}

void count1on(){
  draw_pixelSprintsSprites(200, 80, 3, 0);
  draw_pixelSprintsSprites(200, 220, 3, 0);
}

void count1off(){
  draw_pixelSprintsSprites(200, 80, 4, 0);
  draw_pixelSprintsSprites(200, 220, 4, 0);
}

// green and red lights are independent

void greenOn0(){
  draw_pixelSprintsSprites(200, 112, 7, 0);
}

void greenOn1(){
  draw_pixelSprintsSprites(200, 188, 7, 0);
}

void greenOff0(){
  draw_pixelSprintsSprites(200, 112, 8, 0);
}

void greenOff1(){
  draw_pixelSprintsSprites(200, 188, 8, 0);
}

void redOn0(){
  draw_pixelSprintsSprites(200, 144, 5, 0);
}

void redOn1(){
  draw_pixelSprintsSprites(200, 104, 5, 0);
}

void redOff0(){
  draw_pixelSprintsSprites(200, 144, 6, 0);
}

void redOff1(){
  draw_pixelSprintsSprites(200, 104, 6, 0);
}

