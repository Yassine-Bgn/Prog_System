#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <unistd.h>
int pfd1[2],pfd2[2];
int pere()
{
close(pfd1[1]);
dup2(pfd1[0],0);
close(pfd1[0]);
execlp("cut", "cut", "-d", ":" ,"-f1,3,4,7", (char *) 0);
printf("cut failed");
wait(NULL);
}

int fils()
{
close(pfd2[0]);
dup2(pfd2[1],1);
close(pfd2[1]);
execlp("grep", "grep", "root", (char *) 0);
printf("grep failed");
wait(NULL);
}

int pfils()
{
close(pfd2[1]);
dup2(pfd2[1],1);
close(pfd2[1]);
execlp("cat", "cat", "/etc/passwd", (char *) 0);
printf("cat failed");
}








int main( int argc, char *argv[], char *envp[] )
{
pipe(pfd1);
switch (fork())
{
case -1: perror("fork");exit(1);
case 0: fils();exit(1);
}




