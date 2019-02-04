


if __name__ == "__main__":
	num = 2 ** 1000
	numStr = str(num)
	sum = 0
	for i in range(len(numStr)):
		sum += int(numStr[i])
	
	print(numStr)
	print("sum = ", sum)