#include "stdafx.h"
#include "wheelGroup.h"
#include <string>

using namespace std;
wheelGroup::wheelGroup(wheel wheel1, wheel wheel2, wheel wheel3, wheel wheel4, wheel wheel5)
{
	wheels[1] = wheel1;
	wheels[2] = wheel2;
	wheels[3] = wheel3;
	wheels[4] = wheel4;
	wheels[5] = wheel5;

}

void wheelGroup::rotate()
{
	for(int i = 0; i < 5; i++)
	{
		wheels[i].rotate();
	}
	
}

int wheelGroup::getCurrentPins()
{
	int result = wheels[1].getCurrentPin * 16 + wheels[2].getCurrentPin * 8 + wheels[3].getCurrentPin * 4 + wheels[3].getCurrentPin * 2 + wheels[4].getCurrentPin * 1;
	
	return result ;
}
