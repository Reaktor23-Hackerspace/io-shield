# IO-shield

IO-shield is a Arduino shield with 8 LED's, 8 push buttons and 2 potentiometers, designed for learning purposes.

# Layout

![io-shield eagle design](https://github.com/Reaktor23-Hackerspace/io-shield/raw/master/io-shield-v1.1-eagle.png)

# Example program

Open and upload the example program with the Arduino IDE. Each button triggers a LED blink pattern. 
The program is for test purposes to test all components on the board (except for the 2 potentiometers).

 - Button 1 : All LED's off
 - Button 2 : All LED's on
 - Button 3 : All LED's blink
 - Button 4 : Knightrider
 - Button 5 : Chaser
 - Button 6 : VU Meter
 - Button 7 : Random blink
 - Button 8 : Bounce

Note: You need to press the buttons for about 2 seconds in the worst case to trigger a pattern change.

# Wiring

 - Push button 1 : Arduino Pin 11
 - Push button 2 : Arduino Pin 10
 - Push button 2 : Arduino Pin 9
 - Push button 4 : Arduino Pin 8
 - Push button 5 : Arduino Pin 7
 - Push button 6 : Arduino Pin 6
 - Push button 7 : Arduino Pin 5
 - Push button 8 : Arduino Pin 4

 - LED 1 : Arduino Pin 3
 - LED 2 : Arduino Pin 2
 - LED 3 : Arduino Pin A0
 - LED 4 : Arduino Pin A1
 - LED 5 : Arduino Pin A2
 - LED 6 : Arduino Pin A3
 - LED 7 : Arduino Pin A4
 - LED 8 : Arduino Pin A5

# Partlist

## Reichelt

- LED1 - LED8       SMD-LED 3528 BL   0.25 EUR     8 pcs. / board
- R9 - R16          SMD 1/4W 220      0.103 EUR    8 pcs. / board
- R1 - R8           SMD 1/4W 10K      0.103 EUR    8 pcs. / board   
- JP1 - JP16        SL 1X36G 2,54     0.15 EUR     1 pcs. / board
                    JUMPER 2,54GL SW  0.04 EUR    16 pcs. / board
- S1 - S8           TASTER 9314       0.20 EUR     8 pcs. / board

## dirtypcbs.com

- PCB 20Stk.        10x10cm + DHL HongKong = 75$ (58.88 EUR)

## Ebay

- Pin Header 6x                       0.15 EUR      2 pcs. / board
- Pin header 8x                       0.15 EUR      3 pcs. / board

