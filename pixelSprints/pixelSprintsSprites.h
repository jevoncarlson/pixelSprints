#define PIXELSPRINTSSPRITES_FRAMES 3
static void draw_pixelSprintsSprites(int x, int y, byte anim, byte rot, byte jk = 0) {
  switch (anim) {
  case 0:
    GD.xsprite(x, y, -16, -16, 0, 4, rot, jk);
    GD.xsprite(x, y, 0, -16, 0, 6, rot, jk);
    GD.xsprite(x, y, -16, 0, 1, 4, rot, jk);
    GD.xsprite(x, y, 0, 0, 1, 6, rot, jk);
    break;
  case 1:
    GD.xsprite(x, y, -16, -16, 2, 4, rot, jk);
    GD.xsprite(x, y, 0, -16, 2, 6, rot, jk);
    GD.xsprite(x, y, -16, 0, 3, 4, rot, jk);
    GD.xsprite(x, y, 0, 0, 3, 6, rot, jk);
    break;
  case 2:
    GD.xsprite(x, y, -16, -16, 4, 4, rot, jk);
    GD.xsprite(x, y, 0, -16, 4, 6, rot, jk);
    GD.xsprite(x, y, -16, 0, 5, 4, rot, jk);
    GD.xsprite(x, y, 0, 0, 5, 6, rot, jk);
    break;
  }
}

static PROGMEM prog_uchar pixelSprintsSprites_sprimg[] = {

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x4f,  0x4f,  0x4f,  0xff,  0xff,  0xff,  0xff, 
0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0xff,  0x4f,  0x4f,  0x4f,  0x44,  0x44,  0xf4,  0xf4,  0xf4, 
0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x44,  0x44,  0x44,  0x44,  0xf4,  0xf4,  0xf4, 
0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x44,  0x44,  0x44,  0x44,  0x44,  0xf4,  0xf4,  0xf4, 
0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x44,  0x44,  0x44,  0x44,  0xf4,  0xf4,  0xf4,  0xf4, 
0xff,  0xff,  0xff,  0xff,  0xff,  0x4f,  0x4f,  0xff,  0xf4,  0x44,  0x44,  0xf4,  0xf4,  0xf4,  0xf4,  0xff, 
0x4f,  0x4f,  0x4f,  0xff,  0xff,  0x4f,  0x4f,  0xff,  0xff,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4, 
0x4f,  0x4f,  0x4f,  0x4f,  0xff,  0x4f,  0x4f,  0xff,  0xf3,  0xf3,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4, 
0x4f,  0x4f,  0x4f,  0x4f,  0xff,  0x4f,  0x4f,  0xff,  0xff,  0xf3,  0xf3,  0xf3,  0xff,  0xff,  0xf4,  0xf4, 
0xff,  0x4f,  0x4f,  0xff,  0xff,  0x4f,  0x4f,  0x4f,  0x3f,  0x33,  0x3f,  0x3f,  0xff,  0xff,  0xff,  0xff, 
0x4f,  0x4f,  0x4f,  0x3f,  0x3f,  0x3f,  0x3f,  0x4f,  0x4f,  0xf3,  0xf3,  0xf3,  0x33,  0xf3,  0xf3,  0xf3, 
0x4f,  0x4f,  0xff,  0xff,  0xff,  0xff,  0xff,  0x3f,  0x4f,  0x43,  0xf3,  0xff,  0x3f,  0xff,  0xff,  0xff, 
0x4f,  0x4f,  0xff,  0xff,  0xff,  0xff,  0x3f,  0x3f,  0x4f,  0x43,  0x43,  0xff,  0x3f,  0xff,  0xff,  0xf4, 

0x4f,  0xff,  0xff,  0xff,  0xff,  0x3f,  0x3f,  0x3f,  0x33,  0x4f,  0x43,  0x33,  0xff,  0xff,  0xff,  0xf4, 
0x4f,  0xff,  0xff,  0xff,  0x3f,  0x3f,  0xff,  0xff,  0x33,  0xff,  0xff,  0xf3,  0xff,  0xff,  0xf4,  0xf4, 
0xff,  0xff,  0xff,  0x3f,  0x3f,  0xff,  0xff,  0xff,  0x33,  0xff,  0xff,  0xf3,  0xf3,  0xf4,  0xf4,  0xf4, 
0x4f,  0xff,  0x3f,  0x3f,  0xf3,  0xf3,  0xf3,  0x33,  0x33,  0x3f,  0x3f,  0x3f,  0xf3,  0xf4,  0xf4,  0xf4, 
0x4f,  0x3f,  0x33,  0xf3,  0xff,  0x3f,  0x33,  0xf3,  0x3f,  0x33,  0xf3,  0xff,  0x33,  0x33,  0xff,  0xff, 
0x3f,  0x33,  0xf3,  0xff,  0x3f,  0x3f,  0xf3,  0xf3,  0x3f,  0x3f,  0xf3,  0xf3,  0xff,  0x33,  0x3f,  0xff, 
0x3f,  0xf3,  0xff,  0xf3,  0x3f,  0xff,  0x33,  0xf3,  0x3f,  0x33,  0xff,  0xf3,  0x3f,  0xf3,  0x3f,  0xf3, 
0xf3,  0xff,  0xff,  0x3f,  0xf3,  0xff,  0xf3,  0x3f,  0x33,  0x3f,  0xff,  0x3f,  0xf3,  0xf3,  0xf3,  0x33, 
0xf3,  0xff,  0xff,  0x3f,  0xff,  0xf3,  0xf3,  0xf3,  0x3f,  0x3f,  0x3f,  0xff,  0xf3,  0xf3,  0xf3,  0x3f, 
0xf3,  0xf3,  0xf3,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x3f, 
0xf3,  0xff,  0xff,  0x3f,  0xff,  0xf3,  0xf3,  0xf3,  0x3f,  0x3f,  0x3f,  0xff,  0xf3,  0xff,  0xff,  0x3f, 
0xf3,  0xff,  0xff,  0x3f,  0xf3,  0xff,  0xf3,  0x3f,  0xf3,  0x3f,  0xff,  0x3f,  0xf3,  0xff,  0xff,  0x3f, 
0xff,  0xf3,  0xff,  0xf3,  0x3f,  0xff,  0x33,  0xff,  0xff,  0x33,  0xff,  0xf3,  0x3f,  0xff,  0x3f,  0xff, 
0xff,  0xf3,  0xf3,  0xff,  0x3f,  0x3f,  0xf3,  0xff,  0xff,  0x3f,  0xf3,  0xf3,  0xff,  0x3f,  0x3f,  0xff, 
0xff,  0xff,  0xf3,  0xf3,  0xff,  0x3f,  0x33,  0xff,  0xff,  0x33,  0xf3,  0xff,  0x3f,  0x3f,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xf3,  0xf3,  0xf3,  0x33,  0x33,  0x3f,  0x3f,  0x3f,  0xff,  0xff,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x2f,  0x2f,  0x2f,  0xff,  0xff,  0xff,  0xff, 
0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0xff,  0x2f,  0x2f,  0x2f,  0x22,  0x22,  0xf2,  0xf2,  0xf2, 
0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x22,  0x22,  0x22,  0x22,  0xf2,  0xf2,  0xf2, 
0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x22,  0x22,  0x22,  0x22,  0x22,  0xf2,  0xf2,  0xf2, 
0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x2f,  0x22,  0x22,  0x22,  0x22,  0xf2,  0xf2,  0xf2,  0xf2, 
0xff,  0xff,  0xff,  0xff,  0xff,  0x2f,  0x2f,  0xff,  0xf2,  0x22,  0x22,  0xf2,  0xf2,  0xf2,  0xf2,  0xff, 
0x2f,  0x2f,  0x2f,  0xff,  0xff,  0x2f,  0x2f,  0xff,  0xff,  0xf2,  0xf2,  0xf2,  0xf2,  0xf2,  0xf2,  0xf2, 
0x2f,  0x2f,  0x2f,  0x2f,  0xff,  0x2f,  0x2f,  0xff,  0xf3,  0xf3,  0xf2,  0xf2,  0xf2,  0xf2,  0xf2,  0xf2, 
0x2f,  0x2f,  0x2f,  0x2f,  0xff,  0x2f,  0x2f,  0xff,  0xff,  0xf3,  0xf3,  0xf3,  0xff,  0xff,  0xf2,  0xf2, 
0xff,  0x2f,  0x2f,  0xff,  0xff,  0x2f,  0x2f,  0x2f,  0x3f,  0x33,  0x3f,  0x3f,  0xff,  0xff,  0xff,  0xff, 
0x2f,  0x2f,  0x2f,  0x3f,  0x3f,  0x3f,  0x3f,  0x2f,  0x2f,  0xf3,  0xf3,  0xf3,  0x33,  0xf3,  0xf3,  0xf3, 
0x2f,  0x2f,  0xff,  0xff,  0xff,  0xff,  0xff,  0x3f,  0x2f,  0x23,  0xf3,  0xff,  0x3f,  0xff,  0xff,  0xff, 
0x2f,  0x2f,  0xff,  0xff,  0xff,  0xff,  0x3f,  0x3f,  0x2f,  0x23,  0x23,  0xff,  0x3f,  0xff,  0xff,  0xf2, 

0x2f,  0xff,  0xff,  0xff,  0xff,  0x3f,  0x3f,  0x3f,  0x33,  0x2f,  0x23,  0x33,  0xff,  0xff,  0xff,  0xf2, 
0x2f,  0xff,  0xff,  0xff,  0x3f,  0x3f,  0xff,  0xff,  0x33,  0xff,  0xff,  0xf3,  0xff,  0xff,  0xf2,  0xf2, 
0xff,  0xff,  0xff,  0x3f,  0x3f,  0xff,  0xff,  0xff,  0x33,  0xff,  0xff,  0xf3,  0xf3,  0xf2,  0xf2,  0xf2, 
0x2f,  0xff,  0x3f,  0x3f,  0xf3,  0xf3,  0xf3,  0x33,  0x33,  0x3f,  0x3f,  0x3f,  0xf3,  0xf2,  0xf2,  0xf2, 
0x2f,  0x3f,  0x33,  0xf3,  0xff,  0x3f,  0x33,  0xf3,  0x3f,  0x33,  0xf3,  0xff,  0x33,  0x33,  0xff,  0xff, 
0x3f,  0x33,  0xf3,  0xff,  0x3f,  0x3f,  0xf3,  0xf3,  0x3f,  0x3f,  0xf3,  0xf3,  0xff,  0x33,  0x3f,  0xff, 
0x3f,  0xf3,  0xff,  0xf3,  0x3f,  0xff,  0x33,  0xf3,  0x3f,  0x33,  0xff,  0xf3,  0x3f,  0xf3,  0x3f,  0xf3, 
0xf3,  0xff,  0xff,  0x3f,  0xf3,  0xff,  0xf3,  0x3f,  0x33,  0x3f,  0xff,  0x3f,  0xf3,  0xf3,  0xf3,  0x33, 
0xf3,  0xff,  0xff,  0x3f,  0xff,  0xf3,  0xf3,  0xf3,  0x3f,  0x3f,  0x3f,  0xff,  0xf3,  0xf3,  0xf3,  0x3f, 
0xf3,  0xf3,  0xf3,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x33,  0x3f, 
0xf3,  0xff,  0xff,  0x3f,  0xff,  0xf3,  0xf3,  0xf3,  0x3f,  0x3f,  0x3f,  0xff,  0xf3,  0xff,  0xff,  0x3f, 
0xf3,  0xff,  0xff,  0x3f,  0xf3,  0xff,  0xf3,  0x3f,  0xf3,  0x3f,  0xff,  0x3f,  0xf3,  0xff,  0xff,  0x3f, 
0xff,  0xf3,  0xff,  0xf3,  0x3f,  0xff,  0x33,  0xff,  0xff,  0x33,  0xff,  0xf3,  0x3f,  0xff,  0x3f,  0xff, 
0xff,  0xf3,  0xf3,  0xff,  0x3f,  0x3f,  0xf3,  0xff,  0xff,  0x3f,  0xf3,  0xf3,  0xff,  0x3f,  0x3f,  0xff, 
0xff,  0xff,  0xf3,  0xf3,  0xff,  0x3f,  0x33,  0xff,  0xff,  0x33,  0xf3,  0xff,  0x3f,  0x3f,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xf3,  0xf3,  0xf3,  0x33,  0x33,  0x3f,  0x3f,  0x3f,  0xff,  0xff,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0x0f,  0x1f,  0x0f,  0x0f,  0x0f,  0x1f,  0xff,  0xff,  0xff,  0xff,  0xf1,  0xf0,  0xf0,  0xf1,  0xf1,  0xf1, 
0x1f,  0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0x1f,  0xff,  0xff,  0xf1,  0xf0,  0xf0,  0xf1,  0xf1,  0xf1,  0xf0, 
0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0xff,  0xff,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4, 
0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0xff,  0xff,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4,  0xf0,  0xf0, 
0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x0f,  0xff,  0xff,  0xf0,  0xf4,  0xf4,  0xf4,  0xf4,  0xf0,  0xf0, 
0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf4,  0xf4,  0xf4,  0xf4,  0xf0, 
0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf4,  0xf4,  0xf4,  0xf4,  0xf0, 
0x5f,  0x5f,  0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf0,  0xf4,  0xf4,  0xf5,  0xf5, 
0x5f,  0x5f,  0x5f,  0x5f,  0x0f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf0,  0xf5,  0xf0,  0xf0,  0xf5, 
0x0f,  0x5f,  0x0f,  0x5f,  0x5f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf5,  0xf0,  0xf5,  0xf0,  0xf5, 
0x0f,  0x0f,  0x0f,  0x0f,  0x5f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf5,  0xf5,  0xf0,  0xf5,  0xf0, 
0x5f,  0x5f,  0x5f,  0x5f,  0x5f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf5,  0xf5,  0xf0,  0xf5,  0xf5, 
0x0f,  0x5f,  0x0f,  0x0f,  0x5f,  0x5f,  0x0f,  0xff,  0xff,  0xf0,  0xf5,  0xf0,  0xf0,  0xf5,  0xf5,  0xf5, 
0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0x5f,  0x0f,  0xff,  0xff,  0xf0,  0xf5,  0xf0,  0xf0,  0xf0,  0xf0,  0xf5, 
0x5f,  0x5f,  0x5f,  0x5f,  0x5f,  0x5f,  0x0f,  0xff,  0xff,  0xf0,  0xf5,  0xf5,  0xf5,  0xf5,  0xf5,  0xf5, 

0x1f,  0x0f,  0x5f,  0x5f,  0x0f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf0,  0xf5,  0xf5,  0xf1,  0xf0, 
0x5f,  0x5f,  0x5f,  0x4f,  0x0f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf0,  0xf0,  0xf5,  0xf5,  0xf5, 
0x5f,  0x5f,  0x5f,  0x5f,  0x4f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf0,  0xf0,  0xf5,  0xf5,  0xf5, 
0x5f,  0x5f,  0x5f,  0x5f,  0x4f,  0x0f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf0,  0xf5,  0xf5,  0xf5,  0xf5, 
0x0f,  0x5f,  0x5f,  0x5f,  0x5f,  0x4f,  0x0f,  0xff,  0xff,  0xf0,  0xf0,  0xf5,  0xf5,  0xf5,  0xf5,  0xf0, 
0x0f,  0x5f,  0x5f,  0x5f,  0x5f,  0x4f,  0x1f,  0xff,  0xff,  0xf1,  0xf0,  0xf5,  0xf5,  0xf5,  0xf5,  0xf0, 
0x0f,  0x5f,  0x0f,  0x4f,  0x4f,  0x1f,  0x4f,  0xff,  0xff,  0xf0,  0xf1,  0xf0,  0xf0,  0xf0,  0xf5,  0xf0, 
0x1f,  0x0f,  0x1f,  0x1f,  0x1f,  0x4f,  0x4f,  0xff,  0xff,  0xf0,  0xf0,  0xf1,  0xf1,  0xf1,  0xf0,  0xf1, 
0x1f,  0x1f,  0x1f,  0x1f,  0x1f,  0x1f,  0x1f,  0xff,  0xff,  0xf1,  0xf1,  0xf1,  0xf1,  0xf1,  0xf1,  0xf1, 
0x0f,  0x5f,  0x0f,  0x5f,  0x0f,  0x5f,  0x0f,  0xff,  0xff,  0xf5,  0xf0,  0xf4,  0xf0,  0xf4,  0xf0,  0xf4, 
0x5f,  0x0f,  0x5f,  0x0f,  0x5f,  0x0f,  0x5f,  0xff,  0xff,  0xf0,  0xf5,  0xf0,  0xf5,  0xf0,  0xf5,  0xf0, 
0x0f,  0x5f,  0x0f,  0x5f,  0x0f,  0x5f,  0x0f,  0xff,  0xff,  0xf5,  0xf0,  0xf5,  0xf0,  0xf5,  0xf0,  0xf5, 
0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0x4f,  0xff,  0xff,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4,  0xf4, 
0x1f,  0x0f,  0x0f,  0x0f,  0x0f,  0x0f,  0x1f,  0xff,  0xff,  0xf1,  0xf0,  0xf1,  0xf1,  0xf1,  0xf1,  0xf0, 
0x1f,  0x0f,  0x0f,  0x0f,  0x0f,  0x1f,  0xff,  0xff,  0xff,  0xff,  0xf1,  0xf0,  0xf1,  0xf1,  0xf1,  0xf0, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
};
static PROGMEM prog_uchar pixelSprintsSprites_sprpal[] = {

0xff,  0x7f,  0x52,  0x4a,  0xff,  0x03,  0x21,  0x04,  0x00,  0x7c,  0x1f,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x80, 
};