#pragma once
#include <iostream>
#include <string> 
#include <sstream>

using namespace std;

class Complex
{
private:
	double x, y;

public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }

	void Init(double, double);
	void Display();
	void Read();
	string toString() const;

	friend Complex add(Complex a, Complex b);
	friend Complex mul(Complex a, Complex b);
	friend Complex sub(Complex a, Complex b);
};

