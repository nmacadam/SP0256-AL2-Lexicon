#include <SpeechChip.h>
SpeechChip SpeechChip(8);

void setup(){}

void loop() {
	SpeechChip.TT2();
	SpeechChip.EH();
	SpeechChip.S();
	SpeechChip.TT2();
	SpeechChip.PA5();
	delay(1024);
}