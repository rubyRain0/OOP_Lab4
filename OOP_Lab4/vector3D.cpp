#include "vector3D.h"

vector3D::vector3D()
{
	a = 0; b = 0; c = 0;
};
vector3D::vector3D(double _a, double _b, double _c)
{
	a = _a; b = _b; c = _c;
}

double vector3D::operator*(const vector3D& objVector3D)
{
	return (a * objVector3D.a + b * objVector3D.b + c * objVector3D.c);
}

double vector3D::angleBetweenVectors(const vector3D& objVector3D)
{
	return acos(((*this) * objVector3D) / (getLength(*this) * getLength(objVector3D))) * 57.295779;
}

void vector3D::setCoordinates(double _a, double _b, double _c)
{
	a = _a; b = _b; c = _c;
}

double vector3D::getLength(const Triad& objVector3D)
{
	return (sqrt(pow(objVector3D.getA(), 2) + pow(objVector3D.getB(), 2) + pow(objVector3D.getC(), 2)));
}

double vector3D::getLength() const
{
	return (sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2)));
}

std::string vector3D::toString() const
{
	std::stringstream ss;
	ss << "---VectorInfo---\n" << "A= " << a << '\n' << "B= " << b << '\n' << "C= " << c
		<< "\nLength: " << getLength() << '\n' << "----------------\n";
	return ss.str();
}
