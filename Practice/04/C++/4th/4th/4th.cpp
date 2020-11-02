
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "введите 2 переменные, сначала вводится переменная а, затем переменная b" << '\n';
    cin >> a >> b;
    // без доп. переменной
    swap(a, b);
    cout << "переменная а - " << a << "  переменная b - " << b;

    // с доп переменной
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    cout << "переменная а - " << a << "  переменная b - " << b;
    // переменные меняются значениями 2 раза, поэтому в конце переменная а=а, b=b
    return 0;

}
