n = int(input("Informe seu nº: "))
n0 = 0
nS = 1

while n0 <= n:
    if n == n0:  
        print("O nº informado é um número de Fibonacci")
        break
    n0, nS = nS, n0 + nS  
else:
    print("O nº informado não é um número de Fibonacci")
