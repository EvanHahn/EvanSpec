/*
 * EvanSpec
 * by Evan Hahn (evanhahn.com)
 *
 * EvanSpec aims to be a really simple testing framework for C++. It is
 * missing a number of features, but it was written to test my programming
 * projects at the University of Michigan and that's all.
 *
 * Enjoy!
 *
 * License information is at the bottom of the file.
 */

#include <iostream>
#include <string>

/*
 * Configration variables
 */

bool PRINT_SUCCESS = true;
bool BASH_COLORS = true;

/*
 * Expect equality, no message
 */

template <typename A, typename B>
bool EXPECT_EQUALITY(A a, B b) {

	// The same
	if (a == b) {
		if (PRINT_SUCCESS) {
			if (BASH_COLORS) std::cout << "\e[0;32m";
			std::cout << "Success: " << a << " equals " << b << "." << std::endl;
			if (BASH_COLORS) std::cout << "\e[m";
		}
		return true;
	}

	// Different
	else {
		if (BASH_COLORS) std::cout << "\e[0;31m";
		std::cout << "** FAILURE: expected " << a << " to equal " << b << ". **" << std::endl;
		if (BASH_COLORS) std::cout << "\e[m";
		return false;
	}

}

/*
 * Expect equality with message
 */

template <typename A, typename B>
bool EXPECT_EQUALITY(A a, B b, std::string message) {

	// The same
	if (a == b) {
		if (PRINT_SUCCESS) {
			if (BASH_COLORS) std::cout << "\e[0;32m";
			std::cout << "Success: expected " << message << ". " << a << " equals " << b << "." << std::endl;
			if (BASH_COLORS) std::cout << "\e[m";
		}
		return true;
	}

	// Different
	else {
		if (BASH_COLORS) std::cout << "\e[0;31m";
		std::cout << "** FAILURE: expected " << message << ". Expected " << a << " to equal " << b << ". **" << std::endl;
		if (BASH_COLORS) std::cout << "\e[m";
		return false;
	}

}

/*

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>

*/
