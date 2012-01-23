//should maybe be a sprite based thing
void tree(){
  if (raceStarting){
    
  }
}

void count3(){
  draw_pixelSprintsSprites(200, 8, 2, 0);
}

void count2(){
  draw_pixelSprintsSprites(200, 32, 2, 0);
}

void count1(){
  draw_pixelSprintsSprites(200, 56, 2, 0);
}

//change to green0 green1
void green0(){
  draw_pixelSprintsSprites(200, 80, 2, 0);
}

void green1(){
  draw_pixelSprintsSprites(200, 104, 2, 0);
}

void redLight0(){
  draw_pixelSprintsSprites(200, 104, 2, 0);
}

void redLight1(){
  GD.fill(atxy(25,36), BG_BLACK, 2);
  GD.fill(atxy(25,37), BG_BLACK, 2);
  GD.fill(atxy(25,33), BG_BLACK, 2);
  GD.fill(atxy(25,34), BG_BLACK, 2);
  GD.fill(atxy(25,30), BG_BLACK, 2);
  GD.fill(atxy(25,31), BG_BLACK, 2);
  GD.fill(atxy(25,27), BG_BLACK, 2);
  GD.fill(atxy(25,28), BG_BLACK, 2);
  GD.fill(atxy(25,25), BG_RED, 2);
  GD.fill(atxy(25,26), BG_RED, 2);
}

