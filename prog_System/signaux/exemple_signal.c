#include<stdio.h>
#include<signal.h>
void hand()
{
printf("Envoyer le signal SIGKILL pour me tuer\n");
}
main()
{
printf("mon PID est %d\n",getpid());
signal(SIGINT,hand);
signal(SIGQUIT,hand);
for(;;);
}
