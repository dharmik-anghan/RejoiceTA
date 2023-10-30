# 17. **First N Odd Numbers**: Use `filter` to find the first N odd numbers from an infinite sequence.

n=10
listofNum = []

for num in range(1, (n*2)+1):
    listofNum.append(num)

oddSeq = list(filter(lambda x : x%2!=0, listofNum))

print(oddSeq)
