#include <iostream>;
using namespace std;
int main() {
	int a, b, n, max, num, i = 1, count = i;
	setlocale(LC_ALL, "RU");
	cout << "Введите количество элементов в последовательности: "; cin >> n;
	cout << "Введите элемент последовательности: "; cin >> a;
	max = a;
	i += 1;
	while (i <= n) {
		cout << "Введите следующий элемент последовательности: "; cin >> b;
		if (b > max) {
			max = b;
			num = i;
		}
		else {
			if (b == max)
				count += 1;
		}
		i += 1;
	}
	cout << "Максимальный элемент = " << max << endl << "Номер максимального элемента = " << num << endl \
		<< "Количество элементов равных максимальному = " << count;
}