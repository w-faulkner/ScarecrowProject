// Right motor (Motor A)
const int AIN1 = 13;
const int AIN2 = 12;
const int PWMA = 11;

// Left motor (Motor B)
const int PWMB = 10;
const int BIN2 = 9;
const int BIN1 = 8;

const int switchPin = 7;          // Button pin
const int potPin = A0;            // Potentiometer pin
const int driveTime = 400;         // Milliseconds per inch

bool hasDriven = false;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  Serial.begin(9600);  // So you can see the distance
}

void loop() {
  int potValue = analogRead(potPin);
  int distance = map(potValue, 0, 1023, 1, 30);  // 1–30 inches

  // Print current distance continuously
  Serial.print("Target Distance: ");
  Serial.print(distance);
  Serial.println(" inches");

  if (digitalRead(switchPin) == LOW && !hasDriven) {
    driveForward(distance);
    hasDriven = true;
  }

  if (digitalRead(switchPin) == HIGH) {
    hasDriven = false;
  }

  delay(200);  // Slow down serial printing
}

void driveForward(int inches) {
  rightMotor(-200);
  leftMotor(-200);
  delay(driveTime * inches);
  rightMotor(0);
  leftMotor(0);
}

void rightMotor(int motorSpeed) {
  if (motorSpeed > 0) {
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, LOW);
  } else if (motorSpeed < 0) {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, HIGH);
  } else {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, LOW);
  }
  analogWrite(PWMA, abs(motorSpeed));
}

void leftMotor(int motorSpeed) {
  if (motorSpeed > 0) {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);
  } else if (motorSpeed < 0) {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);
  } else {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, LOW);
  }
  analogWrite(PWMB, abs(motorSpeed));
}
