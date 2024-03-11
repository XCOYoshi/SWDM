#include <iostream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	while(true) {
		
		double startkapital, zinssatz, kapital;
		int jahre;
		
		cout << "Startkapital: ";
		cin >> startkapital;
		
		if(startkapital <= 0) {
			return 0;
		}
		
		cout << "Jahre: ";
		cin >> jahre;
		
		if(jahre > 9) {
			zinssatz = 1.045;
		}
		else if (jahre > 2) {
			zinssatz = 1.038;
		}
		else {
			zinssatz = 1.028;
		}
		
		kapital = startkapital;
		
		for(int i = 0; i<jahre; i++) {
			kapital *= zinssatz;
		}
		
		cout.setf(ios::fixed);
		cout << setprecision(2) << "Der Endbetrag ist " << kapital << endl;
		
		system("pause");
		system("cls");
		
	}
	
	return 0;
}
