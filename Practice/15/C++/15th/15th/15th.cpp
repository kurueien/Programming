#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Приветствуем в игре. Правила игры:\n" << "Компьютер загадывает случайное целое число  в диапазоне от 0 до 100.\nВам даётся 5 попыток угадать это число\n";
    int x, n;
    bool ch, win;
    do {
        n = rand() % 101;
        ch = 0;
        win = 0;
        for (int i = 5; i > 0; i--) {
            std::cin >> x;
            if (x < n)
                std::cout << "Загаданное число больше\n";
            else if (x > n)
                std::cout << "Загаданное число меньше\n";
            else {
                std::cout << "Поздравляю! Вы угадали\n";
                win = 1;
                break;
            }
        }
        if (win == 0)
            std::cout << "Вы проиграли. Было загадано: " << n << '\n';
        std::cout << "Хотите начать сначала? (1 - ДА )\n";
        std::cin >> ch;
    } while (ch == 1);
}
