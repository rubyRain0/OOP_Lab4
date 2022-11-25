#include "vector3D.h"

int main()
{
	Triad triad1(1, 2, 1);
	
	/*Triad triad2(1, 2, 3);
	Triad triad3;

	triad3 = triad2 * 3 + triad1;
	std::cout << triad3;
	std::cout << (triad1 != triad3);*/

	vector3D vectorA(1, 1, 1);
	vector3D vectorB(3, 4, 5);
	vector3D vectorC;

	vectorC.setCoordinates(1, 3, 1);
	std::cout << "vectorC: " << vectorC;

	vectorC = vectorA + vectorB;
	std::cout << vectorA << vectorB;
	double scalarProduct = vectorC * vectorB;

	std::cout << "vectorC: " << vectorC << "vectorC length: " << 
		vectorC.getLength() << "\nScalar product: " << scalarProduct << '\n';

	std::cout << vectorC.angleBetweenVectors(vectorB) << '\n';
	std::cout << vectorC.toString();
	std::cout << (vectorC == vectorB);


}