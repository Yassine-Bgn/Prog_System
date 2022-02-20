#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
int fd = open("tutu",O_WRONLY | O_CREAT);
close(STDOUT_FILENO);
dup(fd);
close(fd);
printf("test de sortie standart");
return 0;
}
