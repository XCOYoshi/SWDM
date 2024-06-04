#include <iostream>
#include <intrin.h>
#include <cstdint>
#include <iomanip>
#include <vector>
#include <random>

using namespace std;

bool get_random_number(unsigned short& randomValue) {
    return _rdrand16_step(&randomValue);
}

unsigned int generate_random_in_range(unsigned int min, unsigned int max) {
    unsigned int range = max - min + 1;
    unsigned short randNum;
    unsigned int scaledRandNum;

    if (get_random_number(randNum)) {
        if (randNum < UINT16_MAX - (UINT16_MAX % range)) {
            scaledRandNum = min + (randNum % range);
            return scaledRandNum;
        }
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);

}

bool is_number_in_array(unsigned int arr[], int n, unsigned int number) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == number) {
            return true;
        }
    }
    return false;
}

void bubbleSort(unsigned int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                unsigned int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void print_ticket(unsigned int** numbers, int num_spiele, int option, int wochen, double preis) {
    cout << "---------------------------------------------\n";
    cout << "|       LOTTO 6 aus 49 (Normalschein)       |\n";
    cout << "|-------------------------------------------|\n";
    for (int j = 0; j < num_spiele; ++j) {
        cout << "|   SPIEL " << setw(4) << j + 1 << "  | ";
        for (int i = 0; i < 6; ++i) {
            cout << setw(3) << numbers[j][i] << " ";
        }
        cout << " |\n";
        cout << "|-------------------------------------------|\n";
    }
    cout << "|   Ziehungstage:                           |\n";
    cout << "|       [" << (option == 2 ? "x" : " ") << "] Mittwoch                        |\n";
    cout << "|       [" << (option == 1 ? "x" : " ") << "] Samstag                         |\n";
    cout << "|       [" << (option == 3 ? "x" : " ") << "] Beide                           |\n";
    cout << "|-------------------------------------------|\n";
    cout << "|   Wochen:                                 |\n";
    for (int i = 1; i <= 5; ++i) {
        cout << "|       [" << (wochen == i ? "x" : " ") << "] " << i << " Woche" << (i > 1 ? "n" : " ") << "                        |\n";
    }
    cout << "|-------------------------------------------|\n";
    cout << "|   Gesamtkosten: " << fixed << setprecision(2) << preis << " Euro                |\n";
    cout << "---------------------------------------------\n";
}

int main() {
    char wiederholen;

    do {
        int num_spiele, wochen, option;
        cout << "Geben Sie die Anzahl der Spiele ein: ";
        cin >> num_spiele;

        cout << "Waehlen Sie einen Tag (1: Samstag, 2: Mittwoch, 3: Beide): ";
        cin >> option;

        cout << "Geben Sie die Anzahl der Wochen (1-5) ein: ";
        cin >> wochen;

        unsigned int** numbers = new unsigned int* [num_spiele];
        for (int i = 0; i < num_spiele; ++i) {
            numbers[i] = new unsigned int[6];
        }

        for (int j = 0; j < num_spiele; ++j) {
            unsigned int currentSet[6] = { 0 };
            int currentSetSize = 0;
            for (int i = 0; i < 6; ) {
                unsigned int num = generate_random_in_range(1, 49);

                if (!is_number_in_array(currentSet, currentSetSize, num)) {
                    currentSet[currentSetSize++] = num;
                    numbers[j][i] = num;
                    i++;
                }
            }
            bubbleSort(numbers[j], 6);
        }

        double preis = num_spiele * wochen * ((option == 3) ? 2 : 1) * 1.2;

        print_ticket(numbers, num_spiele, option, wochen, preis);

        cout << "Neue Zahlen generieren? (J/N): ";
        cin >> wiederholen;

        for (int i = 0; i < num_spiele; ++i) {
            delete[] numbers[i];
        }
        delete[] numbers;

    } while (wiederholen == 'J' || wiederholen == 'j');

    return 0;
}
