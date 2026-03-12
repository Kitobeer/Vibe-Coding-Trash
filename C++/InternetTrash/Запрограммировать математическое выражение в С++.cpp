// http://cppstudio.com/cat/285/286/ <- Задание от сюда

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a, b, c, x;

	cout << "Введите цифры a, b и c: " << endl;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;

	cout << "Вычисляем по формуле: x = (a + b - c / a) + c * a * a - (a + b)" << endl;

	x = (a + b - c / a) + c * a * a - (a + b);

	cout << "Результат: x = " << x << endl;

	return 0;

}
