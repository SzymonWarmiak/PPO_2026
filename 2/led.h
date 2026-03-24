#ifndef LED_H
#define LED_H

class Led
{
	
	public:
		void StepLeft(void);
		void StepRight(void);
		void Init(void);
	private:
		unsigned char ucLedCtr;
		void Left(void);
		void On(unsigned char);

};
#endif
