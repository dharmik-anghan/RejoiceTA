# To-Do List Manager: Build a program to manage a to-do list, allowing users to add, remove, and view tasks.

def addTask(*tasks):
    with open('todo.txt', 'a') as f:
        for task in tasks:
            f.write(task)
            f.write('\n')


def viewTasks():
    with open('todo.txt', 'r') as f:
        lines = f.readlines()
        count = 1
        for line in lines:
            print(f"{count}. {line}", end='')
            count+=1
        
        

def removeTask(index):
    with open('todo.txt', 'r') as f:
        lines = f.readlines()
    
    count = 1
    with open('todo.txt','w') as f:
        for line in lines:
            if count != index:
                f.write(line)
            count+=1

    viewTasks()    


# addTask('hi', 'hello', 'python')
# viewTasks(
removeTask(2)

