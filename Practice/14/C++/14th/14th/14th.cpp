#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    long long n;
    int x;
    std::cout << "Введите целое число\n";
    std::cin >> n;
    x = 1;
    if (n == 0) {
        std::cout << 0;
        return 0;
    }
    while (n > 1) {
        n = n / 2;
        x = x + 1;
    }
    std::cout << x;
}