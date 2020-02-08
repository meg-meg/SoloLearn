#pragma once
#ifndef GUARD_PRESENT_H
#define GUARD_PRESENT_H
#include <iostream>
using namespace std;

// Declare a function to determine if a guard is present between the thief and the money
// Parameter takes a c string
// Returns a boolean: true if guard is present, false if guard is not present
bool guard_present(const char* input);

#endif