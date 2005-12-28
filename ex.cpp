#include "cpptest.h"

int main() {
	test_plan(60);

	ok(0);
	ok(1);
	ok_(3, "My third test");
    int ia, ib, ic;
    ia = 123, ib = 123, ic = 132; 
    short int sia, sib, sic;
    sia = 123, sib = 123, sic = 132;
    long int lia, lib, lic;
    lia = 123, lib = 123, lic = 132;
    double da, db, dc;
    da = 1.2222222, db = 1.2222222, dc = 1.2333333;
    float fa, fb, fc;
    fa = 1.2222222, fb = 1.2222222, fc = 1.2333333; 

	is("abc", "abc");
    is("abc", "ab");
	is_("abc", "abc", "My char test");    
	is_("abc", "ab", "Failed test");


    is(ia, ib);
    is(ia, ic);
	is_(ia, ib, "My int test");    
	is_(ia, ic, "Failed test");


    is(sia, sib);
    is(sia, sic);
	is_(sia, sib, "My  short int test");    
	is_(sia, sic, "Failed test");


    is(lia, lib);
    is(lia, lic);
	is_(lia, lib, "My int test");    
	is_(lia, lic, "Failed test");


    is(da, db);
    is(da, dc);
	is_(da, db, "My double test");    
	is_(da, dc, "Failed test");
    

    is(fa, fb);
    is(fa, fc);
	is_(fa, fb, "My float test");    
	is_(fa, fc, "Failed test");



    isnt("abc", "abc");
    isnt("abc", "ab");
	isnt_("abc", "abc", "My char test");    
	isnt_("abc", "ab", "Failed test");

    isnt(ia, ib);
    isnt(ia, ic);
	isnt_(ia, ic, "My int test");    
	isnt_(ia, ib, "Failed test");

    isnt(sia, sib);
    isnt(sia, sic);
	isnt_(sia, sic, "My  short int test");    
	isnt_(sia, sib, "Failed test");

    isnt(lia, lib);
    isnt(lia, lic);
	isnt_(lia, lic, "My int test");    
	isnt_(lia, lib, "Failed test");


    isnt(da, db);
    isnt(da, dc);
	isnt_(da, dc, "My double test");    
	isnt_(da, db, "Failed test");

    isnt(fa, fb);
    isnt(fa, fc);
	isnt_(fa, fc, "My float test");    
	isnt_(fa, fb, "Failed test");

	summary();
	return 0;
}
