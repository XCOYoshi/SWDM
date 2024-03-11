#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	const int million = 1000000;
	
	int jahre = 0;
	double zinsen, startkapital, endkapital;
	
	cout << "Startkapital: ";
	cin >> startkapital;
	cout << endl << "Zinssatz (%): ";
	cin >> zinsen;
	cout << endl;
	
	endkapital = startkapital;
	
	while(endkapital < million) {
		jahre++;
		endkapital *= (zinsen / 100) + 1;
	}
	
	cout << "Bei einem Zinssatz von " << zinsen << "% und einem Startkapital von " << startkapital 
			<< " Euro dauert es " << jahre << " Jahre um eine Million zu erreichen." << endl;
	
	system("pause");
	return 0;
}
