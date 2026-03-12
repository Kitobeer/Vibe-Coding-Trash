// http://cppstudio.com/cat/285/286/ <- Задание от сюда

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int f;
	float a, b;

	cout << "МОДИФИЦИРОВАННЫЙ ВЕЛИКИЙ ПЕРЕВОДЧИК МЕТРОВ В КИЛОМЕТРЫ" << endl << endl;

	cout << "Выберите, что переводите - километры в метры или метры в километры" << endl;

	cout << "1. Метры" << endl;
	cout << "2. Километры" << endl;

	cin >> f;

	if (f == 1) {
		cout << "Введите метры: "; cin >> a;
		cout << endl;
		b = a / 1000;

		cout << a << " метров будет " << b << " километров." << endl;
	}
	else if (f == 2) {
		cout << "Введите километры: "; cin >> a;
		cout << endl;
		b = a * 1000;

		cout << a << " километров будет " << b << " метров." << endl;
	}
	else {
		cout << "Ну всё ты сломал код, молодец";
	}
	return 0;
}