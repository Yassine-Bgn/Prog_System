#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main() {
	fork();
	fork();
	printf("Hello !\n");
	exit(0);
}
