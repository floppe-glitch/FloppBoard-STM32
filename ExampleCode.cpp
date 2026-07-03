// This an example piece of code for the MCU. It prints something. Fascinating.

// USE THIS AS .INO FILE! 

// Prefferably use Arduino IDE since its easier

HardwareSerial Serial1(PA10, PA9); //RX, TX

void setup() {
  Serial1.begin(115200); // up to 1,000,000 (1 MBaud)
};

void loop() {
  Serial1.println("Hello from STM32!");
  delay(1000);
};

