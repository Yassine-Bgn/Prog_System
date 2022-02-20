#include <sys/types.h>
#include <sys/stat.h>
int main (void)
{ char *nom_tube = "tube_test2";
mkfifo (nom_tube, 0644);
return (0);
}
