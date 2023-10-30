# 14. **Numpy Matrix Operations**
#   Create two NumPy matrices and perform matrix multiplication.

import numpy as np

np.random.seed(0)

numpy_array1 = np.random.randint(0,100,(3,4))
numpy_array2 = np.random.randint(0,100,(3,4))

multi_of_arrays = numpy_array1*numpy_array2

print(numpy_array1)
print(numpy_array2)

print(multi_of_arrays)