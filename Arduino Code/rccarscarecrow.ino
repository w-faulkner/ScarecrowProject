/*
  BAe 305
  Automated Scarecrow Project
  This is the code to control the R.C. Car base of the build
  By: Jacob Crabtree
*/
// Motor driver pins
const int AIN1 = 13; // Right motor
const int AIN2 = 12;
const int PWMA = 11;

const int PWMB = 10; // Left motor
const int BIN2 = 9;
const int BIN1 = 8;

// RF receiver inputs
const int FORWARD_PIN = 2;
const int BACKWARD_PIN = 3;
const int LEFT_PIN = 4;
const int RIGHT_PIN = 5;

void setup() {
  // Motor pins
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  // Receiver inputs
  pinMode(FORWARD_PIN, INPUT);
  pinMode(BACKWARD_PIN, INPUT);
  pinMode(LEFT_PIN, INPUT);
  pinMode(RIGHT_PIN, INPUT);

  Serial.begin(9600);
}

void loop() {
  bool forward = digitalRead(FORWARD_PIN);
  bool backward = digitalRead(BACKWARD_PIN);
  bool left = digitalRead(LEFT_PIN);
  bool right = digitalRead(RIGHT_PIN);

  // Stop motors by default
  stopMotors();

  if (forward) {
    Serial.println("Forward");
    moveForeward();
  } else if (backward) {
    Serial.println("Backward");
    moveBackward();
  } else if (left) {
    Serial.println("Left");
    turnLeft();
  } else if (right) {
    Serial.println("Right");
    turnRight();
  }

  delay(50); // Small delay to avoid flooding serial monitor
}

// === Motor control functions ===

void moveBackward() {
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 255);  // Right motor at full speed

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 255);  // Left motor at full speed
}

void moveForeward() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 255);  // Right motor at full speed

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 255);  // Left motor at full speed
}

void turnRight() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 190);  // Right motor at full speed

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 255);  // Left motor at full speed
}

void turnLeft() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 255);  // Right motor at full speed

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 190);  // Left motor at full speed
}

void stopMotors() {
  analogWrite(PWMA, 0); // Stop right motor
  analogWrite(PWMB, 0); // Stop left motor
}
