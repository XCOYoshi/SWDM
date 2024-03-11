//
// ©2024 Joshua Leon Keggenhoff
//

#ifndef GeometryCalculator
#define GeometryCalculator

#define _USE_MATH_DEFINES

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

/**
* @name
* @details Calculate The Area of a Circle with the Radius
* 
* @param[in] radius The Radius of the Circle
* @returns the Area of the Circle with the Radius that is provided 
*/
double circularAreaFromRadius(double radius);


/**
* @name circularAreaFromDiameter
* @details Calculate The Area of a Circle with the Diameter
*
* @param[in] diameter The Diameter of the Circle
* @returns the Area of the Circle with the Diameter that is provided
*/
double circularAreaFromDiameter(double diameter);


/**
* @name squareArea
* @details Calculate The Area of a Square
* 
* @param[in] side The length of a one of the sides
* @returns  the Area of the Square
*/
double squareArea(double side);


/**
* @name rectangularArea
* @details Calculate The Area of a Rectangle
*
* @param[in] width The width of the Rectangle
* @param[in] height The height of the Rectangle
* @returns The Area of the Rectangle
*/
double rectangularArea(double width, double height);


/**
* @name triangularArea
* @details Calculate The Area of a Triangle
*
* @param[in] base The base of the Triangle
* @param[in] height The height of the Triangle
* @returns The Area of the Triangle
*/
double triangularArea(double base, double height);


/**
* @name cylindricalAreaAndVolumen
* @details Calculate The Area and volume of a Cylinder
* 
* @param[in] radius The radius of the Cylinder
* @param[in] height The height of the Cylinder
* @param[out] volume The volume of the Cylinder
* @param[out] area The Area of the base of Cylinder
*/
void cylindricalAreaAndVolumen(double radius, double height, double &area, double &volume);

#endif