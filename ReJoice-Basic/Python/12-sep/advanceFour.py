# 19. **Frequency Count**: Use `reduce` to count the frequency of each element in a list.

from functools import reduce

def countFeq(feq, element):
    if element in feq:
        feq[element]+= 1
    else:
        feq[element] = 1
    return feq

listofElement = [2,3,4,2,3]

print(reduce(countFeq, listofElement, {}))

