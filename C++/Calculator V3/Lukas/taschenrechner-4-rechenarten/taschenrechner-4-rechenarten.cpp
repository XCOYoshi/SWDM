#include <iostream>

using namespace std;

void printMenu() {
    cout << "Taschenrechner\n";
    cout << "Bitte waehlen Sie eine Operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraktion (-)\n";
    cout << "3. Multiplikation (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Beenden\n";
    cout << "Ihre Wahl: ";
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        printMenu();
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Geben Sie die erste Zahl ein: ";
            cin >> num1;
            cout << "Geben Sie die zweite Zahl ein: ";
            cin >> num2;
        }

        switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Ergebnis: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Ergebnis: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Ergebnis: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Ergebnis: " << num1 << " / " << num2 << " = " << result << endl;
            }
            else {
                cout << "Fehler: Division durch Null ist nicht erlaubt." << endl;
            }
            break;
        case 5:
            cout << "Beenden...\n";
            break;
        default:
            cout << "Ungueltige Auswahl. Bitte waehlen Sie eine gueltige Option." << endl;
            break;
        }
        cout << endl;
    } while (choice != 5);

    return 0;
}
