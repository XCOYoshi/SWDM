#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	// Var init
	double angelegteskapital = 1, zinsatz, endkapital, jahre;

	// Initiale Eingabe Anlage Kapital
	cout << "Wie Viel Geld wird angelegt in euro: ";
	cin >> angelegteskapital;
	
	while (angelegteskapital > 0){

		// Eingabe Laufzeit
		cout << "Wie Lange L\x81ft der Sparplan in jahren: ";
		cin >> jahre;
		
		// Ermittlung Zinssatz
		if (jahre < 2){
			zinsatz = 2.8;
		}else if(jahre > 2 && jahre < 10){
			zinsatz = 3.8;
		}else{
			zinsatz = 4.5;
		}

		endkapital = angelegteskapital * pow((1+ zinsatz/100), jahre);

		// Ausgabe Gewin
		cout << fixed << setprecision(2);
		cout << "Der Gewinn ist: " << endkapital << " Euro" << endl;

		// Ausgabe Zinzsatz
		cout << fixed << setprecision(1);
		cout << "Der Zinsatz betr\x84gt: " << zinsatz << "%" << endl;

		// Eingabe Anlage Kapital
		cout << "Wie Viel Geld wird angelegt in euro: ";
		cin >> angelegteskapital;

	}


	cout << "Danke F\x81r das Nutzen des Sparplan Rechners" << endl;

	system("Pause");

}