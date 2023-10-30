#include <iostream>

using namespace std;
int main()
{
	int number, input, crosssum = 0;
	
	cout << "aus Welcher tahl sol die Quersumme Gezogen Werden: ";
	cin >> input;

	number = input;
	
	while (number > 0) {
		crosssum += number % 10;
		number /= 10;
	};

	cout << "Die quersumme von " << input << " ist: " << crosssum << endl;
	
	system("PAUSE");
}