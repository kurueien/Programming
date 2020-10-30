#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    long n;
    std::cout << "Введите целое число\n";
    std::cin >> n;
    long long factorial;
    factorial = 1;
    if (n < 0) {
        std::cout << "Ошибка";
        return 0;
    }
    else {
        for (int i = 2; i < n + 1; i++) {
            factorial = factorial * i;
            std::cout << factorial << '\n';
        }
    }
    std::cout << "Факториал " << n << " = " << factorial;
}
