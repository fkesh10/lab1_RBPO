#include "Header.h"

string strGlobalSalary;

void WritePersonData(const string& _name,
	const string& _height = "",
	const string& _weight = "",
	const unsigned short* _age = 0)
{
	cout << "------------------------------" << endl;
	cout << "Имя: " << _name << endl;
	cout << "Рост: " << _height << endl;
	cout << "Вес: " << _weight << endl;
	cout << "Возраст: " << *(_age) << endl;
	cout << "Оклад: " << strGlobalSalary << endl;
	cout << "------------------------------" << endl;
}