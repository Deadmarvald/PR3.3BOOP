#include "Pair.h"

using namespace std;

Pair::Pair(const long x, const unsigned long y) : first(x), second(y)
{ }

Pair::Pair(const Pair& r)
{
	first = r.first;
	second = r.second;
}

Pair::~Pair(void)
{ }

bool Pair::operator ==(const Pair& x)
{
	return this->GetFirst() == x.GetFirst() && this->GetSecond() == x.GetSecond();
}

bool Pair::operator !=(const Pair& x)
{
	return !(this->GetFirst() == x.GetFirst() && this->GetSecond() == x.GetSecond());
}

bool Pair::operator >(const Pair& x)
{
	if (this->GetFirst() > x.GetFirst()
		||
		this->GetFirst() == x.GetFirst() &&
		this->GetSecond() > x.GetSecond())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Pair::operator <(const Pair& x)
{
	if (this->GetFirst() < x.GetFirst()
		||
		this->GetFirst() == x.GetFirst() &&
		this->GetSecond() < x.GetSecond())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Pair::operator >=(const Pair& x)
{
	if (this->GetFirst() > x.GetFirst()
		||
		this->GetFirst() == x.GetFirst() &&
		this->GetSecond() > x.GetSecond()
		||
		this->GetFirst() == x.GetFirst() &&
		this->GetSecond() == x.GetSecond()
		)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Pair::operator <=(const Pair& x)
{
	if (this->GetFirst() < x.GetFirst()
		||
		this->GetFirst() == x.GetFirst() &&
		this->GetSecond() < x.GetSecond()
		||
		this->GetFirst() == x.GetFirst() &&
		this->GetSecond() == x.GetSecond()
		)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string format(unsigned long b)
{
	stringstream ss;

	if (b < 10)
	{
		ss << "0";
	}

	ss << b;

	return ss.str();
}

Pair::operator string() const
{
	stringstream ss;

	ss << endl;
	ss << GetFirst() << "," << format(GetSecond()) << " hrn.";

	return ss.str();
}

ostream& operator << (ostream& out, const Pair& r)
{
	return out << string(r);
}

istream& operator >> (istream& in, Pair& r)
{
	int a, b;

	cout << endl;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	cout << endl;

	r.SetFirst(a);
	r.SetSecond(b);

	return in;
}