#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

#include <sys/wait.h>

int main() {
	int return_value ;
	return_value = system ("ps");
	return return_value ;
}

