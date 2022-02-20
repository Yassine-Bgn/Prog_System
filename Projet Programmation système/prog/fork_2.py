
import os

 

ppid = os.getpid()

print("Pid of parent process %d:"%(ppid))

 

# Create a child process

retVal = os.fork()

 

# Get the process id

pid = os.getpid()

 

if retVal is 0:

    print("Return value of fork in child process is %d:"%(retVal))

else:

    print("Return value of fork(i.e., Child pid) in parent process is %d:"%(retVal))

 

for i in range(0, 10):

    print("Printing the value %d from the Process: %d"%(i, pid))
