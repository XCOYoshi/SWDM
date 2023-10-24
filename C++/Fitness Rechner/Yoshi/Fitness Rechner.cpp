#include <iostream>
#include <cstdlib>

using namespace std;

double callcrabat(double rabat, double grundpreis) {
	double result;

	if (rabat != 0) {
		result = grundpreis - (grundpreis * rabat);
	}
	else {
		result = grundpreis;
	}
	return result;
}

int main()
{
	int famielienmitglieder, jahremitgliedschaft;
	double rabatt, monatlicherbeitragmitrabat, monatlichergrundpreis;

	cout << "Wie Lange Mitglied: ";
	cin >> jahremitgliedschaft;
	cout << "Wieviele Famielien Mitglieder: ";
	cin >> famielienmitglieder;
	cout << "Grundpreis pro Monat: ";
	cin >> monatlichergrundpreis;


	if (famielienmitglieder == 2) {

		rabatt = 0.05;

	}
	else if (famielienmitglieder == 3) {

		rabatt = 0.15;

	}
	else if (famielienmitglieder >= 4) {

		rabatt = 0.20;

	}
	else
	{

		rabatt = 0;

	}



	if (jahremitgliedschaft > 5) {

		rabatt = rabatt + 0.05;


		monatlicherbeitragmitrabat = callcrabat(rabatt, monatlichergrundpreis);

	}
	else {

		monatlicherbeitragmitrabat = callcrabat(rabatt, monatlichergrundpreis);

	}

	cout << "Monatlicher Preis: ";
	cout << monatlicherbeitragmitrabat << endl;


}