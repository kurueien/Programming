import math
print ('Введите три вещественных числа, каждое в отдельной строке')
a = int(input())
b = int(input())
c = int(input())
if a==0:
    if b!=0:
        print('x=', -c/b)
    elif c==0:
        print('х - любое число')
    else:
        print('Действительных корней нет')
else:
    D = b**2-4*a*c
    if D<0:
        print('Действительных корней нет')
    elif D==0:
        print('x=',-b/(2*a))
    else:
        x1=(-b-math.sqrt(D))/(2*a)
        x2=(-b+math.sqrt(D))/(2*a)
        print('x1=', x1,' x2=', x2)
