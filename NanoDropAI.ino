/*
  NanoDrop AI — ESP32 firmware starter

  This scaffold only demonstrates safe structure and serial diagnostics.
  Sensor pin assignments and thresholds are intentionally placeholders.
  Check the datasheets and wiring before connecting hardware.
*/

const int STATUS_LED_PIN = 2;  // Confirm this pin for your ESP32 board.
const unsigned long LOG_INTERVAL_MS = 1000;

unsigned long lastLog = 0;

void setup() {
  Serial.begin(115200);
  pinMode(STATUS_LED_PIN, OUTPUT);
  digitalWrite(STATUS_LED_PIN, LOW);

  Serial.println();
  Serial.println("NanoDrop AI prototype starting...");
  Serial.println("Sensor modules are not configured yet.");
}

void loop() {
  const unsigned long now = millis();

  if (now - lastLog >= LOG_INTERVAL_MS) {
    lastLog = now;
    Serial.println("Status: running; add and test sensor modules individually.");
  }

  // TODO: Read calibrated gesture sensors.
  // TODO: Read proximity sensor and apply tested thresholds.
  // TODO: Add liquid-level sensing for a clearly defined setup.
  // TODO: Implement vibration/audio alerts using appropriate drivers.
  // TODO: Integrate a validated gesture classifier and speech output.
}
