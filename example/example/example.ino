// IO-shield V1.1
// Example code

// LED Pins
#define         LED1    3
#define         LED2    2
#define         LED3    A0
#define         LED4    A1
#define         LED5    A2
#define         LED6    A3
#define         LED7    A4
#define         LED8    A5

// Taster Pins
#define         BUTTON1    11
#define         BUTTON2    10
#define         BUTTON3    9
#define         BUTTON4    8
#define         BUTTON5    7
#define         BUTTON6    6
#define         BUTTON7    5
#define         BUTTON8    4

// Blink Modes
#define         ALL_OFF         0
#define         ALL_ON          1
#define         ALL_BLINK       2
#define         KNIGHTRIDER     3
#define         CHASER          4
#define         VUMETER         5
#define         RANDOM          6
#define         BOUNCE          7


int leds[8] = {LED1,LED2,LED3,LED4,LED5,LED6,LED7,LED8};
int buttons[8] = {BUTTON1,BUTTON2,BUTTON3,BUTTON4,BUTTON5,BUTTON6,BUTTON7,BUTTON8};

// Blink Mode
int mode=0;

void setup_leds() {

    for(int i=0; i<8; i++) {
        pinMode(leds[i],OUTPUT);
        digitalWrite(leds[i],HIGH);
    }    

}

void setup_buttons() {

    for(int i=0; i<8; i++) {
        pinMode(buttons[i],OUTPUT);
        digitalWrite(buttons[i],HIGH);
    }    

}

void all_off() {

    for(int i=0; i<8; i++) {
        digitalWrite(leds[i],HIGH);
    }    

}

void all_on() {

    for(int i=0; i<8; i++) {
        digitalWrite(leds[i],LOW);
    }    

}

void all_blink() {

    static int state = HIGH;

    if(state == HIGH) {
        state = LOW;
    } else {
        state = HIGH;
    }

    for(int i=0; i<8; i++) {
        digitalWrite(leds[i],state);
    }    

    delay(100);

}

void knightrider() {

    for(int i=0; i<4; i++) {
        all_off();
        digitalWrite(leds[i],LOW);
        digitalWrite(leds[7-i],LOW);
        delay(100);
    }    
    
    for(int i=3; i>=0; i--) {
        all_off();
        digitalWrite(leds[i],LOW);
        digitalWrite(leds[7-i],LOW);
        delay(100);
    }    

}

void chaser() {

    for(int i=0; i<8; i++) {
        all_off();
        digitalWrite(leds[i],LOW);
        delay(100);
    }

}

void vumeter() {

    for(int i=0; i<8; i++) {
        digitalWrite(leds[i],LOW);
        delay(100);
    }    

    for(int i=7; i>=0; i--) {
        digitalWrite(leds[i],HIGH);
        delay(100);
    }    

}

void blink_random() {

    int rnd = random(0xFF);
    
    all_off();

    for(int i=0; i<8; i++) {
        if(rnd & (1 << i)) {
            digitalWrite(leds[i],LOW);
        }
    }    

}

void bounce() {
    
    for(int i=0; i<8; i++) {
        all_off();
        digitalWrite(leds[i],LOW);
        delay(100);
    }

    for(int i=7; i>=0; i--) {
        all_off();
        digitalWrite(leds[i],LOW);
        delay(100);
    }

}

void setup() {

    setup_leds();
    setup_buttons();

}

void loop() {

    for(int i=0; i<8; i++) {
        if(digitalRead(buttons[i]) == LOW){
            mode = i;
            break;
        }
    }   

    switch(mode) {
        case ALL_OFF:
            all_off();
        break;
        case ALL_ON:
            all_on();
        break;
        case ALL_BLINK:
            all_blink();
        break;
        case KNIGHTRIDER:
            knightrider();
        break;
        case CHASER:
            chaser();
        break;
        case VUMETER:
            vumeter();
        break;
        case RANDOM:
            blink_random();
        break;
        case BOUNCE:
            bounce();
        break;
    
    }

}
