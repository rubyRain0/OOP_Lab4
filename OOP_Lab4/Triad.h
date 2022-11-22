#pragma once
#include <iostream>

class Triad
{
protected:
	double a;
	double b;
	double c;
public:
	Triad();
	Triad(double _a, double _b, double _c);

	Triad& operator+(Triad& objTriad);
	Triad& operator-(Triad& objTriad);
	Triad& operator*(Triad& objTriad);
	Triad& operator/(Triad& objTriad);
	Triad& operator=(Triad& objTriad);

	Triad& operator+=(double number);
	Triad& operator*=(double number);
	Triad& operator-=(double number);
	Triad& operator/=(double number);
	Triad& operator+(double number);
	Triad& operator*(double number);
	Triad& operator-(double number);
	Triad& operator/(double number);

	bool operator==(Triad& objTriad);
	bool operator!=(Triad& objTriad);

	friend std::ostream& operator<<(std::ostream& output, Triad& objTriad);
	friend std::istream& operator>>(std::istream& input, Triad& objTriad);

	void setA(double _a);
	void setB(double _b);
	void setC(double _c);

	double getA() const;
	double getB() const;
	double getC() const;
};