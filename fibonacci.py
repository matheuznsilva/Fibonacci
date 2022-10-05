
from pip import main
from yaml import scan


def fibonacci(i):
    if i == 1 or i == 2:
        return 1
    else:
        return fibonacci(i-1) + fibonacci(i-2)


n = int(input("\nEntre com o tamanho da sequencia de Fibonacci: "))
for i in range(1,n+1):
    print("%d " % fibonacci(i))
