#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
  // Var
	double angelegteskapital, zinsatz;
	int jahre = 0;

 // Initial Eingabe
	cout << "Wie Viel wird angelegt: ";
	cin >> angelegteskapital;
	cout << "Wie Viel zinsen werden ausgegeben: ";
	cin >> zinsatz;

	while (angelegteskapital < 1000000.00)
	{
		angelegteskapital += (angelegteskapital * zinsatz)/100;
		
		
		jahre = jahre + 1;
	}

	cout << fixed << setprecision(2);
	cout << "Die 1 Millionen werden nach: " << jahre << " Jahren Ereicht" << endl;
	cout << "Der dann erichte Kapital ist " << angelegteskapital << " Euro" << endl;


 
}