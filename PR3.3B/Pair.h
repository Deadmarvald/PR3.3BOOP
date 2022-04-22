#pragma once

#include<iostream>
#include<sstream>
#include<string>

using namespace std;

class Pair
{
private:
	long first;
	unsigned long second;

public:
	Pair(const long x = 0, const unsigned long y = 0);
	Pair(const Pair& r);
	~Pair(void);

	long GetFirst() const { return first; }
	unsigned long GetSecond() const { return second; }

	void SetFirst(long value) { first = value; }
	void SetSecond(unsigned long value) { second = value; }

	bool operator ==(const Pair&);
	bool operator !=(const Pair&);
	bool operator >(const Pair&);
	bool operator <(const Pair&);
	bool operator >=(const Pair&);
	bool operator <=(const Pair&);

	operator string() const;

	friend ostream& operator << (ostream&, const Pair&);
	friend istream& operator >> (istream&, Pair&);
};