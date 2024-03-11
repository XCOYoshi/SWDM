//
// ©2024 Joshua Leon Keggenhoff
//

#ifndef Interface
#define Interface

#include <iostream>
#include <cstdlib>
#include <iomanip> 

using namespace std;

/**
* @name printChar
* @details Prints a Custom lenth row of a char
* 
* @param[in] character the char to be output
* @param[in] lenth the lenth of the line
* @param[in] endline if a endline is printed
*/
void printChar(char character, int lenth, bool endline);

/**
* @name printHeader
* @details Clears the terminal and prints a header
* 
* @param[in] charsBeforeText the number of characters to be printed before the text
* @param[in] character the chars to be printed
* @param[in] text text to be printed
* @param[in] charsAfterText the number of characters to be printed after the text
*/
void printHeader(int charsBeforeText, char character, string text, int charsAfterText);

/**
* @name menuItem
* @details Print a Menu item
* 
* @param[in] designator the designator of the menu item to print
* @param[in] info the message to be printed
*/
void menuItem(string designator, string info);

#endif