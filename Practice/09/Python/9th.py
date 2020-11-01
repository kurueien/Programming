print('Введите время прихода 2-х людей в формате hh:mm каждое с новой строки')
h1,m1 = map(int, input().split(sep=':'))
h2,m2 = map(int, input().split(sep=':'))
v1=h1*60+m1
v2=h2*60+m2
if v1-v2>15 or v1-v2 <-15:
    print('Встреча не состоится')
else:
    print('Встреча состоится')
    
