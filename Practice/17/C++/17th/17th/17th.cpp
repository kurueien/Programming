#include <iostream>
int main() {
	const int NUM = 37;
	const int k = 12;
	int x, blacks = 0, reds = 0;
	int round_drop[NUM];
	int count[NUM];
	for (int i = 0; i < NUM; i++)
	{
		count[i] = 0;
		round_drop[i] = 0;
	}
	int round=0;
	int high_count = -1;

	for (int i = 0; ; i++)
	{
		++round;
		std::cin >> x;
		if (x < 0)
			break;
		count[x]++;
		round_drop[x] = round;
		for (int i = 0; i < NUM; i++)
			if (count[i] > high_count)
				high_count = count[i];

		for (int i = 0; i < NUM; i++)
			if (count[i] == high_count)
				std::cout << i << " ";
		std::cout << '\n';
		for (int i = 0; i < NUM; i++) {
			if (round_drop[i] == 0 or (round - round_drop[i]) > k)
				std::cout << i << " ";
		}
		std::cout << '\n';

			if (x != 0) {
				if (x <= 10 || (x > 18 && x <= 28))
					if (x % 2 == 1)
						++reds;
					else              
						++blacks;
				else
					if (x % 2 == 0)
						++reds;
					else           
						++blacks;
				std::cout << reds << " " << blacks << '\n';
			}

		;
	}
}