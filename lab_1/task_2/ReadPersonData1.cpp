#include "Header.h"

void ReadPersonData(string& _name, unsigned short& _age, double& _salary)
{
	cout << "!����� ������ ������������� �������!" << endl;
	cout << "������� ���: ";
	_name = ReadPersonName();
	cout << "������� �������: ";
	_age = ReadPersonAge();
	cout << "������� �����: ";
	ReadPersonSalary(&_salary);
	cout << endl;
}