#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "1) �����" << endl;
	cout << "2) ��������" << endl;
	cout << "3) ���������" << endl;
	cout << "4) �������" << endl;
	cout << "�������� ��������:" << endl;
	cin >> n;
	switch (n)
	{
	case 1:
	{
		cout << "������� �������� �������� �� ��������" << endl;
		break;
	}
	case 2:
	{
		double a2, b2;
		cout << "������� ������ ��������" << endl;
		cin >> a2;
		cout << "������� ������ ��������" << endl;
		cin >> b2;
		cout << MyVich(a2, b2) << endl;
		break;
	}
	case 3:
	{
		{
			cout << "������� ��������� �������� �� ��������" << endl;
			break;
		}
	}
	case 4:
	{
		cout << "������� ������� �������� �� ��������" << endl;
		break;
	}

	default:
		break;
	}
	system("pause");
	return 0;
}