a = int(input())
b = int(input())
a, b = b, a
print('число а теперь равно - ', a, 'число b теперь равно - ',b)

tmp = a
a = b
b = tmp
print('число а снова равно - ', a, 'число b снова равно - ',b)
