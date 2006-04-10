#include "cpptest.h"

int main() {
    char* c = (char*) 0x003f;
	test_plan(2);

	ok(1);
	ok(c);
	ok(1);

    summary();
}
