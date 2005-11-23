# test.pl

use strict;
use warnings;
use Test::More tests => 60;

#line 1
	ok 0;
	ok 1;
	ok 3, 'My third test';
	is 'abc', 'abc' ;
    is 'abc', 'ab' ;
	is 'abc', 'abc', 'My char test' ;    
	is 'abc', 'ab', 'Failed test' ;

    is 123, 123 ;
    is 123, 132 ;
	is 123, 123, 'My int test' ;    
	is 123, 132, 'Failed test' ;


    is 123, 123 ;
    is 123, 132 ;
	is 123, 123, 'My  short int test' ;    
	is 123, 132, 'Failed test' ;


    is 123, 123 ;
    is 123, 132 ;
	is 123, 123, 'My int test' ;    
	is 123, 132, 'Failed test' ;


    is 1.2222222, 1.2222222 ;
    is 1.2222222, 1.2333333 ;
	is 1.2222222, 1.2222222, 'My double test' ;    
	is 1.2222222, 1.2333333, 'Failed test' ;
    

    is 1.2222222, 1.2222222 ;
    is 1.2222222, 1.2333333 ;
	is 1.2222222, 1.2222222, 'My float test' ;    
	is 1.2222222, 1.2333333, 'Failed test' ;



    isnt 'abc', 'abc' ;
    isnt 'abc', 'ab' ;
	isnt 'abc', 'abc', 'My char test' ;    
	isnt 'abc', 'ab', 'Failed test' ;

    isnt 123, 123 ;
    isnt 123, 132 ;
	isnt 123, 132, 'My int test' ;    
	isnt 123, 123, 'Failed test' ;

    isnt 123, 123 ;
    isnt 123, 132 ;
	isnt 123, 132, 'My  short int test' ;    
	isnt 123, 123, 'Failed test' ;

    isnt 123, 123 ;
    isnt 123, 132 ;
	isnt 123, 132, 'My int test' ;    
	isnt 123, 123, 'Failed test' ;


    isnt 1.2222222, 1.2222222 ;
    isnt 1.2222222, 1.2333333 ;
	isnt 1.2222222, 1.2333333, 'My double test' ;    
	isnt 1.2222222, 1.2222222, 'Failed test' ;

    isnt 1.2222222, 1.2222222 ;
    isnt 1.2222222, 1.2333333 ;
	isnt 1.2222222, 1.2333333, 'My float test' ;    
	isnt 1.2222222, 1.2222222, 'Failed test' ;
