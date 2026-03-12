// http://cppstudio.com/cat/285/286/ <- Задание от сюда

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b;

	cout << "ВЕЛИКИЙ ПЕРЕВОДЧИК МЕТРОВ В КИЛОМЕТРЫ" << endl << endl;
	cout << "Введите метры: "; cin >> a;
	cout << endl;
	b = a / 1000;

	cout << a << " метров будет " << b << " километров." << endl;
}
