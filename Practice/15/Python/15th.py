import random
print('Приветствуем в игре.')
print('Правила игры:')
print('Компьютер загадывает случайное целое число  в диапазоне от 0 до 100.')
print('Вам даётся 5 попыток угадать это число')
ch=1
while ch==1:
    win=0
    n=random.randint(0,100)
    for i in range(5):
        x=int(input())
        if x<n:
            print('Загаданное число больше')
        elif x>n:
            print('Загаданное число меньше')
        else:
            print('Поздравляю! Вы угадали')
            win=1
            break
    if win==0:
        print('Вы проиграли. Было загадано:', n)
    print('Хотите начать сначала? (1 - ДА )')
    ch=int(input())
    if ch==0:
        break
            
