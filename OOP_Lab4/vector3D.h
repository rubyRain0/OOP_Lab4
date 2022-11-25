#pragma once
#include "Triad.h"
#include <cmath>
#include <sstream>

class vector3D : public Triad
{
public:
	vector3D();
	vector3D(double _a, double _b, double _c);

	vector3D operator+(const vector3D& objVector3D);
	vector3D operator-(const vector3D& objVector3D);
	vector3D& operator=(const vector3D& objVector3D);
	double operator*(const vector3D& objVector3D); // Scalar product.
	double operator*(const Triad& objVector3D);
	double angleBetweenVectors(const Triad& objVector3D);

	void setCoordinates(double _a, double _b, double _c);

	double getLength(const Triad& objVector3D) const;
	double getLength() const;

	std::string toString() const;
};