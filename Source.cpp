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
		{
	double a, b;
	cout « "Введите первый аргумент" « endl;
	cin » a;
	cout « "Введите второй аргумент" « endl;
	cin » b;
	cout « MySum(a, b) « endl;
	break;
	}
	}
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
		double a3, b3;
		cout << "Введите первый аргумент" << endl;
		cin >> a3;
		cout << "Введите второй аргумент" << endl;
		cin >> b3;
		cout << MyMul(a3, b3) << endl;
		break;
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