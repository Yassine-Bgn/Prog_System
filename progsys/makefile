all : $(APPLI) clean

$(APPLI) : $(APPLI).o 
	gcc -Wall $(APPLI).o compelx.o -o $(APPLI) -lm
$(APPLI).o : $(APPLI).c compelx.h
	gcc -Wall -c $(APPLI).c
compelx.o : compelx.c compelx.h
	gcc -Wall -c compelx.c
