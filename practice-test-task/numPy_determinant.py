import numpy as np

np.random.seed(0)

np_array = np.random.randint(0,10,size=(3,3))

determinant = round(np.linalg.det(np_array))

print(np_array)
print(determinant)