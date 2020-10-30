#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	int h1, h2, m1, m2;
	char c;
	std::cout << "Введите время прихода первого человека в формате hh:mm\n";
	std::cin >> h1 >> c >> m1;
	std::cout << "Введите время прихода второго человека в формате hh:mm\n";
	std::cin >> h2 >> c >> m2;
	m1 = m1 + h1 * 60;
	m2 = m2 + h2 * 60;
	if ((m2 - m1 <= 15) and (m2 - m1 >= -15))
		std::cout << "Встреча состоится";
	else
		std::cout << "Встреча не состоится";
}
