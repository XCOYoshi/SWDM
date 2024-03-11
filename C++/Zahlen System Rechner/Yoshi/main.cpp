#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>
#include <regex>

using namespace std;

//Decimal to Binär Conversion
string decimalToBinaer(int inputDecimal) {

    string output;

    bool binaryNumber[32];
    int lenth = 0;

    while (inputDecimal > 0) {

        binaryNumber[lenth] = inputDecimal % 2; // get Binär Wärt
        inputDecimal = inputDecimal / 2;
        lenth++; // Increase index
    }

    for (int i = lenth - 1; i >= 0; i--) { // Convert Array to string
        if (binaryNumber[i]) {
            output += '1';
        }
        else {
            output += '0';
        }
    }

    return output;

}

//Decimal to Hex Conversion
string decimalToHex(int decimalNumber) {

    string output;

    int lenth = 0;
    int hexNum[16];

    while (decimalNumber > 0) {

        hexNum[lenth] = decimalNumber % 16; // Conversion from Decimal To Hex Value
        decimalNumber = decimalNumber / 16;
        lenth++; // Increase index

    }

    for (int pos = lenth - 1; pos >= 0; pos--) { // assigning the hex value to the decimal values werte zu den Hex Buchstaben

        switch (hexNum[pos])
        {
            case 10:
                output += 'A';
                break;

            case 11:
                output += 'B';
                break;

            case 12:
                output += 'C';
                break;

            case 13:
                output += 'D';
                break;

            case 14:
                output += 'E';
                break;

            case 15:
                output += 'F';
                break;

            default: output += to_string(hexNum[pos]);
                break;

        }

    }

    return output;

}

string binaerToHex(string binaerString) {

    binaerString = string(binaerString.length() % 4 ? 4 - binaerString.length() % 4 : 0, '0') + binaerString; // making sure that the binär string is always dividable by 4

    unordered_map<string, char> hexadecimal_dictionary = { //map to assign hex values to Binär values
            {"0000",'0'},
            {"0001",'1'},
            {"0010",'2'},
            {"0011",'3'},
            {"0100",'4'},
            {"0101",'5'},
            {"0110",'6'},
            {"0111",'7'},
            {"1000",'8'},
            {"1001",'9'},
            {"1010",'A'},
            {"1011",'B'},
            {"1100",'C'},
            {"1101",'D'},
            {"1110",'E'},
            {"1111",'F'},
    };

    string hexDecimal;

    for (size_t i = 0; i < binaerString.length(); i += 4) { // assigning hex values to Binär values
        string group = binaerString.substr(i, 4); // Separating a 4 bit group out
        hexDecimal += hexadecimal_dictionary[group]; // pushing the assigned hex number to the string
    }

    return hexDecimal;

}

string hexToBinaer(const string& hexString) {

    unordered_map<string, string> binaer_dictionary = { // Map to assign Binär values to hex values
            {"0", "0000"},
            {"1", "0001"},
            {"2", "0010"},
            {"3", "0011"},
            {"4", "0100"},
            {"5", "0101"},
            {"6", "0110"},
            {"7", "0111"},
            {"8", "1000"},
            {"9", "1001"},
            {"A", "1010"},
            {"B", "1011"},
            {"C", "1100"},
            {"D", "1101"},
            {"E", "1110"},
            {"F", "1111"},
    };

    string binaerString;

    for (size_t i = 0; i < hexString.length(); i++) { // assigning Binär values to hex values
        string group = hexString.substr(i, 1); // separating out a single char of the string
        binaerString += binaer_dictionary[group]; // pushing the assigned binär number to the string
    }

    return binaerString;

}

int valueOfChar(char digit) { // convert a digit into its corresponding decimal value i.e. 0-9 as normal, A=10, B=11, etc.
    if ((int)(digit) < 58) {
        return (int)(digit)-48;
    }
    return (int)(digit)-55;
}


string binaerToDecimal(string binaerString){ // binär to decimal conversion

    int result = 0;
    int digit, digitPosition, digitValue;

    for(int i = 0; i<binaerString.size(); i++) {
        digit             = valueOfChar(binaerString[i]); // getting the value of the char
        digitPosition     = binaerString.size()- i - 1; // getting value at string position
        digitValue         = pow(2, digitPosition); // calculating digit value

        result += digit * digitValue; // calculating result
    }

    return to_string( result ); // returning result as string

}

// Decimal Input
int decimalInput(){ // input of decimal number

    string input;
    bool matched;
    const regex matche("^[0-9]+$"); // Regex to Validate hex String

    do {

        cout << "Input a Decimal Number: ";
        cin >> input;

        matched = regex_match(input, matche);

        if (!matched){
            cout << "Invalid a Decimal Number" << endl;
        }
    }while(!matched); // Rejects None hex numbers

    return stoi(input);

}

string binaerInput(){ // input of a Binär number

    string input;
    bool matched;
    const basic_regex<char> matche("[01]+"); // Regex to Validate binär String

    do {

        cout << "Input a Bin\x84r Number: ";
        cin >> input;

        matched = regex_match(input, matche);

        if (!matched){
            cout << "not a Bin\x84r Number" << endl;
        }
    }while(!matched); // Rejects non binär numbers

    return input;

}

string hexInput(){ // input of a hex value

    string input;
    bool matched;
    const regex matche("^[0-9A-F]+$"); // Regex to Validate hex String

    do {

        cout << "Input a hex Number in Capital Letters: ";
        cin >> input;

        matched = regex_match(input, matche);

        if (!matched){
            cout << "not a hex Number" << endl;
        }
    }while(!matched); // Rejects None hex numbers

    return input;

}

// Print output
void output(const string& message, const string& result) { // output function to output Result

    cout << message << result << endl;
}

int main() {

    int decimalInputBuffer;
    string convertTo, convertFrom, binaerInputBuffer, hexInputBuffer, outputBuffer;
    bool run = true, input1 = false, input2 = false, good;

    while (run) { // Main Program Loop
        good = false;

        do{ // Input of the number system of the starting number
        cout << "Starting number system? choose between: Decimal,Bin\x84r,Hex,Decimal,help,exit" << endl;
        cin >> convertFrom;

        if (convertFrom == "exit"){
            run = false;
            break;
        }else if (convertFrom == "help" || convertFrom == "?") { // help to help the user

            cout << "Decimal or D To Calculate From Decimal" << endl;
            cout << "Bin\x84r or B To Calculate from Bin\x84r" << endl;
            cout << "Hex or H To Calculate from hexadecimal" << endl;
            cout << "help or ? Shows this command" << endl;
            cout << "exit exits the program" << endl;

            input1 = true;

        }else{

            input1 = false;

        }} while (input1);

        if(convertFrom == "exit"){ // Stop the program if exit is put in
            break;
        }

        do{ // Input of the number system of the target number

            cout << "target number system? choose between: Bin\x84r,Hex,Decimal,help,exit" << endl;
            cin >> convertTo;

            if (convertTo == "exit"){

                run = false;
                break;

            }else if (convertTo == "help" || convertTo == "?") { // help to help the idiot user

                cout << "Decimal or D To Calculate to Decimal" << endl;
                cout << "Bin\x84r or B To Calculate to Bin\x84r" << endl;
                cout << "Hex or H To Calculate to hexadecimal" << endl;
                cout << "help or ? Shows this command" << endl;
                cout << "exit exits the program" << endl;

                input2 = true;

            }else{

                input2 = false;

            }} while (input2);

        if(convertTo == "exit"){ // Stop the program if exit is put in
            break;
        }


        if ((convertTo == "Bin\x84r" || convertTo == "B") && (convertFrom == "Decimal" || convertFrom == "D")) { // Conversion from Decimal to Binär

            good = true;

            decimalInputBuffer = decimalInput();

            outputBuffer = decimalToBinaer(decimalInputBuffer);

            output("Your Bin\x84r number is: ", outputBuffer);


        }
        if ((convertTo == "Bin\x84r" || convertTo == "B") && (convertFrom == "Hex" || convertFrom == "H")) { // Conversion from hex to Binär

            good = true;

            hexInputBuffer = hexInput();

            outputBuffer = hexToBinaer(hexInputBuffer);

            output("Your Bin\x84r number is: ", outputBuffer);

        }
        if ((convertTo == "Hex" || convertTo == "H") && (convertFrom == "Decimal" || convertFrom == "D")) { // Conversion from Decimal to hex

            good = true;

            decimalInputBuffer = decimalInput();

            outputBuffer = decimalToHex(decimalInputBuffer);

            output("Your hex number is: ", outputBuffer);

        }
        if ((convertTo == "Hex" || convertTo == "H") && (convertFrom == "Bin\x84r" || convertFrom == "B")) { // Conversion from Binär to hex

            good = true;

            binaerInputBuffer = binaerInput();

            outputBuffer = binaerToHex(binaerInputBuffer);

            output("Your hex number is: ", outputBuffer);

        }
        if ((convertTo == "Decimal" || convertTo == "D") && (convertFrom == "Hex" || convertFrom == "H")) { // Conversion from hex to Decimal

            good = true;

            hexInputBuffer = hexInput();

            outputBuffer = binaerToDecimal(hexToBinaer(hexInputBuffer));

            output("Your Dezimal number is: ", outputBuffer);

        }
        if ((convertTo == "Decimal" || convertTo == "D") && (convertFrom == "Bin\x84r" || convertFrom == "B")) { // Conversion from Binär to Decimal

            good = true;

            binaerInputBuffer = binaerInput();

            outputBuffer = binaerToDecimal(binaerInputBuffer);

            output("Your Dezimal number is: ", outputBuffer);

        }
        if(good != true) {
            cout << "Invalid Input" << endl;
        }
    }

    cout << "Exiting Program" << endl;

    cout << "Thanks for using my number system calculator" << endl;

    system("Pause");

    return 0;

}