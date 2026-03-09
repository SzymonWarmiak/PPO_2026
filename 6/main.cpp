#include "stepper.h"

	Stepper MyStepper(2);
	
void Delay(int iTimeMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeMs;
	
	for(iCycle = 0; iCycle < iNumberOfCycles; iCycle++)
	{
		
	}
}



int main(void)
{
	
	while(1)
	{
		MyStepper.StepLeft();
		Delay(500);
	}
}
