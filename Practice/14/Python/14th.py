print('Введите целое число')
n=int(input())
x=0
c=1
if n==0:
    c=0
while n>=1:
    n=n/2
    x=x+1
if c==0:
    print(c)
else:
    print(x)
    
