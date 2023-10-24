#include <iostream>
#include <cstdlib>

using namespace std;

double calcwarenwert(double preispro, int anzahl) {
	double result;

	result = preispro * anzahl;
	cout << "Der Waren Wert ohne rabat ist: ";
	cout << result << endl;

	return result;

}

double calcrabat(int antahl, double warenwert) {

	double result;

	if (antahl > 10) {
		result = warenwert * 0.05;

		cout << "der Rabat betraegt: " << result << endl;
		return result;
	}
	else {
		result = 0;
		cout << "kein Rabat";
		return result;
	}
}

double calcwarenwertmitrabat(double warenwet, double rabat) {
	double result;

	result = warenwet - rabat;
	cout << "Der Waren Wert mit rabat ist: ";
	cout << result << endl;

	return result;
}

double calcmitmwst(double warenwrtmitrabat) {
	double result, result2;

	result = warenwrtmitrabat * 0.19;
	cout << "Die Mwst betraegt: " << result << endl;
	result2 = warenwrtmitrabat + result;

	return result2;

}

int main()
{
	// var
	int anzalmause;
	double preispro, warenwert, rabat, warenwrtmitrabat;


	// input stage
	cout << "Wie viele mause" << endl;
	cin >> anzalmause;
	cout << "wie teuer sind die maeuse ohnw Mwst " << endl;
	cin >> preispro;

	// Verarbeitung

	cout << "##################################" << endl;
	cout << "############Rechnung##############" << endl;
	warenwert = calcwarenwert(preispro, anzalmause);
	rabat = calcrabat(anzalmause, warenwert);
	warenwrtmitrabat = calcwarenwertmitrabat(warenwert, rabat);
	cout << "Gesamt Preis mit Mwst: " << calcmitmwst(warenwrtmitrabat) << endl;
	cout << "##################################" << endl;
	cout << "####Danke Für Ihren Einkauf#######" << endl;
	cout << "##################################" << endl;

	system("Pause");
}
