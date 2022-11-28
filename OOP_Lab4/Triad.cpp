#include "Triad.h"

Triad::Triad() 
{
	a = 0; b = 0; c = 0;
}

Triad::Triad(double _a, double _b, double _c)
{
	a = _a; b = _b; c = _c;
}

Triad* Triad::operator+(Triad& objTriad) 
{
	Triad* p = new Triad;
	p->a = a + objTriad.a;
	p->b = b + objTriad.b;
	p->c = c + objTriad.c;
	return p;
}

Triad* Triad::operator-(Triad& objTriad)
{
	Triad* p = new Triad;
	p->a = a - objTriad.a;
	p->b = b - objTriad.b;
	p->c = c - objTriad.c;
	return p;
}

Triad* Triad::operator*(Triad& objTriad)
{
	Triad* p = new Triad;
	p->a = a * objTriad.a;
	p->b = b * objTriad.b;
	p->c = c * objTriad.c;
	return p;
}

Triad* Triad::operator/(Triad& objTriad)
{
	if (objTriad.a == 0 || objTriad.b == 0 || objTriad.c == 0)
		std::cout << "Division by zero error.\n";
	else
	{
		Triad* p = new Triad;
		p->a = a / objTriad.a;
		p->b = b / objTriad.b;
		p->c = c / objTriad.c;
		return p;
	}
}

Triad& Triad::operator+=(double number)
{
	a += number; b += number; c += number;
	return *this;
}

Triad& Triad::operator*=(double number)
{
	a *= number; b *= number; c *= number;
	return *this;
}

Triad& Triad::operator-=(double number)
{
	a -= number; b -= number; c -= number;
	return *this;
}

Triad& Triad::operator/=(double number)
{	
	if (number == 0)
		std::cout << "Division by zero error.\n";
	else
		a /= number; b /= number; c /= number;
	return *this;
}

Triad* Triad::operator+(double number)
{
	Triad* p = new Triad;
	p->a = a + number;
	p->b = b + number;
	p->c = c + number;
	return p;
}

Triad* Triad::operator*(double number)
{
	Triad* p = new Triad;
	p->a = a * number;
	p->b = b * number;
	p->c = c * number;
	return p;
}

Triad* Triad::operator-(double number)
{
	Triad* p = new Triad;
	p->a = a - number;
	p->b = b - number;
	p->c = c - number;
	return p;
}

Triad* Triad::operator/(double number)
{
	if (number == 0)
		std::cout << "Division by zero error.\n";
	else
	{
		Triad* p = new Triad;
		p->a = a / number;
		p->b = b / number;
		p->c = c / number;
		return p;
	}
}

Triad* Triad::operator=(Triad& objTriad)
{
	a = objTriad.a; b = objTriad.b; c = objTriad.c;
	return this;
}

bool Triad::operator==(Triad& objTriad)
{
	if (a == objTriad.a && b == objTriad.b && c == objTriad.c)
		return true;
	return false;
}

bool Triad::operator!=(Triad& objTriad)
{
	if (a == objTriad.a && b == objTriad.b && c == objTriad.c)
		return false;
	return true;
}

void Triad::setA(double _a)
{ 
	a = _a; 
}

void Triad::setB(double _b)
{ 
	b = _b; 
} 

void Triad::setC(double _c)
{
	c = _c;
}

double Triad::getA() const
{
	return a;
}

double Triad::getB() const
{ 
	return b; 
}

double Triad::getC() const
{
	return c;
}

std::ostream& operator<<(std::ostream& output, Triad& objTriad)
{
	output << "a = " << objTriad.a << " b = " << objTriad.b << " c = " << objTriad.c << '\n';
	return output;
}

std::istream& operator>>(std::istream& input, Triad& objTriad)
{	
	std::cout << "Enter a, b, c: \n";
	input >> objTriad.a >> objTriad.b >> objTriad.c;
	std::cout << "\n";
	return input;
}
