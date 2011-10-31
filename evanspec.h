/*	EvanSpec
	by Evan Hahn (evanhahn.com)

	EvanSpec aims to be a really simple unit testing framework for C++. It is
	missing a number of features, but it was written to test my programming
	projects at the University of Michigan and that's all.
	
	Enjoy!

	Licensing info can be found in LICENSE.txt.	*/

#include <iostream>
#include <string>

// Config variables
bool PRINT_SUCCESS = true;

// Expect equality, no message
template <typename A, typename B>
bool EXPECT_EQUALITY(A a, B b) {
	if (a == b) {
		if (PRINT_SUCCESS) {
			std::cout << "Success: " << a << " equals " << b << "." << std::endl;
		}
		return true;
	} else {
		std::cout << "** FAILURE: expected " << a << " to equal " << b << ". **" << std::endl;
		return false;
	}
}

// Expect equality, with message
template <typename A, typename B>
bool EXPECT_EQUALITY(A a, B b, std::string message) {
	if (a == b) {
		if (PRINT_SUCCESS) {
			std::cout << "Success: expected " << message << ". " << a << " equals " << b << "." << std::endl;
		}
		return true;
	} else {
		std::cout << "** FAILURE: expected " << message << ". Expected " << a << " to equal " << b << ". **" << std::endl;
		return false;
	}
}

