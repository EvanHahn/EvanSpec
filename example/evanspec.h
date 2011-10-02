#include <iostream>
#include <typeinfo>

// Expect equality
template <typename A, typename B>
bool EXPECT_EQUALITY(A a, B b) {
	if ((typeid(a) == typeid(b)) && (a == b)) {
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

