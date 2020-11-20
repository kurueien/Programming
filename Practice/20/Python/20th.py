class buhlo:
    pass
best = buhlo()
current = buhlo()
cash = int(input())
types = int(input())
best.Name = str(input())
best.price = int(input())
best.volume = int(input())
bestV = int((cash/best.price)*best.volume)
curren = 0
for i in range(types-1):
    current.Name = str(input())
    current.price = int(input())
    current.volume = int(input())
    curren = int((cash/current.price)*current.volume)
    if (curren > bestV):
        best = current
amount = int(cash/best.price)
if amount == 0:
    print('-1')
else:
    print(best.Name, ' ', amount, end = ' ')
    print()
    print(amount*best.volume, end = ' ')
    print()
    print(cash-(amount*best.price), end = ' ')
    
