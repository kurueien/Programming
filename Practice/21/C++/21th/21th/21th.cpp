#include <iostream>
double BMI(double weight, double height);
void printBMI(double BMI);
int main()
{
    setlocale(LC_ALL, "Russian");
	double weight, height;
	std::cout << "Введите рост(в сантиметрах) и вес(в килограммах)\n";
	std::cin >> height >> weight;
	printBMI(BMI(weight, height/100));
}
double BMI(double weight, double height) {
	return weight / (height * height);
}
void printBMI(double BMI) {
	if (BMI < 18.5)
		std::cout << "Ниже нормального веса";
	else if (BMI < 25)
		std::cout << "Нормальный вес";
	else if (BMI < 30)
		std::cout << "Ожирение I степени";
	else if (BMI < 40)
		std::cout << "Ожирение II степени";
	else
		std::cout << "Ожирение III степени";
}