// http://cppstudio.com/cat/285/286/ <- Задание от сюда

#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string stroka;

	cout << "Введите букву нижнего регистра (латинскую): " << endl;	
	cin >> stroka;
	cout << "Буква верхнего регистра: " << char(stroka[0] - 32) << endl;
}
