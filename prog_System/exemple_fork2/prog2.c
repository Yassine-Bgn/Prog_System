#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

void doit() {
	fork();
	fork();
	printf("Hello !\n");
}
int main() {
	doit();
	printf("Hello !\n");
	exit(0);
}
