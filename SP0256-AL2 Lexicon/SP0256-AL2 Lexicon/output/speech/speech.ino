#include <SpeechChip.h>
SpeechChip SpeechChip(8);

void setup(){}

void loop() {
	SpeechChip.DH1();
	SpeechChip.IH();
	SpeechChip.S();
	SpeechChip.PA5();
	SpeechChip.IH();
	SpeechChip.ZZ();
	SpeechChip.PA5();
	SpeechChip.AX();
	SpeechChip.PA5();
	SpeechChip.TT2();
	SpeechChip.EH();
	SpeechChip.S();
	SpeechChip.TT2();
	SpeechChip.PA5();
	delay(1024);
}