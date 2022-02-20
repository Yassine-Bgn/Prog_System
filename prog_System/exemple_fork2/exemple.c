
#include <unistd.h>
#include <stdio.h>

int main( void ) {
	if (fork())
		{	fork()&&(fork() || (fork()&&fork()));
			printf("Hello\n");
		}
		else
		{	fork();
			printf("Good Bye\n");
		}
		sleep(2);
		return 0;
}

