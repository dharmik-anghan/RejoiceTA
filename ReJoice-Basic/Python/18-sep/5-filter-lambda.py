# 5. **Filter with Lambda**
#   Given a list of integers, use filter and lambda to find all even numbers.

list_of_number = [1,2,3,4,5,6]

filtered_list = list(filter(lambda x : x%2 == 0, list_of_number))

print(filtered_list)