/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Cameron Parrish
 */

#include "Header.h"

void example1(const int a) {
	int b = a * 7;
	// This does not work because we have designated a as a constant.
	// a = 7;
	std::cout << b;
}

void example2(const int a) {
	int b = a * 7;
	// This does not work because we have designated a as a constant and we are inputting a constant
	// a = 7;
	std::cout << b;
}

void example3(int a) {
	int b = a * 7;
	// This will work and a will change for this function
	a = 7;
	std::cout << a;
}

int main() {
	int a = 6;
	example1(a);
	example2(7);
	example3(a);

	return 0;
}
// We can pass through both a variable and a constant into a function. The only issue is if we assign it as a "const" then we will not be able to
// change that value because it will be a constant value.
// We would want to do this if we have a value that we don't want to change (like PI or e or any other constant).
// Instead of using a constant we could still pass in the value but not change it. It wouldn't be a constant but we wouldn't change it and essentially
// treat it like a constant.