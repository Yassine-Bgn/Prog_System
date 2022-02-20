#include <stdio.h>
#include <memory.h>
#include <unistd.h>
#include <stdlib.h>
int df[2];
/* descripteur de pipe */
char buf [6];
int pere(){close(df[0]);write (df[1],"hello",5); return 0;} 
/* écriture pipe */
int fils() {close(df[1]);read (df[0],buf,5); printf("%s",buf); return 1;}
/* lecture pipe */
int main()
{
pipe(df);
/* creation pipe */
switch (fork())
{case -1: perror("fork"); exit(1);
case 0:
fils();
default:
pere();}

}
