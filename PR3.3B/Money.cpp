#include "Money.h"
#include <string>
#include <sstream>

using namespace std;

Money::Money(const long x, const unsigned long y)
{
	long a = x;
	unsigned long b = y;

	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}

	SetFirst(a);
	SetSecond(b);
}

Money::Money(double z)
{
	long a = (long)z;
	z -= a;
	z *= 100;
	unsigned long b = (unsigned long)z;

	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}

	SetFirst(a);
	SetSecond(b);
}

Money::Money(const Money& r)
{
	int a = r.GetFirst();
	int b = r.GetSecond();

	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}

	SetFirst(a);
	SetSecond(b);
}

Money::~Money(void)
{ }

Money operator -(const Money& l, const Money& r)
{
	Money t;

	long a = l.GetFirst() - r.GetFirst();
	unsigned long b = l.GetSecond() - r.GetSecond();

	t.SetFirst(a);
	t.SetSecond(b);

	return t;
}

Money operator *(const Money& l, const double k)
{
	Money t;

	long a = (l.GetFirst() * k);
	unsigned long b = (l.GetSecond() * k);

	while (b > 99)
	{
		b -= 100;
		a++;
	}

	t.SetFirst(a);
	t.SetSecond(b);

	return t;
}

Money operator *(const double k, const Money& r)
{
	Money t;

	long a = r.GetFirst() * k;
	unsigned long b = r.GetSecond() * k;

	while (b > 99)
	{
		b -= 100;
		a++;
	}

	t.SetFirst(a);
	t.SetSecond(b);

	return t;
}

Money& Money::operator ++()
{
	int a = this->GetFirst();
	int b = this->GetSecond();
	a++;
	b++;

	this->SetFirst(a);
	this->SetSecond(b);

	return *this;
}

Money& Money::operator --()
{
	int a = this->GetFirst();
	int b = this->GetSecond();
	a--;
	b--;

	this->SetFirst(a);
	this->SetSecond(b);

	return *this;
}

Money Money::operator ++(int)
{
	Money t(*this);

	int a = this->GetFirst();
	int b = this->GetSecond();
	a++;
	b++;

	this->SetFirst(a);
	this->SetSecond(b);

	return t;
}

Money Money::operator --(int)
{
	Money t(*this);

	int a = this->GetFirst();
	int b = this->GetSecond();
	a--;
	b--;

	this->SetFirst(a);
	this->SetSecond(b);

	return t;
}