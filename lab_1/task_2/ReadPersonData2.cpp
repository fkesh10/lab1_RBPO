#include "Header.h"

void ReadPersonData(string& _name, unsigned short& _age, unsigned short& height, unsigned short& _weight)
{
	cout << "!Вызов второй перегруженной функции!" << endl;
	cout << "Введите имя: ";
	_name = ReadPersonName();
	cout << "введите возраст: ";
	_age = ReadPersonAge();
	cout << "Введите рост: ";
	ReadPersonHeight();
	cout << "Введите вес: ";
	ReadPersonWeight(_weight);
	cout << endl;
}