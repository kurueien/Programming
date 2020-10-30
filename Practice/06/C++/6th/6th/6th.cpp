#include <iostream>
#include <cmath>
// Корни уровнения
int main()
{
    setlocale(LC_ALL,"Russian");
    double a, b, c;
    std::cout << "Введите три вещественных числа, каждое в отдельной строке\n";
    std::cin >> a >> b >> c;
    if (a == 0) {
        if (b != 0)
            std::cout << "х = " << -c / b;
        else if (c == 0)
            std::cout << "х = любое число";
        else
            std::cout << "Действительных корней нет";
    } 
    else {
        double d, x1, x2;
        d = pow(b, 2) - 4 * a * c;
        if (d < 0)
            std::cout << "Действительных корней нет";
        else if (d == 0) {
            std::cout << "х = " << -b / (2 * a);
            return 0;
        }
        else {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            std::cout << "Первый корень = " << x1 << '\n' << "Второй корень = " << x2;
        }


    }
        
}
