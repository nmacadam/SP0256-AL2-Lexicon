#include <SpeechChip.h>
SpeechChip SpeechChip(8);

void setup(){}

void loop() {
	SpeechChip.HH1();
	SpeechChip.AW();
	SpeechChip.PA5();
	SpeechChip.IH();
	SpeechChip.ZZ();
	SpeechChip.PA5();
	SpeechChip.DH1();
	SpeechChip.AX();
	SpeechChip.PA5();
	SpeechChip.CH();
	SpeechChip.IY();
	SpeechChip.ZZ();
	SpeechChip.PA5();
	delay(1024);
}