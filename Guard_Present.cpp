#pragma once
#include "Guard_Present.h"

bool guard_present(const char* input)
{
	int money_index = 0;
	int thief_index = 0;
	bool guard_present = false;

	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == '$')
		{
			money_index = i;
		}
		else if (input[i] == 'T')
		{
			thief_index = i;
		}
	}

	if (money_index < thief_index)
	{
		for (int i = (money_index + 1); i < thief_index; i++)
		{
			std::cout << input[i];
			if (input[i] == 'G')
			{
				guard_present = true;
			}
		}
	}
	else if (thief_index < money_index)
	{
		for (int i = (thief_index + 1); i < money_index; i++)
		{
			if (input[i] == 'G')
			{
				guard_present = true;
			}
		}
	}

	if (guard_present)
	{
		return true;
	}
	else
	{
		return false;
	}
}