#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
int fd = open("tutu",O_WRONLY | O_CREAT);
dup2(fd,STDOUT_FILENO);
close(fd);
printf("test de sortie standart en utilisant dup2");
//return 0;
}
