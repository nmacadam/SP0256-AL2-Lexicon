#include "Arduino.h"
#include "SpeechChip.h"

SpeechChip::SpeechChip(int ALD)
{
  pinMode(ALD, OUTPUT);
  digitalWrite(ALD, HIGH);
  DDRD = B11111111;
  _ALD = ALD;
}

int SpeechChip::AddressLoad(int delayTime){
  digitalWrite(_ALD, LOW);
  delay(1);
  digitalWrite(_ALD, HIGH);
  delay(delayTime);
}

void SpeechChip::OR(){
  PORTD = B00111010;
  AddressLoad(330);
}

void SpeechChip::HH2(){
  PORTD = B00111001;
  AddressLoad(180);
}

void SpeechChip::HH1(){
  PORTD = B00011011;
  AddressLoad(130);
}

void SpeechChip::EH(){
  PORTD = B00000111;
  AddressLoad(70);
}

void SpeechChip::EL(){
  PORTD = B00111111;
  AddressLoad(190);
}

void SpeechChip::LL(){
  PORTD = B00101101;
  AddressLoad(110);
}

void SpeechChip::OW(){
  PORTD = B00110101;
  AddressLoad(240);
}

void SpeechChip::PA5(){
  PORTD = B00000100;
  AddressLoad(200);
}

void SpeechChip::BB1(){
  PORTD = B00011100;
  AddressLoad(80); 
}

void SpeechChip::AX(){
  PORTD = B00001111;
  AddressLoad(70);
}

void SpeechChip::IY(){
  PORTD = B00010011;
  AddressLoad(250);
}

void SpeechChip::NN2(){
  PORTD = B00111000;
  AddressLoad(190);
}

void SpeechChip::ER1(){
  PORTD = B00110011;
  AddressLoad(160);
}

void SpeechChip::AE(){
  PORTD = B00011010;
  AddressLoad(120);
}

void SpeechChip::AA(){
  PORTD = B00011000;
  AddressLoad(100);
}

void SpeechChip::AY(){
  PORTD = B00000110;
  AddressLoad(260);
}

void SpeechChip::KK1(){
  PORTD = B00101010;
  AddressLoad(160);
}

void SpeechChip::AO(){
  PORTD = B00010111;
  AddressLoad(100);
}

void SpeechChip::S(){
  PORTD = B00110111;
  AddressLoad(90);
}

void SpeechChip::EY(){
  PORTD = B00010100;
  AddressLoad(280);
}

void SpeechChip::PA4(){
  PORTD = B00000011;
  AddressLoad(100);
}

void SpeechChip::PA3(){
  PORTD = B00000010;
  AddressLoad(50);
}

void SpeechChip::PA2(){
  PORTD = B00000001;
  AddressLoad(30);
}

void SpeechChip::PA1(){
  PORTD = 00000000;
  AddressLoad(10);
}

void SpeechChip::PP(){
  PORTD = B00001001;
  AddressLoad(210);
}

void SpeechChip::D1(){
  PORTD = B00010101;
  AddressLoad(70);
}

void SpeechChip::D2(){
  PORTD = B00100001;
  AddressLoad(160);
}

void SpeechChip::TT2(){
  PORTD = B00001101;
  AddressLoad(140);
}

void SpeechChip::UW1(){
  PORTD = B00010110;
  AddressLoad(100);
}

void SpeechChip::MM(){
  PORTD = B00010000;
  AddressLoad(180);
}

void SpeechChip::YY2(){
  PORTD = B00011001;
  AddressLoad(180);
}

void SpeechChip::IH(){
  PORTD = B00001100;
  AddressLoad(70);
}

void SpeechChip::TT1(){
  PORTD = B00010001;
  AddressLoad(100);
}

void SpeechChip::ZZ(){
  PORTD = B00101011;
  AddressLoad(210);
}

void SpeechChip::NG(){
  PORTD = B00101100;
  AddressLoad(220);
}

void SpeechChip::GG1(){
  PORTD = B00100100;
  AddressLoad(80);
}

void SpeechChip::GG2(){
  PORTD = B00111101;
  AddressLoad(40);
}

void SpeechChip::GG3(){
  PORTD = B00100010;
  AddressLoad(140);
}

void SpeechChip::FF(){
  PORTD = B00101000;
  AddressLoad(150);
}

void SpeechChip::KK2(){
  PORTD = B00101001;
  AddressLoad(190);
}

void SpeechChip::KK3(){
  PORTD = B00001000;
  AddressLoad(120);
}

void SpeechChip::CH(){
  PORTD = B00110010; 
  AddressLoad(190);
}

void SpeechChip::TH(){
  PORTD = B00011101;
  AddressLoad(180);
}

void SpeechChip::ZH(){
  PORTD = B00100110;
  AddressLoad(190);
}

void SpeechChip::RR1(){
  PORTD = B00001110;
  AddressLoad(170);
}

void SpeechChip::RR2(){
  PORTD = B00100111;
  AddressLoad(120);
}

void SpeechChip::OY(){
  PORTD = B00000101;
  AddressLoad(420);
}

void SpeechChip::JH(){
  PORTD = B00001010;
  AddressLoad(140);
}

void SpeechChip::DH1(){
  PORTD = B00010010;
  AddressLoad(290);
}

void SpeechChip::DH2(){
  PORTD = B00110110;
  AddressLoad(240);
}

void SpeechChip::UW2(){
  PORTD = B00011111;
  AddressLoad(290);
}

void SpeechChip::YY1(){
  PORTD = B00110001;
  AddressLoad(130);
}

void SpeechChip::BB2(){
  PORTD = B00111111;
  AddressLoad(50);
}

void SpeechChip::UH(){
  PORTD = B00011110;
  AddressLoad(100);
}

void SpeechChip::AW(){
  PORTD = B00100000;
  AddressLoad(370);
}

void SpeechChip::VV(){
  PORTD = B00100011;
  AddressLoad(190);
}

void SpeechChip::SH(){
  PORTD = B00100101;
  AddressLoad(160);
}

void SpeechChip::WW(){
  PORTD = B00101110;
  AddressLoad(180);
}

void SpeechChip::XR(){
  PORTD = B00101111;
  AddressLoad(360);
}

void SpeechChip::WH(){
  PORTD = B00110000;
  AddressLoad(200);
}

void SpeechChip::ER2(){
  PORTD = B00110100;
  AddressLoad(300);
}

void SpeechChip::AR(){
  PORTD = B00111011;
  AddressLoad(290);
}

void SpeechChip::YR(){
  PORTD = B00111100;
  AddressLoad(350);
}

void SpeechChip::NN1(){
  PORTD = B00001011;
  AddressLoad(140);
}