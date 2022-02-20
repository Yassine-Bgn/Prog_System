useComplexe : usecomplexe.o complexe.o
	gcc usecomplexe.o complexe.o -o useComplexe -lm
usecomplexe.o : usecomplexe.c complexe.h
	gcc -Wall -c usecomplexe.c
complexe.o : complexe.c complexe.h
	gcc -Wall -c complexe.c
