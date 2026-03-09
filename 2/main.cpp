#include "led.h"

void Delay(int iTimeMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeMs;
	
	for(iCycle = 0; iCycle < iNumberOfCycles; iCycle++)
	{
		
	}
}


int main(void)
{
	Led MyLed;
	MyLed.Init();
	
	while(1)
	{
		MyLed.StepLeft();
		Delay(100);
	}
}