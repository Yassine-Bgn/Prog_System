import subprocess
import os

def list_command(args = '-l'):

	cmd = 'ls'

	temp = subprocess.Popen([cmd, args], stdout = subprocess.PIPE)

	output = str(temp.communicate())

	output = output.split("\n")
	
	output = output[0].split('\\')

	res = []

	for line in output:
		res.append(line)

	for i in range(1, len(res) - 1):
		print(res[i])

	return res

def get_permissions():

	res = list_command('-l')

	permissions = {}

	for i in range(1, len(res) - 1):
		line = res[i]

		line = line.split(' ')

		folder_name = line[len(line) - 1]
		permission_value = line[0]

		permissions[folder_name] = permission_value

	try:
		os.mkdir('outputs')

	except:

		pass

	os.chdir('outputs')

	out = open('permissions.txt', 'w')

	out.write('Folder Name Permissions\n\n')

	for folder in permissions:

		out.write(folder + ' : ' + permissions[folder] + '\n')

	os.chdir('..')
	return permissions

if __name__ == '__main__':
	list_command('-al')

