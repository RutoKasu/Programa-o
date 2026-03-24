
i = 0
x = int(input("escolha um numero para a função:"))
a = int(input("qual o valor de a: "))
b = int(input("qual o valor de b: "))
c = int(input("qual o valor de c: "))

while i <10 :
    y = ((a*(x**2)) + b*x + c)
    print(y)
    print("resultado da função é: ", y)
    x+= 1
    i += 1


