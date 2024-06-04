#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

constexpr double pi = 3.14159265358979323846;

// Funktion zur Berechnung der Fläche eines Rechtecks
double flaecheRechteck(double laenge, double breite) {
    return laenge * breite;
}

// Funktion zur Berechnung der Fläche eines Quadrats
double flaecheQuadrat(double seite) {
    return seite * seite;
}

// Funktion zur Berechnung der Fläche eines Dreiecks
double flaecheDreieck(double grundflaeche, double hoehe) {
    return 0.5 * grundflaeche * hoehe;
}

// Funktion zur Berechnung der Fläche eines Kreises
double flaecheKreis(double radius) {
    return pi * radius * radius;
}

// Funktion zur Berechnung der Fläche und des Volumens eines Zylinders
void berechnungZylinder(double radius, double hoehe, double& flaeche, double& volumen) {
    flaeche = 2 * pi * radius * (radius + hoehe);
    volumen = pi * radius * radius * hoehe;
}

// Hauptmenü anzeigen
void zeigeMenue() {
    cout << "Waehlen Sie die Flächenberechnung:" << endl;
    cout << "1. Rechteck" << endl;
    cout << "2. Quadrat" << endl;
    cout << "3. Dreieck" << endl;
    cout << "4. Kreis" << endl;
    cout << "5. Zylinder" << endl;
    cout << "0. Programm beenden" << endl;
}

int main() {
    int wahl;
    do {
        zeigeMenue();
        cin >> wahl;
        switch (wahl) {
        case 1: {
            double laenge, breite;
            cout << "Geben Sie die Laenge des Rechtecks ein: ";
            cin >> laenge;
            cout << "Geben Sie die Breite des Rechtecks ein: ";
            cin >> breite;
            cout << "Die Flaeche des Rechtecks betraegt: " << flaecheRechteck(laenge, breite) << endl;
            break;
        }
        case 2: {
            double seite;
            cout << "Geben Sie die Seitenlaenge des Quadrats ein: ";
            cin >> seite;
            cout << "Die Flaeche des Quadrats betraegt: " << flaecheQuadrat(seite) << endl;
            break;
        }
        case 3: {
            double grundflaeche, hoehe;
            cout << "Geben Sie die Grundflaeche des Dreiecks ein: ";
            cin >> grundflaeche;
            cout << "Geben Sie die Hoehe des Dreiecks ein: ";
            cin >> hoehe;
            cout << "Die Flaeche des Dreiecks betraegt: " << flaecheDreieck(grundflaeche, hoehe) << endl;
            break;
        }
        case 4: {
            double radius;
            cout << "Geben Sie den Radius des Kreises ein: ";
            cin >> radius;
            cout << "Die Flaeche des Kreises betraegt: " << flaecheKreis(radius) << endl;
            break;
        }
        case 5: {
            double radius, hoehe, flaeche, volumen;
            cout << "Geben Sie den Radius des Zylinders ein: ";
            cin >> radius;
            cout << "Geben Sie die Hoehe des Zylinders ein: ";
            cin >> hoehe;
            berechnungZylinder(radius, hoehe, flaeche, volumen);
            cout << "Die Flaeche des Zylinders betraegt: " << flaeche << endl;
            cout << "Das Volumen des Zylinders betraegt: " << volumen << endl;
            break;
        }
        case 0:
            cout << "Programm beendet." << endl;
            break;
        default:
            cout << "Ungueltige Auswahl. Bitte versuchen Sie es erneut." << endl;
        }
        if (wahl != 0) {
            cout << "Moechten Sie eine neue Berechnung durchfuehren? (ja = 1 / nein = 0): ";
            cin >> wahl;
            if (wahl == 0) wahl = 0;
            else wahl = -1; // Damit das Menü erneut angezeigt wird
        }
    } while (wahl != 0);
    return 0;
}
