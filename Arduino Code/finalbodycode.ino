/*
  BAe 305
  Automated Scarecrow Project
  This is the code to control the R.C. Car base of the build
  By: Jacob Crabtree
*/
// Inputs
const int switchPin = 7;  // SPDT switch
const int buttonPin = 4;  // Button input
const int pirPin = 2;     // PIR sensor input

// LEDs
const int redLED = 3;
const int greenLED = 5;

// Right motor
const int AIN1 = 13;
const int AIN2 = 12;
const int PWMA = 11;

// Left motor
const int BIN1 = 8;
const int BIN2 = 9;
const int PWMB = 10;

bool buttonPrevState = HIGH;  // Button is pulled up
bool motionPrevState = LOW;

enum Mode { BUTTON, MOTION };
Mode currentMode = BUTTON;

void setup() {
  Serial.begin(9600);

  pinMode(switchPin, INPUT);  // Read from SPDT switch
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(pirPin, INPUT);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  setGreen();
  stopMotors();
  Serial.println("Mode: BUTTON");
}

void loop() {
  // Read switch position and set mode
  bool switchState = digitalRead(switchPin);
  Mode newMode = (switchState == LOW) ? BUTTON : MOTION;

  // Change mode if necessary
  if (newMode != currentMode) {
    currentMode = newMode;
    stopMotors();
    setGreen();
    Serial.print("Mode: ");
    Serial.println(currentMode == BUTTON ? "BUTTON" : "MOTION");
  }

  // Button mode logic
  if (currentMode == BUTTON) {
    bool buttonPressed = digitalRead(buttonPin) == LOW;
    if (buttonPressed && buttonPrevState == HIGH) {
      Serial.println("Button pressed!");
      runSequence();
    }
    buttonPrevState = buttonPressed;

  } 
  // Motion mode logic
  else if (currentMode == MOTION) {
    bool motionDetected = digitalRead(pirPin) == HIGH;
    if (motionDetected && motionPrevState == LOW) {
      Serial.println("Motion detected!");
      runSequence();
    }
    motionPrevState = motionDetected;
  }
}

void runSequence() {
  setRed();
  runMotors();
  delay(7000);
  stopMotors();
  setGreen();
}

void runMotors() {
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 255);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 255);
}

void stopMotors() {
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);
}

void setRed() {
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);
}

void setGreen() {
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
}
