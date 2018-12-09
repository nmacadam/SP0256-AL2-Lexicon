/* 
 *SpeechChip.h Header file for the SpeechChip library by Jacob Field.
 */

#ifndef SpeechChip_h
#define SpeechChip_h

#include "Arduino.h"

class SpeechChip
{
  public:

	SpeechChip(int ALD);

	void NN1();
	void OR();
	void HH2();
	void HH1();
	void EH();
	void EL();
	void LL();
	void OW();
	void PA5();
	void BB1();
	void AX();
	void IY();
	void NN2();
	void ER1();
	void AE();
	void AA();
	void AY();
	void KK1();
	void AO();
	void S();
	void EY();
	void PA4();
	void PA3();
	void PA2();
	void PA1();
	void PP();
	void D1();
	void D2();
	void TT2();
	void UW1();
	void MM();
	void YY2();
	void IH();
	void TT1();
	void ZZ();
	void NG();
	void GG1();
	void GG2();
	void GG3();
	void FF();
	void KK2();
	void KK3();
	void CH();
	void TH();
	void ZH();
	void RR1();
	void RR2();
	void OY();
	void JH();
	void DH1();
	void DH2();
	void UW2();
	void YY1();
	void BB2();
	void UH();
	void AW();
	void VV();
	void SH();
	void WW();
	void XR();
	void WH();
	void ER2();
	void AR();
	void YR();
	
  private:

    int AddressLoad(int delayTime);
    int _ALD;

};


#endif