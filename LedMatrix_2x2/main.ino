#define LED_PIN3 6
#define LED_PIN4 9
#define LED_PIN5 10
#define LED_PIN6 11

#define BLINK_INTERVAL 500

const String combinationsOfLEDS[] = {
    "off", "on", "1", "2", "3", "4", 
    "12", "24", "34", "13", "14", 
    "23", "124", "234", "123", "134"
};

const String states[] = {
    "00000000", // off
    "11000000", // on
    "10010000", // 1
    "10100000", // 2
    "01010000", // 3
    "01100000", // 4
    "11000000", // 12
    "11100000", // 24
    "01000000", // 34
    "11010000", // 13
    "10010100", // 14
    "01100100", // 23
    "10000110", // 124
    "10100100", // 234
    "11000100", // 123
    "10010100"  // 134
};

void setup() {
    pinMode(LED_PIN5, OUTPUT);
    pinMode(LED_PIN6, OUTPUT);
    pinMode(LED_PIN3, OUTPUT);
    pinMode(LED_PIN4, OUTPUT);
    Serial.begin(9600);
}

