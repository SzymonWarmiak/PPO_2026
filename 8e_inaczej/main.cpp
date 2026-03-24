#include "stepper.h"
#include "keyboard.h"
#include "ledinv.h"
	
Stepper MyStepper;


	
void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{	
	Keyboard MyKeyboard;
	Led StandardLed;
	LedInv InvertedLed;
	Led* pLed;
	
	if(MyKeyboard.eRead() == BUTTON_4)
		{
			pLed = new LedInv;
			pLed = &InvertedLed;
		}
		else 
		{
			pLed = new Led;
			pLed = &StandardLed;
		}
		MyStepper.SetLed(pLed);
		
	while(1)
	{
		Delay(100);
		
		switch(MyKeyboard.eRead())
		{
		case BUTTON_1:
			MyStepper.StepRight();
		break;
		case BUTTON_2:
			MyStepper.StepLeft();
		break;
		default:
		break;
		}
	}
}
