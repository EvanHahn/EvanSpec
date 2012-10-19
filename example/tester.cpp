#include "../evanspec.h"

int main() {

	eassert(5, 5, "five to equal five");
	eassert("hey", "hey");

	eassert(5, 6, "five to equal six");
	eassert("hey", "hello");

	return 0;

}

