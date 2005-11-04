#include "cpptest.h"

int main() {
	test_plan(10);

#line 1 "test.pl"
	ok(0);
	ok(1);
	ok_(3, "My third test");
	is("abc", "abc");
	is_("abc", "abc", "My abc test");
	isnt("abc", "abc");
	is_("abc", "ab", "Failed test");

	summary();
	return 0;
}
