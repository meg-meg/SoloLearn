#pragma once
#include "Guard_Present.h"

bool guard_present(const char* input)
{
	int money_index = 0;
	int thief_index = 0;
	bool guard_present = false;

	// Record the index numbers of where the thief and money are located in the c string
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

	// Check if there is a guard present at in index between the thief and the money
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

	// If a guard is present between the thief and the money, return true
	// If a guard is NOT present between the thief and the money, return false
	if (guard_present)
	{
		return true;
	}
	else
	{
		return false;
	}
}