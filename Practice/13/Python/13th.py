print('Введите положительное целое число больше 2')
x=int(input())
c=0
for i in range(2, x):
    if x%i==0:
        c=1
if c==0:
    print('Простое')
else:
    print('Составное')
