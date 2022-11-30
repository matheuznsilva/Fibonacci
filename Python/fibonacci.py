
from pip import main
from yaml import scan
import timeit

def fibonacci(i):
    if i == 1 or i == 2:
        return 1
    else:
        return fibonacci(i-1) + fibonacci(i-2)


n = int(input("\nEntre com o tamanho da sequencia de Fibonacci: "))

start = timeit.default_timer()
for i in range(1,n+1):
     #print("%d " % fibonacci(i))
     fibonacci(i)
end = timeit.default_timer()
print("\nTempo de execução: %f seg\n\n" % (end-start))

