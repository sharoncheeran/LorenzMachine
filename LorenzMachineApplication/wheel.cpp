#include "stdafx.h"
#include "wheel.h"

wheel::wheel(string pinSet, int pinSetting)
{
	int length = pinSet.length();
	for (int i = 0; i < length; i++) 
	{
		if (pinSet.at[i] == 0)
		{
			pinSet[i] = 0;
		}
		else
		{
			pinSet[i] = 1;
		}
	} pinSetting = 0;
} 

void wheel::rotate()
{
	if (pinSetting < pins.size())
	{
		pinSetting++;
	}
	else
	{
		pinSetting = 0;
	}

}	

int wheel::getCurrentPin()
{
	
	return pins[pinSetting];
}
