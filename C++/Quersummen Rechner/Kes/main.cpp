#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	do {
		int number, sum = 0;
		
		cout << "Number: ";
		cin >> number;
		
		if(number<1) {
			return 0;
		}
		
		while (number > 0) {
			sum += number%10;
			number /= 10;
		}
		
		cout << "Sum: " << sum << endl;
		
		system("pause");
		system("cls");
	} while(true);
	
	return 0;
}
