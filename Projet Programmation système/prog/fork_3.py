
import os

 

def ParentProcess():

    for i in range(1,100):

        print("Parent Proc: %d"%(i))

    print("Parent process exiting")

 

def ChildProcess():

    for i in range(1,100):

        print("Child Proc: %d"%(i))

    print("Child process exiting")

 

# Fork and create a child process

retVal = os.fork()

print("Return value is %d"%(retVal))

 

# Separate logic for parent and child

if retVal is 0:

    ChildProcess()

else:

    ParentProcess()
