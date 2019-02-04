
#want hash table to look up values in O(1)   (python "dictionary")
#don't want to allow duplicates
#want count (how many items in hash table)


if __name__ == '__main__':
	table = {}
	value = 0
	count = 0
	for i in range(2, 101):
		for j in range(2, 101):
			value = i ** j
			if value not in table:
				table[value] = value
				count += 1
	print count
	
	
			
