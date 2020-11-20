def BMI(weight,height):
    return weight / (height**2)

def printBMI(BMI):
    if   BMI < 18.5:
        print('Ниже нормального веса')
    elif BMI < 25:
        print('Нормальный вес')
    elif BMI < 30:
        print('Ожирение I степени')
    elif BMI < 40:
        print('Ожирение II степени')
    else:
        print('Ожирение III степени')

weight = float(input())
height = float(input())
printBMI(BMI(weight, height/100))
