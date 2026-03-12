// http://cppstudio.com/cat/285/286/ <- Задание от сюда

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	cout << "Введите пятизначное число: " << endl;
	cin >> a;
	if (a < 10000 || a > 99999) {
		cout << "Вы ввели не пятизначное число!" << endl;
		return 0;
	}

	cout << "Первая цифра равна: " << a / 10000 << endl;
	cout << "Вторая цифра равна: " << (a / 1000) % 10 << endl;
	cout << "Третья цифра равна: " << (a / 100) % 10 << endl;
	cout << "Четвертая цифра равна: " << (a / 10) % 10 << endl;
	cout << "Пятая цифра равна: " << a % 10 << endl;

	return 0;

}
