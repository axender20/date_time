#include "Arduino.h"
#include "date_time.h"

DateTime today;
void setup() {
  today = DateTime(F(__DATE__), F(__TIME__));
  Serial.begin(115200);
  Serial.println(today.timestamp(DateTime::TIMESTAMP_FULL));
}

void loop() {
}