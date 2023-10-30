# 20. **Numpy Array Statistics**
#   Calculate the mean, median, and standard deviation of a NumPy array.

import numpy as np


numpy_array = np.random.randint(0,100,(3,4))

print(numpy_array.mean())
print(numpy_array.std())
print(np.median(numpy_array))
