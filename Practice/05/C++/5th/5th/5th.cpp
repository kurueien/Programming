#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double x0, v0, t, x, a, l;
    a = 9.8;
    cout << "Введите х0, v0, t" << '\n';
    cin >> x0 >> v0 >> t;
    x = x0 + v0 * t - a * t * t / 2;
    cout << "Тело падало " << x0 - x << " метров";

    return 0;
}