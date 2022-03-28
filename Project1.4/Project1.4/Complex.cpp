#include "Complex.h"

void Complex::Init(double x, double y)
{
	SetX(x);
	SetY(y);
}

void Complex::Read()
{
	double x, y;
	cout << "Real: ";
	cin >> x;
	cout << "Image: ";
	cin >> y;

	Init(x, y);
}

void Complex::Display()
{
	cout << GetX() << endl;
	cout << GetY() << endl;
	cout << toString() << endl;
}

string Complex::toString() const
{
	stringstream sout;
	if (y >= 0)
		sout << x << "+" << y << "i\n";
	else
		sout << x << y << "i\n";
	return sout.str();
}

Complex add(Complex a, Complex b)
{
	Complex c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

Complex mul(Complex a, Complex b)
{
	Complex d;
	d.x = a.x * b.x - a.y * b.y;
    d.y = a.x * b.y + a.y * b.x;
	return d;
}

Complex sub(Complex a, Complex b)
{
	Complex e;
	e.x = a.x - b.x;
	e.y = a.y - b.y;
	return e;
}
