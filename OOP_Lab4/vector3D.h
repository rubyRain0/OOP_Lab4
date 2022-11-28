#pragma once
#include "Triad.h"
#include <cmath>
#include <sstream>

class vector3D : public Triad
{
public:
	vector3D();
	vector3D(double _a, double _b, double _c);

	double operator*(const vector3D& objVector3D); // Scalar product.
	double angleBetweenVectors(const vector3D& objVector3D);

	void setCoordinates(double _a, double _b, double _c);

	static double getLength(const Triad& objVector3D);
	double getLength() const;

	std::string toString() const;
};