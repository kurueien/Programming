import math
print('Выберите способ ввода параметров')
print('1 - через стороны треугольника')
print('2 - через координаты вершин')
ch=int(input())
if ch==1:
    print('Введите стороны треугольника, каждою в отдельной строке')
    a=int(input())
    b=int(input())
    c=int(input())
elif ch==2:
    print('Введите три пары вещественных чисел, каждая пара в отдельной строке, числа в паре разделены пробелом')
    x1, y1 = map(int, input().split())
    x2, y2 = map(int, input().split())
    x3, y3 = map(int, input().split())
    a = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    b = math.sqrt((x3 - x2)**2 + (y3 - y2)**2)
    c = math.sqrt((x1 - x3)**2 + (y1 - y3)**2)

p = (a + b + c) / 2
S = math.sqrt(p * (p - a) * (p - b) * (p - c))
print('S=', S)
