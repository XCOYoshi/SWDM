#include <iostream>
#include <cstdlib>
#include <regex>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void printresult(double txt) { // Print outpud Buffer
	cout << "Result: ";
	cout << txt << endl;
}

double calculate(double num1, string ops, double num2) { // Handeling of the calculation
	double result{};

	// i am sorry to use a if statment i was defeatet by string || Wolte eigentlich ein switch case nehmen aber c++ kann keine strings in switch cases und ich bin zu dum f�r die conversion von string zu char
	if (ops == "+")
	{
		result = num1 + num2;
	}
	else if (ops == "-")
	{
		result = num1 - num2;
	}
	else if (ops == "*")
	{
		result = num1 * num2;
	}
	else if (ops == "/")
	{
		if (num2 != 0) {
			result = num1 / num2;
			;
		}
		else {
			cout << "cant devide with zero" << endl;
			exit(1);
		}
	}
	else
	{
		cout << "Error no Aretmetic operator" << endl;
		exit(2);
	}

	return result; // returns result to main class

}

int main(int argc, char** argv) {

	// var declaraiton
	int arraylenth = 0; // i hate my life... hat 8 stunden gebraucht das zu debugen !!!!
	double num1, num2;
	string numbers[]{ "0","0","0","0" }; // input num array
	string input; // input string
	string ops; // aretmethic string

	// input
	cout << "Calculator" << endl;
	cout << "Giebe deine Rechnung ein:\n";
	cin >> input;

	//RegEx
	regex numb("[-+]?[0-9]*\\.?[0-9]+"); //Definiert eine valiede zahl
	regex ope("(\\+|-|/|\\*|\\(|\\))"); // Diefieniert einen valieden operator
	regex exp("[-+]?[0-9]*\\.?[0-9]+(\\+|-|/|\\*|\\(|\\))"); //definiert einen valieden term

	// init match storage
	smatch numbMatch;
	smatch opeMatch;
	smatch expMatch;

	while (!regex_search(input, expMatch, exp)) {
		cout << "Ungueltiege Rechnung" << endl;
		cout << "Rechnung :\n";
		cin >> input;
	}

	do {
		if (regex_search(input, numbMatch, numb)) { // extrahiren Zahlen von dem term
			for (unsigned int j = 0; j < numbMatch.size(); ++j)

				numbers[arraylenth] = numbMatch[j];
			arraylenth++;
			input = numbMatch.suffix().str();
		}

		if (regex_search(input, opeMatch, ope)) { // extrahiren des operators von dem term

			ops = opeMatch[1];

			input = opeMatch.prefix().str() + opeMatch.suffix().str();
		}
	} while (!input.empty());


	// convertion string to double
	num1 = stod(numbers[0]);
	num2 = stod(numbers[1]);

	printresult(calculate(num1, ops, num2));

	system("Pause");

	return 0;
}