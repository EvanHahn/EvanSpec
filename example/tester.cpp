#include "../evanspec.h"

int main() {

	eassert(true);
	eassert(12 == 12);
	eassert(5, 5, "five to equal five");
	eassert("hey", "hey");

	eassert(false);
	eassert(8 == 5);
	eassert(5, 6, "five to equal six");
	eassert("hey", "hello");

	return 0;

}

