#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#define taillebloc 1024
int main(int argc,char *argv[])
{
int df;
char buffer[taillebloc];
int nb_lus, nb_ecrits;
if (argc!=2) {puts("erreur arguments");return(1);}
if((df=open(argv[1],O_RDONLY))<0)
{puts("erreur ouverture");return(2);}
do
{
nb_lus=read(df,(char *)buffer, taillebloc);
if (nb_lus>0) nb_ecrits= write(1,(char*)buffer, nb_lus);
}
while ((nb_lus==taillebloc)&&(nb_ecrits>0));
close(df);
return(0);
}
