
#takes too long 

if __name__ == '__main__':

	i = 1
	solved = False 
	while(not solved):
		count = 0
		tri = 2
		for x in range(1, i):
			if (i % x == 0):
				count += 1
			if(count == 500):
				print i
				solved = true
				break
		i += tri
		tri += 1
				
