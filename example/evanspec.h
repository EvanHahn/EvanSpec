/*	EvanSpec
	by Evan Hahn (evanhahn.com)

	EvanSpec aims to be a really simple unit testing framework for C++. It is
	missing a number of features, but it was written to test my programming
	projects at the University of Michigan.
	
	Enjoy!

	EvanSpec is freely licensed for any use, subject to no conditions.	*/

#include <iostream>

// Expect equality
template <typename A, typename B>
bool EXPECT_EQUALITY(A a, B b) {
	if (a == b) {
		return true;
	} else {
		std::cout << "Failure: expected " << a << " to equal " << b << "." << std::endl;
		return false;
	}
}

// Expect true
template <typename T>
bool EXPECT_TRUE(T a) {
	if (a) {
		return true;
	} else {
		std::cout << "Failure: expected " << a << " to be true." << std::endl;
	}
}

// Expect false
template <typename T>
bool EXPECT_FALSE(T a) {
	if (!a) {
		return true;
	} else {
		std::cout << "Failure: expected " << a << " to be false." << std::endl;
	}
}

