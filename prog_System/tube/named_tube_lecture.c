#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main (void)
{
FILE *fichier;
int fd;
char *nom_tube = "tube_test2";
char buffer[128];
fd = open (nom_tube, O_RDONLY);
fichier = fdopen (fd, "r");
while (fgets (buffer, 128, fichier) != NULL)
{ printf ("%s", buffer);
}
fclose (fichier);
return (0); }
