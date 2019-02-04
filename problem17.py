
#doesn't account for "teen", "twenty", "thirty", etc. Maybe can break it up by mods?
if __name__ == "__main__":
	digits = {"0": 0, "1": 3, "2": 3, "3": 5, "4": 4, "5": 4, "6": 3, "7": 5, "8": 5, "9": 4} 
	tens ={"2": 6, "3": 6, "4": 5, "6": 5, "7": 7, "8": 6, "9": 6}	
	teens = {"10": 3, "11": 6, "12": 6, "13": 8, "14": 8, "15": 7, "16": 7, "18": 8, "19": 8}
	
	sum = 0
	
	for i in range(1, 1000):
		numStr = str(i)
		if(i >= 100):
			sum += digits[numStr[0]]
			numStr = str(int(numStr) % 100)
			sum += 7 #for hundred
		if int(numStr) >= 10 and int(numStr) < 20:
			sum += teens[int(numStr)]
			continue
		if(int(numStr) >= 10):
			sum += tens[numStr[0]]
			numStr = str(int(numStr) % 10)
			
			
		if(int(numStr) >= 1):
			sum += digits[int(numStr)]
	print("sum = ", sum)
	
	
	
	
	
	
	
	
	
	#for i in range(1, 1000):
	#	numStr = str(i)
	#	for j in range(len(numStr)):
	#		sum += digits[numStr[j]]
	#		
	#	if i >= 100:
	#		sum += 7 #for "hundred"
	#		if i % 100 != 0:
	#			sum += 3 #for "and"
			
	print("sum = ", sum)