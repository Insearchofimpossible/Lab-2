#include <iostream>;
using namespace std;
int main() {
	int n, i = 1;
	double s = 0, u = 1, x;
	setlocale(LC_ALL, "RU");
	cout << "Введите количество элементов: "; cin >> n;
	cout << "Введите x: "; cin >> x;
	while (i <= n) {
		s += u;
		u = u * x / i;
		i += 1;
	}
	cout << "s = " << s;
	return 0;
}
	
