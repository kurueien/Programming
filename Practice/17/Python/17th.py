count = {}
drop_round = {}
for i in range(37):
    count[i] = 0
    drop_round[i] = 0

high_number = 0;
Round = 0;
reds = 0;
blacks = 0
while (True):
    x = int(input())
    if x < 0:
        break
    Round = Round + 1
    count[x] = count[x] + 1
    drop_round[x] = Round
    
    high_number = max(count.values())
    for i in range(37):
        if count[i] == high_number:
            print(i, end = ' ')
    print()

    for i in range(37):
        if (drop_round[i] == 0) or (Round-drop_round[i]>12):
            print(i, end = ' ')
    print()

    if x != 0:
        if (x <= 10) or (x > 18 and x <= 28):
            if x % 2 == 1: reds += 1
            else:             blacks += 1
        else:
            if x % 2 == 0: reds += 1
            else:             blacks += 1

    print(reds,blacks,'\n')
