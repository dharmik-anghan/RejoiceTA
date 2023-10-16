file_name = 'new_file.txt'

with open(file_name, 'w') as write:
    write.writelines("Hello, world")

with open(file_name, 'r') as read:
    line = read.readline()
    print(line)