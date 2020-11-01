#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    long long s, l1, r1, l2, r2;
    long x1, x2;
    int rr = 1;
    std::cout << "Введите сумму, границы первого промежутка, границы второго промежутка на одной строке через пробел\n";
    std::cin >> s >> l1 >> r1 >> l2 >> r2;
    x1 = l1;
    if (x1 + r2 < s) {
        x2 = r2;
        if (r1 + x2 < s)
            rr = -1;
        else 
            x1 = s - r2;
    }
    else {
        if (l1 + l2 > s) {
            rr = -1;
        }
        else {
            x2 = s - x1;
        }
    }

    if (rr = 1)
        std::cout << x1 << ' ' << x2;
    else
        std::cout << rr;
}