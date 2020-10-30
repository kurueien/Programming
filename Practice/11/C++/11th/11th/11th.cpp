#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите число и введите целое число-степень\n";
	double x, s;
	int y;
	std::cin >> x >> y;
	s = x;
	for (int i = 1; i < y; i++)
		s = s * x;
	std::cout << x << " в степени " << y << " = " << s;
		
}

