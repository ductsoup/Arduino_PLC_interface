//
// 2015-04-25
// Checkout sketch for PLC interface
// Written by ductsoup, public domain
//

void setup() {
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop() {
  int i; 
  
  for (i = 0 ; i < 9 ; i++) {
    analogWrite(0, 26*i); 
    analogWrite(1, 26*i); 
    delay(5000);
  }
}


