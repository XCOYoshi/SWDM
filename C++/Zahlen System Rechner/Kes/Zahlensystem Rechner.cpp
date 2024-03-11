#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

// convert a given number into a single digit
// i.e. 0-9 as normal, 10=A, 11=B, etc.
char digitOfValue(int value) {
	// if number is <10 simply convert it to an int
	if (value < 10) {
		return (char)(value + 48); // 48 is 0 in ASCII
	}

	// otherwise convert it to an uppercase letter
	// A is 65 in ASCII, we only start at 10, so subtract that
	// 65 - 10 = 55
	return (char)(value + 55);
}

// convert a digit into its corresponding numeric value
// i.e. 0-9 as normal, A=10, B=11, etc.
int valueOfDigit(char digit) {
	int digitInteger = (int)digit;

	// 9 is 57 in ASCII, so just convert it to an int
	if (digitInteger < 58) {
		return digitInteger - 48; // 48 is 0 in ASCII
	}

	// A is 65 in ASCII, we only start at 10, so subtract that
	// 65 - 10 = 55
	return digitInteger - 55;
}

// every digit must be valid in the given base
// returns true if every digit is valid. 
// returns false if the digit is too large or otherwise invalid
bool validateNumber(string number, int base) {
	int maxValue = base - 1;

	for (int i = 0; i < number.size(); i++) {

		// convert the digit to an int, then check if it's valid
		int value = valueOfDigit(number[i]);
		if (value > maxValue || value < 0) {
			return false;
		}

	}

	return true;
}

// base must be greater than 1
// and smaller than 37 (35/Z is the highest digit supported)
bool validateBase(int base) {
	return base > 1 && base < 37;
}

// convert a number in a given base to base ten
// number: the number to convert
// base: base (as a base ten integer) the given number is in
// returns: the given number converted to base ten
int convertToBaseTen(string number, int base) {
	int result = 0;
	int digit, digitPosition, digitValue;

	// conversion
	// for each digit in the input number, 
	// take the digit multiplied by the base raised to its position
	// and add it to the result
	for (int i = 0; i < number.size(); i++) {
		digit = valueOfDigit(number[i]);
		digitPosition = number.size() - i - 1;
		digitValue = pow(base, digitPosition);

		// overflow handling
		// when the number overflows it turns negative so it will be smaller than before
		if (result + (digit * digitValue) < result) {
			return -1;
		}

		result += digit * digitValue;
	}

	return result;
}

// convert a base ten number to a given base
// number: the number to convert (base ten)
// base: base (as a base ten integer) to convert to
// returns: the number converted to a given base
string convertToBase(int number, int base) {
	string result = "";
	int digits[31]; //we use a 32-bit integer, so we won't need more than 31 digits anyways
	int i = 0;

	// conversion
	do {
		digits[i] = number % base;
		number /= base;
		i++;
	} while (number > 0);

	// convert the array to a string in reverse order
	for (int j = i - 1; j >= 0; j--) {
		result += digitOfValue(digits[j]);
	}
	return result;
}

// c++ includes no simple way to parse an int from a string (that i could find)
// so we just assume it's a base ten string, validate it and call the conversion function
int parseInt(string input) {
	if (!validateNumber(input, 10)) {
		return -1;
	}

	return convertToBaseTen(input, 10);
}

// ask the user if they want to run the converter again
bool getRepeat() {
	string repeatInput;

	cout << "Noch einmal? [y/n]";
	cin >> repeatInput;

	return repeatInput == "y" || repeatInput == "Y";
}

int main(int argc, char** argv) {

	do {
		system("cls");

		string number, numberInNewBase, baseString, newBaseString;
		int base, newBase, numberInBaseTen;
		bool negative = false;

		/* INPUT */

		cout << "--------------------------------" << endl;
		cout << "|     Zahlensystem Rechner     |" << endl;
		cout << "--------------------------------" << endl << endl;
		cout << "Bitte gib eine Zahl ein. ";
		cin >> number;
		cout << "In welcher Basis ist diese Zahl? (2-36) ";
		cin >> baseString;
		cout << "In welche Basis soll sie umgewandelt werden? (2-36) ";
		cin >> newBaseString;
		cout << endl << "--------------------------------" << endl;

		// parse the bases
		base = parseInt(baseString);
		newBase = parseInt(newBaseString);

		// just treat negative numbers the same as postive; 
		// remove sign before conversion, add back afterwards
		if (number[0] == '-') {
			negative = true;
			number = number.substr(1, number.length() - 1);
		}

		/* VALIDATION */

		//validate both input and target base
		if (!(validateBase(base) && validateBase(newBase))) {
			cout << "Die Basis muss zwischen zwei und sechsunddreißig liegen." << endl << endl;
			continue;
		}

		//we use a 32-bit number, so we can at most convert 31 digits
		if (number.length() > 31) {
			cout << "Die Zahl darf maximal 31 Stellen haben!" << endl << endl;
			continue;
		}

		//check if the number is valid in the input base
		if (!validateNumber(number, base)) {
			cout << "Die angegebene Zahl ist in diesem Zahlensystem ungültig!" << endl << endl;
			continue;
		}

		/* CONVERSION (and more validation) */

		//first convert any input to base ten
		numberInBaseTen = convertToBaseTen(number, base);

		//convertToBaseTen returns -1 if the number overflows
		if (numberInBaseTen == -1)
		{
			//output an error message with the maximum value in the input base
			cout << "Die Zahl kann in dieser Basis maximal " << convertToBase(2147483647, base) << " sein!" << endl << endl;
			continue;
		}

		//then convert to target base
		numberInNewBase = convertToBase(numberInBaseTen, newBase);

		if (negative) { //if input was negative add minus sign back
			numberInNewBase = '-' + numberInNewBase;
		}

		/* OUTPUT RESULT */

		cout << "Ergebnis: " << numberInNewBase << endl << endl;

	} while (getRepeat());

	return 0;
}

