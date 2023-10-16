odd_num_list = [2,3,5,7,42,64,65,87,34,99,65]

new_list = list(filter(lambda x : x%2 != 0, odd_num_list))

print(new_list)