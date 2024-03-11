//
// ©2024 Joshua Leon Keggenhoff
//

#include "GeometryCalculator.h"

double circularAreaFromRadius(double radius){
	double result;
	result = M_PI * (pow(radius, 2));
	return result;
};

double circularAreaFromDiameter(double diameter){
	double result;
	result = M_PI * (pow(diameter/2, 2));
	return result;
};

double squareArea(double side){
	double result;
	result = side * side;
	return result;
};

double rectangularArea(double width, double height){
	double result;
	result = width * height;
	return result;
};

double triangularArea(double base, double height){
	double result;
	result = base * height / 2;
	return result;

};

void cylindricalAreaAndVolumen(double radius, double height, double& area, double& volume){
	area= 2 * M_PI * radius * (radius + height);
	volume = M_PI * pow(radius, 2) * height;
};