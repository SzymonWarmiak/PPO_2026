#include "led.h"
#include "stepper.h"

	Led MyLed;
	Stepper MyStepper;
	
void Delay(int iTimeMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeMs;
	
	for(iCycle = 0; iCycle < iNumberOfCycles; iCycle++)
	{
		
	}
}



int main(void)
{
	
	while(1)
	{
		MyStepper.StepLeft();
		Delay(100);
	}
}
