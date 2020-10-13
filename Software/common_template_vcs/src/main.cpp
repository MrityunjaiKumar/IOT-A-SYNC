#include <Arduino.h>
#include "Modules/modules.h"

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  wifi_ota_setup();
  lwic_setup();
}

void loop()
{
  // put your main code here, to run repeatedly:

  wifi_ota_loop();
  lwic_loop();
}