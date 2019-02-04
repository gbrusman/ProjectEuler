

if __name__ == '__main__':
	solved = False
	fn = 144
	fminus1 = 89
	fminus2 = 55
	index = 12
	
	while not solved:
		temp = fn
		fminus2 = fminus1
		fminus1 = temp
		fn = fminus1 + fminus2
		
		fstring = str(fn)
		index += 1
		if(len(fstring) == 1000):
			solved = True

	
	print fstring
	print index	
