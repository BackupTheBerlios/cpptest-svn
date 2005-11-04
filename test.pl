use strict;
use warnings;
use Test::More tests => 10;

#line 1
ok 0;
ok 1;
ok 3, 'My third test';
is 'abc', 'abc';
is 'abc', 'abc', 'My abc test';
isnt 'abc', 'abc';
is 'abc', 'ab', 'Failed test';
