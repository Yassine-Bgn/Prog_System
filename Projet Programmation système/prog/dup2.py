
import os

path = "/home/yassine/Desktop/projet_python/test2.txt"

fd = os.open(path, os.O_WRONLY)

print("Original file descriptor:", fd)

dup_fd = 7
os.dup2(fd, dup_fd)

print("Duplicated file descriptor:", dup_fd)

pid = os.getpid()
os.system("ls -l/proc/%s/fd" %pid)

os.close(fd)
os.close(dup_fd)

print("File descriptor duplicated successfully")

