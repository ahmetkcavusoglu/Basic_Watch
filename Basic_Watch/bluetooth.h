
Adafruit_BluefruitLE_SPI ble(BLUEFRUIT_SPI_CS, BLUEFRUIT_SPI_IRQ, BLUEFRUIT_SPI_RST);
void bluetoothinit(){
  
 
  ble.begin(VERBOSE_MODE);
  ble.factoryReset();
  ble.sendCommandCheckOK(F( "AT+GAPDEVNAME=Basic_Watch" ));
  ble.sendCommandCheckOK(F( "AT+BleHIDEn=On" ));
  }

// Skip next song
void skipnext(){
  ble.sendCommandCheckOK(F("AT+BLEHIDCONTROLKEY=MEDIANEXT"));
}

// Skip previous song
void skipprev(){
  ble.sendCommandCheckOK(F("AT+BLEHIDCONTROLKEY=MEDIAPREVIOUS"));
}


// Bluetooth loop commands
void bluloop(){
  
}