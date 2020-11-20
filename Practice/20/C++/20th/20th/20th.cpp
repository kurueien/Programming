#include <iostream>
#include <string>
using namespace std;
class buhlo{
public:
	string Name;
	int price;
	int volume;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int cash, types, c;
	buhlo current;
	buhlo best;
	cout << "Введите, сколько у вас денег\n";
	cin >> cash;
	cout << "Введите количество типов выпивки\n";
	cin >> types;
	cout << "Через пробел введите название, цену и объем продукта\n";
	cin >> best.Name;
	cin >> best.price;
	cin >> best.volume;
	int best_V= (cash / best.price) * best.volume;
	for (int i = 0; i < types-1; i++) {
		cin >> current.Name;
		cin >> current.price;
		cin >> current.volume;

		int V = (cash / current.price) * current.volume;
		if (V > best_V) {
			best = current;
		}
	}
	int amount = 0;
	amount = cash / (best.price);
	if (amount == 0)
		cout << "-1";
	else {
		cout << best.Name << ' ' << amount << endl;
		cout << amount * best.volume << endl;
		cout << cash - amount * best.price;
	}
	
}
