#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "1) Сумма" << endl;
	cout << "2) Разность" << endl;
	cout << "3) Умножение" << endl;
	cout << "4) Деление" << endl;
	cout << "Выберите действие:" << endl;
	cin >> n;
	switch (n)
	{
	case 1:
	{
		cout << "Функция сложения временно не доступна" << endl;
		break;
	}
	case 2:
	{
		double a2, b2;
		cout << "Введите первый аргумент" << endl;
		cin >> a2;
		cout << "Введите второй аргумент" << endl;
		cin >> b2;
		cout << MyVich(a2, b2) << endl;
		break;
	}
	case 3:
	{
		{
			cout << "Функция умножения временно не доступна" << endl;
			break;
		}
	}
	case 4:
	{
		cout << "Функция деления временно не доступна" << endl;
		break;
	}

	default:
		break;
	}
	system("pause");
	return 0;
}