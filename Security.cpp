#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#include "Guard_Present.h"

int main()
{
	std::string input;
	// GxTxxGx$G
	std::cin >> input;

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