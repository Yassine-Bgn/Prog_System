#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ( int argc, char * argv [])
{
	execl("/bin/ls", "ls", "-l", "/" ,(char *) NULL);
	printf("\t\t==========> Suite du Programme <==========\n");
	return 0;
}

