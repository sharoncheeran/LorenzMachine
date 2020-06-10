#include "stdafx.h"
#include "lorenzMachine.h"

lorenzMachine::lorenzMachine(wheelGroup chi, wheelGroup psi, wheel m37, wheel m61)
{
	
}

int lorenzMachine::encryptChar(int baudotChar)
{
	// implementation code should be added here
	// you should also change the return statement
	// where appropriate

	return 0;
}

void lorenzMachine::rotateWheels()
{
	chi.rotate();
	psi.rotate();
	m37.rotate();
	m61.rotate();

	if (chi.getCurrentPins == 1)
	{
		chi.rotate();
	}
	
	if (m37.getCurrentPin == 1)
	{
		chi.rotate();
		//for (int i = 5; i < chi.rotate; i++)
		//{
		//}
	}

	if (m61.getCurrentPin == 1)
	{
		m37.rotate();
	}

	if (m61.getCurrentPin == 1)
	{
		m61.rotate();
	}

}

int lorenzMachine::makeKey()
{
	// implementation code should be added here
	// you should also change the return statement
	// where appropriate

	return 0;
}