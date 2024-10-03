import math
entrada = input()
v, n = entrada.split()
v = int(v)
n = int(n)
num =  v * n

for x in range(1, 10):
    bacon = math.ceil((num * x) / 10)
    if x == 9:
        print(bacon)
    else:
        print(bacon, end=" ")
    



