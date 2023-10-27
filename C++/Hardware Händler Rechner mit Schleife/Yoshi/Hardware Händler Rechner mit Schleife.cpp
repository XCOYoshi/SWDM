#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

double calcwarenwert(double preispro, int anzahl) {
	double result;

	result = preispro * anzahl;

	return result;

}

double calcrabat(int kategorie) {

	double result;

	switch (kategorie)
	{
	case 1: result = 0.10;
		break;
	case 2: result = 0.12;
		break;
	case 3: result = 0.15;
		break;
	case 4: result = 0.20;
		break;
	case 5: result = 0.30;
		break;
	default: result = 0;
		break;
	}

	return result;

}

double calcwarenwertmitrabat(double warenwet, double rabat) {
	double result;

	result = warenwet - rabat;

	return result;
}

double calcmitmwst(double warenwrtmitrabat) {
	double result;

	result = warenwrtmitrabat * 0.19;
	result = warenwrtmitrabat + result;

	return result;

}

double calcmwst(double warenwrtmitrabat) {
	double result;

	result = warenwrtmitrabat * 0.19;

	return result;

}

int main()
{
	// var
	bool again;
	int anzhalproduct, rabatkategorie;
	double preispro, warenwert, rabat, warenwrtmitrabat, rabatineuro;
	string neustart;

	// Eingabe
	cout << "Welche Rabat Kategorie ?" << endl;
	cin >> rabatkategorie;

	do {

		// Eingabe
		cout << "Wie Teuer ist das product ohnw Mwst ?" << endl;
		cin >> preispro;
		cout << "Wie oft Wird das Product Gekauft ?" << endl;
		cin >> anzhalproduct;


		// Verarbeitung
		rabat = calcrabat(rabatkategorie);
		warenwert = calcwarenwert(preispro, anzhalproduct);
		rabatineuro = warenwert * rabat;
		warenwrtmitrabat = calcwarenwertmitrabat(warenwert, rabatineuro);

		// Ausgabe
		cout << fixed << setprecision(2);
		cout << "Der Wahren Wert Ohne Rabat und ohne Mwst: " << warenwert << endl;
		cout << "Mwst in Euro: " << calcmwst(warenwrtmitrabat) << endl;
		cout << "Der Wahren Wert Ohne Rabat und mit Mwst: " << calcmitmwst(warenwert) << endl;

		cout << "Rabat in Euro: " << rabatineuro << endl;

		cout << "Der Wahren Wert Mit Rabat und ohne Mwst: " << warenwrtmitrabat << endl;
		cout << "Mwst in Euro: " << calcmwst(warenwrtmitrabat) << endl;
		cout << "Der Wahren Wert Mit Rabat und mit Mwst: " << calcmitmwst(warenwrtmitrabat) << endl;

		cout << "Nochmal mal mit der seilben kategorie rechnen [True, Y, Yes, Ja]" << endl;
		cin >> neustart;

		if (neustart == "true" || neustart == "y" || neustart == "yes" || neustart == "ja" || neustart == "True" || neustart == "Y" || neustart == "Yes" || neustart == "Ja")
		{
			again = true;
		}
		else {
			again = false;
		};

	} while (again);

	system("Pause");
}