# NeoPixelCatch
Adafruit Circuit Playground Game for ENGR103 @OSU <br>

**NECESSARILY LIBRARIES AND DEVICES -** <br>
This game is designed for the Adafruit Circuit Playground Express <br>
The necessary library is only the one specific to this board <br>
**LIBRARY -**
[https://github.com/adafruit/Adafruit_CircuitPlayground] <br>

**GAME DESCRIPTIONS -** <br>
This game is a simple one. The player must press one of the two buttons on the Adafruit board when one of the correct NeoPixels is lit up. <br> The goal is to get the highest score. <br> The right side will be for when a green LED shows up, and the left side will be for when a red LED shows up. <br> The randomized colors will light up at increasing speed, making it increasingly difficult. The song will increase with speed as well. <br> Each time you click the correct button on the right, you will gain a point; if you mispress, then you will lose a life. <br> You will have 3 total  lives. If you want to play again, slide the board's switch over. <br>

**RULES -** <br>
If the green LED is lit and the player clicks the left button within the time that it is lit, the player scores 1 point <br>
If the red LED is lit and the player clicks the right button within the time it is lit, the player scores 1 point <br>
If at any time the player misses a click or clicks incorrectly, then 1 life will be lost <br>
The player has 3 total lives <br>

**SPECIFICATIONS -** <br>
**INPUTS:** <br>
Right button - click when NeoPixel is red <br>
Left button - click when NeoPixel is green <br>
Switch - player slides to start and restart <br>

**OUTPUTS-** <br>
NeoPixels will be randomly lit up with increasing speed. The time between when each red or green shows up will increasingly get shorter, making it more difficult as well <br>
The speaker will play a tune at increasing speed synced with LEDS <br>
