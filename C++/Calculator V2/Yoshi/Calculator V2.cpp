#include <iostream>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void printresult(double txt) { // Print outpud Buffer
	cout << "Result: ";
	cout << txt << endl;
}

double calculate(double num1, char ops, double num2) { // Handeling of the calculation
	double result{};

	switch (ops) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 != 0) {
			result = num1 / num2;
			;
		}
		else {
			cout << "cant devide with zero" << endl;
			exit(1);
		}
		break;
	default:
		cout << "Error no Aretmetic operator" << endl;
	};

	return result; // returns result to main class

}

int main(int argc, char** argv) {

	// var declaraiton
	double num1, num2; // operators
	char ops; // aretmetic operator


	// input
	cout << "Calculator" << endl;

	cout << "Giebe deinen ersten Operator ein: ";
	cin >> num1;
	cout << "Giebe deinen Aretmetischen Operator [+|-|*|/] ein : ";
	cin >> ops;
	cout << "Giebe deinen zweiten Operator ein: ";
	cin >> num2;

	printresult(calculate(num1, ops, num2));

	system("Pause");

	return 0;
}