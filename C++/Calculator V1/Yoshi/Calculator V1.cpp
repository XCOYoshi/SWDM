#include <iostream>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	// var declaraiton
	int num1, num2; // oberators
	char ops; // aretmetic operator
	int result; // result of math



	// code
	cout << "Calculator" << endl;

	cout << "First Operator" << endl;
	cin >> num1;
	cout << "Aretmetic Operator" << endl;
	cin >> ops;
	cout << "Second Operator" << endl;
	cin >> num2;

	switch (ops) {
	case '+':
		result = num1 + num2;
		cout << "Result:" << endl;
		cout << result << endl;
		break;
	case '-':
		result = num1 - num2;
		cout << "Result:" << endl;
		cout << result << endl;
		break;
	case '*':
		result = num1 * num2;
		cout << "Result:" << endl;
		cout << result << endl;
		break;
	case '/':
		if (num1 > 0 && num2 > 0) {
			result = num1 / num2;
			cout << "Result:" << endl;
			cout << result << endl;
		}
		else {
			cout << "cant devide with zero" << endl;
		}
		break;
	default:
		cout << "Error no Aretmetic operator" << endl;
	}

	system("Pause");

	return 0;
}
