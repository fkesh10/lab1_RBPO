#include "Header.h"

void ReadPersonData(string& _name, unsigned short& _age, unsigned short& height, unsigned short& _weight)
{
	cout << "!����� ������ ������������� �������!" << endl;
	cout << "������� ���: ";
	_name = ReadPersonName();
	cout << "������� �������: ";
	_age = ReadPersonAge();
	cout << "������� ����: ";
	ReadPersonHeight();
	cout << "������� ���: ";
	ReadPersonWeight(_weight);
	cout << endl;
}