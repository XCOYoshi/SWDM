#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Interface.h"
#include "GeometryCalculator.h"

//
// ©2024 Joshua Leon Keggenhoff
//

using namespace std;

/**
* @name Main
* @details The main Function of the Program
*/
int main(){

	/**
	* @name	Declaration
	* @details Declaration of Variables
	* 
	* @param param1,param2 Parameter to start Calculations
	* @param result1,result2 Result Storage
	* @param menuItemNumber The Selects Menu item
	* @param run run status Storage
	*/
	double param1, param2, result1, result2, menuItemNumber;
	bool run = true;

	while (run){

		/**
		* @name Main Menu
		* @note Builder Of The main Menu
		*/
		printHeader(48, '#', "| Geometry  Calculator |", 48);

		cout << "	Select a Option by Typing the corresponding number" << endl << endl;

		menuItem("1:", "Calculate The Area of a Circle");
		menuItem("2:", "Calculate The Area of a Rectangle");
		menuItem("3:", "Calculate The Area of a Square");
		menuItem("4:", "Calculate The Area of a Triangle");
		menuItem("5:", "Calculate The Area and Volume of a Cylinder");
		menuItem("6:", "Exit The Program");

		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		
		cout << "Number of the Option you want to use: ";
		cin >> menuItemNumber;
		
		if (menuItemNumber == 6){

			run = false;
			break;

		}else if (menuItemNumber == 1){

			printHeader(49, '#', "| Circle  Calculator |", 49);
			menuItem("1:", "Calculate The Area of a Circle from a Radius");
			menuItem("2:", "Calculate The Area of a Rectangle from a Diameter");
			menuItem("3:", "Exit The Program");

			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

			cout << "Number of the Option you want to use: ";
			cin >> menuItemNumber;

			if (menuItemNumber == 3){
				run = false;
				break;
			}else if (menuItemNumber == 1){

				printHeader(49, '#', "| Circle  Calculator |", 49);

				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

				cout << "Input the Radius of the Circle: ";
				cin >> param1;

				result1 = circularAreaFromRadius(param1);

				cout << "the Area of the Circle is: " << result1 << endl;

				system("Pause");

			}else if (menuItemNumber == 2){

				printHeader(49, '#', "| Circle  Calculator |", 49);

				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

				cout << "Input the Diameter of the Circle: ";
				cin >> param1;

				result1 = circularAreaFromDiameter(param1);

				cout << "the Area of the Circle is: " << result1 << endl;

				system("Pause");


			}

		}else if (menuItemNumber == 2){

			printHeader(48, '#', "| Rectangle Calculator |", 48);

			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

			cout << "Input the width of the Rectangle: ";
			cin >> param1;

			cout << "Input the height of the Rectangle: ";
			cin >> param2;

			result1 = rectangularArea(param1, param2);

			cout << "the Area of the Rectangle is: " << result1 << endl;

			system("Pause");

		}else if (menuItemNumber == 3){

			printHeader(49, '#', "| Square  Calculator |", 49);

			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

			cout << "Input the length of one side of the Square: ";
			cin >> param1;

			result1 = squareArea(param1);

			cout << "the Area of the Square is: " << result1 << endl;

			system("Pause");

		}else if (menuItemNumber == 4){

			printHeader(48, '#', "| Triangle  Calculator |", 48);

			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

			cout << "Input the Base of the Triangle: ";
			cin >> param1;

			cout << "Input the height of the Triangle: ";
			cin >> param2;

			result1 = triangularArea(param1, param2);

			cout << "the Area of the Triangle is: " << result1 << endl;

			system("Pause");

		}else if (menuItemNumber == 5){

			printHeader(48, '#', "| Cylinder  Calculator |", 48);

			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

			cout << "Input the Radius of the Cylinder: ";
			cin >> param1;

			cout << "Input the height of the Circle: ";
			cin >> param2;

			cylindricalAreaAndVolumen(param1, param2, result1, result2);

			cout << "the volume of the Cylinder is: " << result1 << endl;

			cout << "the area of the bottom side of Cylinder is: " << result2 << endl;

			system("Pause");

			}

	}

	printHeader(41, '#', "| Thanks Fore using  this Calculator |", 41);

	return 0;
}