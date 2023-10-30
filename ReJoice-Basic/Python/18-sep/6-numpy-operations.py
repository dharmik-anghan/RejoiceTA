# 6. **Numpy Array Operations**
#   Create a NumPy array and perform element-wise addition and subtraction with another array.

import numpy as np


numpy_array1 = np.random.randint(0,100,(3,4))
numpy_array2 = np.random.randint(0,100,(3,4))

sum_of_array = numpy_array1+numpy_array2

print(sum_of_array)