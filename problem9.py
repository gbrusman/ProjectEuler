#works


if __name__ == '__main__':
	for c in range(1000):
		for b in range(1, c):
			for a in range(1, b):
				if ( (a*a + b*b == c*c) and (a + b + c == 1000) ):
					print a, b, c
					print "abc is: ", a * b * c
