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
		{
	double a, b;
	cout � "������� ������ ��������" � endl;
	cin � a;
	cout � "������� ������ ��������" � endl;
	cin � b;
	cout � MySum(a, b) � endl;
	break;
	}
	}
	}
	case 2:
	{
		cout << "������� ��������� �������� �� ��������" << endl;
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