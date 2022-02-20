import os

pid = os.fork()

if pid:

	statut = os.wait()
	print("\nIn parent process-")
	print("Terminate child's process id:",os.getpid(), os.getppid())

else:

	print("---------- In Child process------------")
	print("\t\t\t Process ID : ", os.getpid(), os.getppid())

