const int buttonRightPin = 2;
const int buttonLeftPin = 5;
const int buttonUpPin = 4;
const int buttonDownPin = 3;

const String dataRight = "right";
const String dataLeft = "left";
const String dataUp = "up";
const String dataDown = "down";

void setup() {
  pinMode(buttonRightPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  if (HIGH == digitalRead(buttonRightPin)) {
    Serial.println(dataRight);
  }

  if (HIGH == digitalRead(buttonLeftPin)) {
    Serial.println(dataLeft);
  }

  if (HIGH == digitalRead(buttonUpPin)) {
    Serial.println(dataUp);
  }

  if (HIGH == digitalRead(buttonDownPin)) {
    Serial.println(dataDown);
  }
}
