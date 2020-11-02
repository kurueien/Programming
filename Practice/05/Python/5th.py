x0 = float(input('x0 = '))
v0 = float(input('v0 = '))
t = float(input('t = '))
g = 9.8
a = g
x = x0 + v0 * t - a * t * t / 2
print('Тело падало ', x0-x ,' метров')
