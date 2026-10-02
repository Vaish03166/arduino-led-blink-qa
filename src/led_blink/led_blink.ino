const int LED_PIN = 13;
const unsigned long BLINK_INTERVAL_MS = 1000;

unsigned long previousMillis = 0;
bool ledState = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= BLINK_INTERVAL_MS) {
    previousMillis = currentMillis;

    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);

    Serial.println(ledState ? "LED ON" : "LED OFF");
  }
}
