RM_F = perl -MExtUtils::Command -e rm_f

all: ex.exe ex2.exe ex3.exe ex4.exe ex5.exe

ex.exe: ex.cpp cpptest.h
	cl /nologo ex.cpp

ex2.exe: ex2.cpp cpptest.h
	cl /nologo ex2.cpp

ex3.exe: ex3.cpp cpptest.h
	cl /nologo ex3.cpp

ex4.exe: ex4.cpp cpptest.h
	cl /nologo ex4.cpp

ex5.exe: ex5.cpp cpptest.h
	cl /nologo ex5.cpp

test: all out out2 out3 out4 out5
	diff out ~out
	diff out2 ~out2
	diff out3 ~out3
	diff out4 ~out4
	diff out5 ~out5

out: ex.exe
	ex.exe > $@ 2>&1

out2: ex2.exe
	ex2.exe > $@ 2>&1

out3: ex3.exe
	ex3.exe > $@ 2>&1

out4: ex4.exe
	ex4.exe > $@ 2>&1

out5: ex5.exe
	ex5.exe > $@ 2>&1

clean:
	$(RM_F) *.exe *.obj out*
