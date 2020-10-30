#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите положительное целое число больше 2\n";
    long x;
    std::cin >> x;
    for (long i = 2; i < x; i++) 
        if (x % i == 0) {
            std::cout << "Составное";
            return 0;
        }
    std::cout << "Простое";
           
    }