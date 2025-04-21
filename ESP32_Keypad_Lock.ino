#include <Keypad.h>
#include <Servo.h>

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {19, 18, 5, 17};
byte colPins[COLS] = {16, 4, 0, 2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
Servo lockServo;

String password = "1234";
String inputPassword = "";

void setup() {
  Serial.begin(115200);
  lockServo.attach(21);
  lockServo.write(0);
  Serial.println("Enter Password:");
}

void loop() {
  char key = keypad.getKey();
  if (key) {
    Serial.print(key);
    if (key == '#') {
      if (inputPassword == password) {
        Serial.println(" - Access Granted");
        lockServo.write(90);
        delay(5000);
        lockServo.write(0);
      } else {
        Serial.println(" - Wrong Password");
      }
      inputPassword = "";
    } else if (key == '*') {
      inputPassword = "";
      Serial.println(" - Input Cleared");
    } else {
      inputPassword += key;
    }
  }
}
