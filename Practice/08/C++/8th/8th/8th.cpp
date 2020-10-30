#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите через пробел: вещественное число, затем символ - знак операции и вещественное число.\n";
	double a, b, result;
	char ch;
	std::cin >> a >> ch >> b;
	switch (ch) {
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (b != 0)
			result = a / b;
		else {
			std::cout << "Ошибка";
			return 0;
		}
		std::cout << result << '\n';
	}


}
