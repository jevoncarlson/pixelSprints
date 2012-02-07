/*
pixel_sprints ver 0.1a

goldsprints bike racing software for arduino
using modified opensprints hardware for input
and gameduino vga control shield for output

pin 2  - io interupt
pin 3  - start stop button
pin 4  - player 1 sensor
pin 5  - player 2 sensor
pin 6  - player 1 led
pin 7  - player 2 led
pin 8
pin 9  - SPI select
pin 10 - button led
pin 11 - SPI MOSI
pin 12 - SPI MISO
pin 13 - SPI SCK

Jan, 11, 2012
jevon elliott carlson

*/

#include <SPI.h>
#include <GD.h>

#include "pixelSprintsBg.h"
#include "pixelSprintsSprites.h"

//define background calls
#define BG_RZERO 139
#define BG_CZERO 149
#define BG_BLACK 0

//define sprite calls

//define pins
int button0 = 3; // start stop button
int buttonLed0 = 10; // button led
int sensor0 = 4; // player 1
int sensor1 = 5; // player 2
int goLed0 = 6;  // player 1 start stop light
int goLed1 = 7;  // player 2 start stop light


//-----variables

// booleans, bytes
boolean raceStarted = false;
boolean raceStarting = false;

boolean buttonState0 = 0;
boolean lastButtonState0 = 0;
boolean buttonVar0 = 0;

boolean goVal = false;

boolean previousValue0 = HIGH;
boolean previousValue1 = HIGH;
boolean value0 = 0;
boolean value1 = 0;

// chars, bytes

// integers, 2 bytes

int velo0 = 0;
int velo1 = 0;
int lastCountDown;   
int raceLengthTicks = 1904;
int updateInterval = 250;
int win = 320;
int pos0 = 24;
int pos1 = 24;

// longs, 4 bytes
unsigned long raceStartMillis;
unsigned long currentTimeMillis;
unsigned long ticks0;
unsigned long ticks1;
unsigned long finish0;
unsigned long finish1;
unsigned long lastCountDownMillis;
unsigned long lastUpdateMillis = 0;
unsigned long lastMphMillis = 0;
unsigned long tickSample0;
unsigned long mph0;
unsigned long lastTickSample0;
unsigned long tickSample1;
unsigned long mph1;
unsigned long lastTickSample1;

// start function__________________
void start() {
  raceStartMillis = millis();          
}


// setup
void setup() {
  //game setup ___________________
  pinMode(goLed0, OUTPUT);
  pinMode(goLed1, OUTPUT);
  digitalWrite(goLed0, LOW);
  digitalWrite(goLed1, LOW);
  
  pinMode(sensor0, INPUT);
  pinMode(sensor1, INPUT);
  digitalWrite(sensor0, HIGH);
  digitalWrite(sensor1, HIGH);
  
  pinMode(button0, INPUT);
  digitalWrite(button0, HIGH);
  pinMode(buttonLed0, OUTPUT);
  
  //video setup ___________________
  GD.begin();
  for (byte y = 0; y < 39; y++)
    GD.copy(RAM_PIC + y * 64, pixelSprintsBg_pic + y * 50, 50);
  GD.copy(RAM_CHR, pixelSprintsBg_chr, sizeof(pixelSprintsBg_chr));
  GD.copy(RAM_PAL, pixelSprintsBg_pal, sizeof(pixelSprintsBg_pal));
  GD.copy(PALETTE16A, pixelSprintsSprites_sprpal, sizeof(pixelSprintsSprites_sprpal));
  GD.copy(RAM_SPRIMG, pixelSprintsSprites_sprimg, sizeof(pixelSprintsSprites_sprimg));
}

// loop________________________________________________
void loop() {
  button(); // check for button press
  mph(); // calculate speeds
  
  // three states  starting, started, or other
  if (raceStarting) { // get ready
    countdown();
    if (goVal == false){ // change to false kills the race
      raceKill();
    }
  } else if (raceStarted){ // it's go time
    race();
    finish();
    if (goVal == false){ // change to false kills the race
      raceKill();
    }
  } else {
    if (goVal == true){ // change to true when other = starting
      raceStarting = true;
      reset();
    }
  }
 
  // GD.waitvblank();
  draw_red_time(atxy(3,5), finish0 );
  draw_red_speed(atxy(5,9), mph0);
  draw_cyan_time(atxy(38,5), finish1 );
  draw_cyan_speed(atxy(40,9), mph1);
  
  GD.__wstartspr(0);
  draw_pixelSprintsSprites(((ticks0 / 5.95) + 24), 180, 0, 0);
  draw_pixelSprintsSprites(((ticks1 / 5.95) + 24), 220, 1, 0);
  draw_pixelSprintsSprites(380, win, 2, 0);
  GD.__end();
  
}

