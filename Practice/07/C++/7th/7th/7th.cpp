#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Выберите способ ввода параметров:\n 1 - через стороны треугольника\n 2 - через координаты вершин треугольника\n";
    int ch;
    double a, b, c;
    std::cin >> ch;
    switch (ch) {
    case 1:
        std::cout << "Введите стороны треугольника, каждую в отдельной строке\n";
        std::cin >> a >> b >> c;
        break;
    case 2:
        double x1, x2, x3, y1, y2, y3;
        std::cout << "Введите три пары вещественных чисел, каждая пара в отдельной строке, числа в паре разделены пробелом.\n";
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
        c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
        break;
    }
    if (a + b < c || a + c < b || c + b < a)
        std::cout << "Треугольник не существует";
    else {
        double p, S;
        p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        std::cout << "Площадь треугольника = " << S;
    }



    
}
