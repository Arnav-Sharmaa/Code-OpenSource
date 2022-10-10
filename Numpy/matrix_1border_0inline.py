import numpy as np
n = int(input("Enter the order of the matrix"))
matrix = np.ones((n,n))
matrix[1:-1,1:-1] = 0
print(matrix)
