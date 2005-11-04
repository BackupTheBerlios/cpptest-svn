RM_F = perl -MExtUtils::Command -e rm_f

all: ex.exe

ex.exe: ex.cpp cpptest.h
	cl /nologo ex.cpp

test: all
	ex.exe > out 2>&1
	perl test.pl > out~ 2>&1
	diff out out~

clean:
	$(RM_F) ex.exe ex.obj out out~
