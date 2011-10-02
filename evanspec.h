/*	EvanSpec
	by Evan Hahn (evanhahn.com)

	EvanSpec aims to be a really simple unit testing framework for C++. It is
	missing a number of features, but it was written to test my programming
	projects at the University of Michigan.
	
	Enjoy!

	EvanSpec is freely licensed for any use, subject to no conditions.	*/

#include <iostream>
#include <string>

// Expect equality, no message
template <typename A, typename B>
bool EXPECT_EQUALITY(A a, B b) {
	if (a == b) {
		std::cout << "Success: " << a << " equals " << b << "." << std::endl;
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
		std::cout << "Success: expected " << message << ". " << a << " equals " << b << "." << std::endl;
		return true;
	} else {
		std::cout << "** FAILURE: expected " << message << ". Expected " << a << " to equal " << b << ". **" << std::endl;
		return false;
	}
}

