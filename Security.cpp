#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#include "Guard_Present.h"

int main()
{
	// Get a string input such as xxxxxGxx$xxxT
	std::string input;
	std::cin >> input;

	// Check if a guard is present between the thief and the money
	// If a guard is present, print quiet
	// If a guard is not present, print ALARM
	if (guard_present(input.c_str()))
	{
		std::cout << "quiet";
	}
	else
	{
		std::cout << "ALARM";
	}

	return 0;
}