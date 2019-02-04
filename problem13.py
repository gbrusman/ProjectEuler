

if __name__ == '__main__':
	myfile = open("numbers.txt", "r")
	mylist = []
	for x in range(100):
		mylist.append(int(myfile.readline()))
	
	answer = 0
	for x in range(100):
		answer += mylist[x]
	
	print answer
