/*
  TOYOSHIKI Tiny BASIC for Arduino
 (C)2012 Tetsuya Suzuki
 */

void basic(void);

void setup(void){
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial);    // wait for the serial port to open
  randomSeed(analogRead(2));
  pinMode(1, OUTPUT);
  pinMode(0, INPUT);
}

void loop(void){
  // put your main code here, to run repeatedly:
  basic();
}
