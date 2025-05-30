# NeoPixelCatch
**Adafruit Circuit Playground Game for ENGR103 @OSU**

**DESCRIPTION**
This game is a simple one. The player must press one of the two buttons on the Adafruit board when one of the correct NeoPixels is lit up. The goal is to get the highest score. The right side will be for when a green LED shows up, and the left side will be for when a red LED shows up. The randomized colors will light up at increasing speed, making it increasingly difficult. Each time you click the correct button on the right, you will gain a point; if you mispress, then you will lose a life. You will have 3 total lives. If you want to play again, slide the board's switch over 

**RULES**
If the green LED is lit and the player clicks the right button within the time that it is lit, the player scores 1 point
If the red LED is lit and the player clicks the left button within the time it is lit, the player scores 1 point
If at any time the player misses a click or clicks incorrectly, then one life will be lost
The player has 3 total lives

**SPECIFICATIONS**
*INPUTS -*
Right button - click when NeoPixel is green
Left button - click when NeoPixel is red
Switch - player slides to restart

*OUTPUTS -*
NeoPixels will be randomly lit up with increasing speed. The time between when each red or green shows up will increasingly get shorter, making it more difficult as well. 
The speaker will play a tune at increasing speed synced with LEDS.
