//
// ©2024 Joshua Leon Keggenhoff
//

#include "Interface.h"

void printChar(char character, int lenth, bool endline){

	for (int i = lenth; i > 0; i--)
	{
		cout << character;
	}
	if (endline == true){
		cout << endl;
	}

}

void printHeader(int charsBeforeText, char character, string text, int charsAfterText){

	system("CLS");

	printChar(character, 120, true);
	printChar(character, charsBeforeText, false);
	cout << text;
	printChar(character, charsAfterText, true);
	printChar(character, 120, true);

	cout << endl;
	cout << endl;

}

void menuItem(string designator, string info){

	cout << "	" << designator << "	" << info << endl;

}
