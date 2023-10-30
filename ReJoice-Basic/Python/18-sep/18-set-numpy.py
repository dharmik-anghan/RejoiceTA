# 18. **Set Operations with Numpy**
#   Use NumPy to find the intersection and difference between two sets represented as arrays.

import numpy as np

np_array1 = np.arange(0,10)
np_array2 = np.arange(5,15)

intersect = np.intersect1d(np_array1, np_array2)

print(intersect)

np_dif_array1 = np.setdiff1d(np_array1, np_array2)
print(np_dif_array1)

np_dif_array2 = np.setdiff1d(np_array2, np_array1)
print(np_dif_array2)