#include "Header.h"

void ReadPersonData(string& _name, unsigned short& _age, double& _salary)
{
	cout << "!Вызов первой перегруженной функции!" << endl;
	cout << "Введите имя: ";
	_name = ReadPersonName();
	cout << "Введите возраст: ";
	_age = ReadPersonAge();
	cout << "Введиет оклад: ";
	ReadPersonSalary(&_salary);
	cout << endl;
}