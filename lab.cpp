#include <iostream>;
using namespace std;
int main() {
	int a, b, n, max, num, i = 1, count = i;
	setlocale(LC_ALL, "RU");
	cout << "������� ���������� ��������� � ������������������: "; cin >> n;
	cout << "������� ������� ������������������: "; cin >> a;
	max = a;
	i += 1;
	while (i <= n) {
		cout << "������� ��������� ������� ������������������: "; cin >> b;
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
	cout << "������������ ������� = " << max << endl << "����� ������������� �������� = " << num << endl \
		<< "���������� ��������� ������ ������������� = " << count;
}