n = 10

def gen_fib(n: int):
    a = -1
    b = 1

    while n > 0:
        fib = a+b
        a = b
        b = fib
        print(fib)
        n-=1

gen_fib(n)