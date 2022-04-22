#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");

	Money a(0, 0), b(0, 0);

	double x;

	cout << "Enter a value of \"a\":"; cin >> a;
	cout << "Enter a value of \"b\":"; cin >> b;

	Money c(a - b);
	cout << "Вiднiмання суми: " << c;
	cout << endl << endl;

	cout << "Дрiб = "; cin >> x;
	cout << endl;

	Money d(a * x);
	cout << "Результата множення: " << d;
	cout << endl << endl;

	cout << "Порiвняння сум: " << endl;

	if (a == b)
	{
		cout << a.GetFirst() << "," << a.GetSecond() << " == "
			<< b.GetFirst() << "," << b.GetSecond() << endl << endl;
	}

	if (a != b)
	{
		cout << a.GetFirst() << "," << a.GetSecond() << " != "
			<< b.GetFirst() << "," << b.GetSecond() << endl << endl;
	}

	if (a > b)
	{
		cout << a.GetFirst() << "," << a.GetSecond() << " > "
			<< b.GetFirst() << "," << b.GetSecond() << endl << endl;
	}

	if (a < b)
	{
		cout << a.GetFirst() << "," << a.GetSecond() << " < "
			<< b.GetFirst() << "," << b.GetSecond() << endl << endl;
	}

	if (a >= b)
	{
		cout << a.GetFirst() << "," << a.GetSecond() << " >= "
			<< b.GetFirst() << "," << b.GetSecond() << endl << endl;
	}

	if (a <= b)
	{
		cout << a.GetFirst() << "," << a.GetSecond() << " <= "
			<< b.GetFirst() << "," << b.GetSecond() << endl << endl;
	}

	cout << "Iнкремент/декремент в обох формах: " << endl;

	cout << "a++: " << a++ << endl;
	cout << "res: " << a << endl;
	cout << "++a: " << ++a << endl;

	cout << "a--: " << a-- << endl;
	cout << "res: " << a << endl;
	cout << "--a: " << --a << endl;

	system("pause");
	return 0;
}