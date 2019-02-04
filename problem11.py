import numpy as np

def horizSum(array, i, j):
	if(j < 17):
		return array[i][j] * array[i][j + 1] * array[i][j + 2] * array[i][j + 3]
	else:
		return 0 
		

def vertSum(array, i , j):
	if(i < 17):
		return array[i][j] * array[i + 1][j] * array[i + 2][j] * array[i + 3][j]		
	else:
		return 0	

def rightDiagSum(array, i, j):
	if(i < 17 and j < 17):
		return array[i][j] * array[i + 1][j + 1] * array[i + 2][j + 2] * array[i + 3][j + 3]


def leftDiagSum(array, i, j):
	if (i < 17 and j > 3):
		return array[i][j] * array[i + 1][j - 1] * array[i + 2][j - 2] * array[i + 3][j - 3]

if __name__ == '__main__':
	array = np.loadtxt("problem11mat.txt", dtype='i', delimiter=' ')
	maximum = 0
	
	
	for i in range(20):
		for j in range(20):
			horiz = horizSum(array, i, j)
			vert = vertSum(array, i, j)
			rightDiag = rightDiagSum(array, i, j)
			leftDiag = leftDiagSum(array, i, j)
			if (maximum < max(horiz, rightDiag, leftDiag, vert)):
				maximum = max(horiz, rightDiag, leftDiag, vert)
				
				
	print maximum			
				
				
				
				
