#include <IRremote.h>
IRrecv IR(13);
int Led=3;
int rLed=4;
int gLed=5;
int bLed=2;
int m=0;
int b=0;
int g=0;
int r=0;
int l=0;
void setup() {
IR.enableIRIn();
pinMode(Led,OUTPUT);
pinMode(rLed,OUTPUT);
pinMode(gLed,OUTPUT);
pinMode(bLed,OUTPUT);
pinMode(motor,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(IR.decode()){
  Serial.println(IR.decodedIRData.decodedRawData, HEX);
  delay(40);
  IR.resume();
}
if(IR.decodedIRData.decodedRawData == 0xB44BBA04){
  if(l==0){
    digitalWrite(Led,HIGH);
    l=1;
    Serial.println(l);
    IR.decodedIRData.decodedRawData =0;
  }
  else{
  digitalWrite(Led,0);
  l=0;
  Serial.println(l);
  IR.decodedIRData.decodedRawData =0;
}
}
if(IR.decodedIRData.decodedRawData == 0xB04FBA04){
  if(r==0){
    digitalWrite(rLed,HIGH);
    r=1;
    Serial.println(r);
    IR.decodedIRData.decodedRawData =0;
  }
  else{
  digitalWrite(rLed,0);
  r=0;
  Serial.println(r);
  IR.decodedIRData.decodedRawData =0;
}
}
if(IR.decodedIRData.decodedRawData == 0xA857BA04){
  if(g==0){
    digitalWrite(gLed,HIGH);
    g=1;
    Serial.println(g);
    IR.decodedIRData.decodedRawData =0;
  }
  else{
  digitalWrite(gLed,0);
  g=0;
  Serial.println(g);
  IR.decodedIRData.decodedRawData =0;
}
}
if(IR.decodedIRData.decodedRawData == 0xA45BBA04){
  if(b==0){
    digitalWrite(bLed,HIGH);
    b=1;
    Serial.println(b);
    IR.decodedIRData.decodedRawData =0;
  }
  else{
  digitalWrite(bLed,0);
  b=0;
  Serial.println(b);
  IR.decodedIRData.decodedRawData =0;
}
}
if(IR.decodedIRData.decodedRawData == 0xE31CBA04){
  if(m==0){
    analogWrite(motor,255);
    m=1;
    Serial.println(m);

  }
  else{
  analogWrite(motor,0);
  m=0;
  Serial.println(m);

}
}
}