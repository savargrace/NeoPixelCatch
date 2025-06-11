#include <Adafruit_CircuitPlayground.h>

// Speaker values 
const uint8_t spONE[]           PROGMEM = {0x66,0x4E,0xA8,0x7A,0x8D,0xED,0xC4,0xB5,0xCD,0x89,0xD4,0xBC,0xA2,0xDB,0xD1,0x27,0xBE,0x33,0x4C,0xD9,0x4F,0x9B,0x4D,0x57,0x8A,0x76,0xBE,0xF5,0xA9,0xAA,0x2E,0x4F,0xD5,0xCD,0xB7,0xD9,0x43,0x5B,0x87,0x13,0x4C,0x0D,0xA7,0x75,0xAB,0x7B,0x3E,0xE3,0x19,0x6F,0x7F,0xA7,0xA7,0xF9,0xD0,0x30,0x5B,0x1D,0x9E,0x9A,0x34,0x44,0xBC,0xB6,0x7D,0xFE,0x1F};
const uint8_t spTWO[]           PROGMEM = {0x06,0xB8,0x59,0x34,0x00,0x27,0xD6,0x38,0x60,0x58,0xD3,0x91,0x55,0x2D,0xAA,0x65,0x9D,0x4F,0xD1,0xB8,0x39,0x17,0x67,0xBF,0xC5,0xAE,0x5A,0x1D,0xB5,0x7A,0x06,0xF6,0xA9,0x7D,0x9D,0xD2,0x6C,0x55,0xA5,0x26,0x75,0xC9,0x9B,0xDF,0xFC,0x6E,0x0E,0x63,0x3A,0x34,0x70,0xAF,0x3E,0xFF,0x1F};
const uint8_t spTHREE[]         PROGMEM = {0x0C,0xE8,0x2E,0x94,0x01,0x4D,0xBA,0x4A,0x40,0x03,0x16,0x68,0x69,0x36,0x1C,0xE9,0xBA,0xB8,0xE5,0x39,0x70,0x72,0x84,0xDB,0x51,0xA4,0xA8,0x4E,0xA3,0xC9,0x77,0xB1,0xCA,0xD6,0x52,0xA8,0x71,0xED,0x2A,0x7B,0x4B,0xA6,0xE0,0x37,0xB7,0x5A,0xDD,0x48,0x8E,0x94,0xF1,0x64,0xCE,0x6D,0x19,0x55,0x91,0xBC,0x6E,0xD7,0xAD,0x1E,0xF5,0xAA,0x77,0x7A,0xC6,0x70,0x22,0xCD,0xC7,0xF9,0x89,0xCF,0xFF,0x03};
const uint8_t spGOODBYE[]           PROGMEM ={0xA9,0x49,0xE1,0x54,0x91,0x2D,0xAF,0x22,0x07,0x55,0x29,0x69,0x7B,0xF2,0x18,0x38,0x32,0x3C,0xCB,0x4D,0x52,0xC8,0x4A,0x5A,0x65,0x99,0x52,0x21,0x6A,0x61,0x69,0x2E,0x45,0x46,0x2C,0x43,0xA9,0x3C,0x3D,0x1C,0x87,0x2A,0x3A,0xFB,0x50,0x6E,0x73,0xEB,0xDB,0xEC,0x6E,0x77,0xA3,0xF7,0xD1,0x4E,0x35,0xA2,0xCC,0x7E,0x74,0x3E,0xC6,0xA8,0x79,0x85,0xD1,0x86,0x64,0x65,0x16,0x95,0x5B,0x13,0x52,0xB0,0x65,0x94,0x2E,0xB5,0x4D,0x6A,0x55,0x65,0xF8,0x01,0x00,0x00};
const uint8_t spGAMES[]             PROGMEM ={0xAA,0x15,0x24,0x2A,0xD6,0xE4,0xB6,0xB6,0x79,0x13,0xB1,0x5C,0xB2,0xF3,0x93,0x97,0xA4,0x66,0x3E,0x75,0x77,0x3E,0xF2,0x52,0x8D,0xCD,0x26,0xF6,0xCC,0x7B,0xDE,0x8A,0x9A,0x14,0x2D,0xBA,0xD2,0xAC,0x66,0xDD,0xEB,0xDE,0x8E,0xB6,0x7A,0x47,0x0D,0xAF,0x95,0x3A,0x6D,0xB1,0x9A,0xDA,0x8E,0xED,0x6C,0x67,0x3A,0x6E,0xA5,0x46,0x42,0xB1,0xED,0x74,0x27,0x3A,0x62,0x32,0xC2,0x23,0x76,0xEA,0x7F,0x22,0x36,0x11,0xF5,0x06,0x38,0x1C,0xC8,0x00,0xDF,0x29,0x39,0xE0,0x7B,0x56,0x03,0x7C,0xCD,0xCA,0x80,0xCC,0x83,0x1E,0x00,0x00};
const uint8_t spOVER[]              PROGMEM ={0xA7,0xD0,0xAE,0x2F,0x50,0xBA,0x9D,0x5C,0xDB,0xFA,0x24,0xCE,0x3A,0x72,0x19,0xFA,0x15,0x25,0x73,0xCB,0x45,0xAE,0x67,0xB4,0x2E,0xAD,0x10,0xB1,0x4E,0xC1,0x3D,0xB7,0x3A,0x1A,0x57,0x95,0x70,0xD4,0x9A,0x6C,0x4C,0x85,0xCD,0x4D,0xAF,0x5A,0xA5,0x7D,0x9A,0x9B,0xBB,0x1B,0x8D,0x69,0x66,0xE9,0xDC,0xAD,0xB5,0xA6,0x84,0xD8,0xA8,0xB6,0xD4,0xE9,0x2E,0x56,0x23,0x7E,0x42,0xAF,0xBB,0xC8,0x94,0x78,0x76,0xBD,0x99,0x2C,0x59,0xEC,0xCB,0xF5,0xB2,0x98,0x64,0xA6,0xE4,0x07,0x00,0x00};

// Button pins
const byte switchPin = 7;
const byte leftButton = 5;
const byte rightButton = 4;

// Random variables 
int randNeoPixel;
int randColor;
int lastColor = -1;
int lastPin = -1;

// NeoPixel system
float pixelOnDuration = 1000;
unsigned long previousMillis = 0; 
bool lightOn = 0;

// Music system
float songSpeed = 2;
bool notePlaying = 0; 
int noteIndex = 0; 
unsigned long noteStartTime = 0;
float noteDuration;

// Active color flags 
volatile bool leftButtonScore = 0;
volatile bool rightButtonScore = 0;  

// Violitile flags for interrupt
volatile bool switchFlag = 0; 
volatile bool leftFlag = 0;
volatile bool rightFlag = 0;
volatile bool firstGame = 1;
volatile bool playerResponded = 0;

// Non Blocking Debounce Variables
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 25; 

// Game Variables
int life = 3; 
int score = 0;

const int tetrisTheme[][2] = {
  {659, 200}, {494, 100}, {523, 100}, {587, 200}, {523, 100}, {494, 100},
  {440, 200}, {440, 100}, {523, 100}, {659, 200}, {587, 100}, {523, 100},
  {494, 300}, {523, 100}, {587, 200}, {659, 200}, {523, 200}, {440, 200},
  {440, 200}, {0, 200},
  {587, 200}, {698, 100}, {880, 200}, {784, 100}, {698, 100},
  {659, 300}, {523, 100}, {659, 200}, {587, 100}, {523, 100},
  {494, 300}, {494, 100}, {523, 100}, {587, 200}, {523, 100},
  {494, 100}, {440, 300}, {440, 100}, {523, 100}, {659, 200},
  {587, 100}, {523, 100}, {494, 400}
}; // ChatGPT transcriped the song

// Finds length of song array
const int songLength = sizeof(tetrisTheme) / sizeof(tetrisTheme[0]);

// --- Initializes hardware and game settings ---
void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
  delay(4000);

  // --- Attach interrupt service routines for buttons ---
  attachInterrupt(digitalPinToInterrupt(switchPin), switchPushed, CHANGE);
  attachInterrupt(digitalPinToInterrupt(leftButton), leftFlagPushed, FALLING);
  attachInterrupt(digitalPinToInterrupt(rightButton), rightFlagPushed, FALLING);

  // --- Random seed for pixel & color randomness ---
  randomSeed(analogRead(0));

  // --- Game instructions displayed on serial monitor ---
  Serial.println("-------- WELCOME TO NEOPIXEL CATCH --------");
  Serial.println("");
  Serial.println("-------- RULES & OBJECTIVE --------");
  Serial.println("THE GOAL IS TO REACH THE HIGHEST SCORE POSSIBLE");
  Serial.println("CLICK RIGHT BUTTON WHEN RED");
  Serial.println("CLICK LEFT BUTTON WHEN GREEN");
  Serial.println("CORRECT CLICK = +1 SCORE");
  Serial.println("YOU BEGIN WITH 3 LIVES");
  Serial.println("MISS OR MISCLICK = -1 LIFE");
  Serial.println("THE GAME WILL SPEED UP WITH INCREASING DIFFICULTY");
  Serial.println("SLIDE THE SWITCH TO START OR RESTART");
  Serial.println("GOODLUCK!");
}

// --- Interrupt Service Routine for switch toggle ---
void switchPushed() {
  switchFlag = 1;
}

// --- ISR for left button press ---
void leftFlagPushed() {
  leftFlag = 1;
}

// --- ISR for right button press ---
void rightFlagPushed() {
  rightFlag = 1;
}

// --- Processes right button press: updates score or life based on current color ---
void rightButtonPushed() {
  if (rightFlag) {
    playerResponded = 1;
    rightFlag = 0;
    unsigned long currentTimeDebounce = millis(); // Non blocking debounce
    if (currentTimeDebounce - lastDebounceTime > debounceDelay) {
      lastDebounceTime = currentTimeDebounce;

      if (rightButtonScore) { // Correct match (red)
        rightButtonScore = 0;
        score++;
        Serial.println(String("Current Score: ") + score);
      } else if (!rightButtonScore) { // Wrong match 
        if (life > 0 && !firstGame) {
          life--;
          Serial.println(String("Lives Left: ") + life);
        }
        if (life == 0) {
          // Game over print and speak
          Serial.println("Game Over");
          CircuitPlayground.speaker.say(spGAMES);
          delay(500);
          CircuitPlayground.speaker.say(spOVER);
          delay(1000);  
          CircuitPlayground.speaker.say(spGOODBYE);
          delay(500);
          analogWrite(A0, 0);
          delay(100);
        }
      }
    }
  }
}

// --- Processes left button press: updates score or life based on current color ---
void leftButtonPushed() {
  if (leftFlag) {
    playerResponded = 1;
    leftFlag = 0;
    unsigned long currentTimeDebounce = millis(); // Non blocking debounce
    if (currentTimeDebounce - lastDebounceTime > debounceDelay) {
      lastDebounceTime = currentTimeDebounce;

      if (leftButtonScore) { // Correct match (green)
        leftButtonScore = 0;
        score++;
        Serial.println(String("Current Score: ") + score);
      } else if (!leftButtonScore) { // Wrong match 
        if (life > 0 && !firstGame) {
          life--;
          Serial.println(String("Lives Left: ") + life);
        }
        if (life == 0) {
          // Game over print and speak
          Serial.println("Game Over");
          CircuitPlayground.speaker.say(spGAMES);
          delay(500);
          CircuitPlayground.speaker.say(spOVER);
          delay(1000);  
          CircuitPlayground.speaker.say(spGOODBYE);
          delay(500);
          analogWrite(A0, 0);
          delay(100);
        }
      }
    }
  }
}

// --- Called when switch is triggered to start a new game ---
void switchButtonPushed() {
  if (switchFlag) {
    delay(500);
    Serial.println("--- GAME STARTING IN ---");
    Serial.println("3");
    CircuitPlayground.speaker.say(spTHREE);
    delay(1000);
    Serial.println("2");
    CircuitPlayground.speaker.say(spTWO);
    delay(1000);
    Serial.println("1");
    CircuitPlayground.speaker.say(spONE);
    delay(1000);
    analogWrite(A0, 0);
    delay(100);

    // Reset game state
    pixelOnDuration = 1000;
    songSpeed = 1;
    life = 3;
    score = 0;
    noteIndex = 0;
    firstGame = 0;
    switchFlag = 0;
  }
}

// --- Selects a random color value, avoiding immediate repeats ---
int nextColorValue() {
  int newColor;
  do {
    newColor = random(1,6);
  } while (newColor == lastColor);
  lastColor = newColor;
  return newColor;
}

// --- Selects a random NeoPixel index, avoiding immediate repeats ---
int nextPinValue() {
  int newPin;
  do {
    newPin = random(2,8);
  } while (newPin == lastPin);
  lastPin = newPin;
  return newPin;
}

// --- Main game loop which handles music, pixel timing, scoring, and end conditions ---
void loop() {
  rightButtonPushed();
  leftButtonPushed();
  switchButtonPushed();

  if (life > 0 && !firstGame) {
    unsigned long currentMillis = millis();

    // Play the next note of Tetris theme non-blocking
    if (!notePlaying && noteIndex < songLength) {
      noteDuration = songSpeed * tetrisTheme[noteIndex][1];
      CircuitPlayground.playTone(tetrisTheme[noteIndex][0], noteDuration);
      noteStartTime = currentMillis;
      notePlaying = 1; 
    }

    // Finish note and update timing and check if restart needed
    if (notePlaying && currentMillis - noteStartTime > noteDuration) {
      notePlaying = 0;
      noteIndex++;
      songSpeed *= 0.998; // Decreasing music note duration exponentially 
      songSpeed = max(.5f, songSpeed);
      if (noteIndex == songLength) { // If song is over, restart
        noteIndex = 0;
      }
    }

    // Time to light up a new pixel
    if (!lightOn && currentMillis - previousMillis > pixelOnDuration) {
      randNeoPixel = nextPinValue();
      randColor = nextColorValue();
      CircuitPlayground.clearPixels();

      // Reset scoring flags
      rightButtonScore = 0;
      leftButtonScore = 0;

      // Display color and set scoring condition
      switch(randColor) {
        case 1: CircuitPlayground.setPixelColor(randNeoPixel, 255, 0, 0); rightButtonScore = 1; break; // RED
        case 2: CircuitPlayground.setPixelColor(randNeoPixel, 0, 255, 0); leftButtonScore = 1; break; // GREEN
        case 3: CircuitPlayground.setPixelColor(randNeoPixel, 0, 0, 255); break; // BLUE
        case 4: CircuitPlayground.setPixelColor(randNeoPixel, 255, 130, 0); break; // YELLOW
        case 5: CircuitPlayground.setPixelColor(randNeoPixel, 255, 45, 0); break; // ORANGE
        case 6: CircuitPlayground.setPixelColor(randNeoPixel, 150, 0, 170); break; // PURPLE
      }

      previousMillis = currentMillis;
      pixelOnDuration *= .995; // Decreasing pixel on duration exponentially 
      pixelOnDuration = max(300.0f, pixelOnDuration);
      lightOn = 1;
    }

    // If pixel duration expired and player didn't respond in time
    if (lightOn && currentMillis - previousMillis > pixelOnDuration) {
      CircuitPlayground.clearPixels();
      if ((rightButtonScore || leftButtonScore) && !playerResponded) {
        life--;
        rightButtonScore = 0;
        leftButtonScore = 0;
        Serial.println(String("Lives Left: ") + life);

        if (life == 0) { 
          // Game over print and speak
          Serial.println("Game Over");
          CircuitPlayground.speaker.say(spGAMES);
          delay(500);
          CircuitPlayground.speaker.say(spOVER);
          delay(1000);
          CircuitPlayground.speaker.say(spGOODBYE);
          delay(500);
          analogWrite(A0, 0);
          delay(100);
        }
      }
      lightOn = 0;
    }
  }
  delay(1);
}
