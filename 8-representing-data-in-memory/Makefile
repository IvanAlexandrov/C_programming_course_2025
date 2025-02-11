all: safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

safeadd.exe: safeadd.c safeint.o util.o
	gcc safeadd.c safeint.o util.o -o safeadd.exe

safesubtract.exe: safesubtract.c safeint.o util.o
	gcc safesubtract.c safeint.o util.o -o safesubtract.exe

safemultiply.exe: safemultiply.c safeint.o util.o
	gcc safemultiply.c safeint.o util.o -o safemultiply.exe

safedivide.exe: safedivide.c safeint.o util.o
	gcc safedivide.c safeint.o util.o -o safedivide.exe

safeint.o: safeint.h safeint.c
	gcc -c safeint.c -o safeint.o
	
util.o: util.h util.c
	gcc -c util.c -o util.o

clean:
	del *.exe *.o