#include "evanspec.h"

int main() {

	EXPECT_EQUALITY(5, 5, "five to equal five");
	EXPECT_EQUALITY("hey", "hey");
	EXPECT_EQUALITY(5, 6, "five to equal six");
	EXPECT_EQUALITY("hey", "hello");

	return 0;

}

