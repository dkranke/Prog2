#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << "Generiere 'ausgabe.txt'... ";

    // Dateistreams anlegen und �ffnen
    ifstream input("eingabe.txt");
    ofstream output("ausgabe.txt");

    // Pr�fen ob die Dateistreams korrekt ge�ffnet worden sind (sonst gebe einen Fehler aus und beende das Programm)
    if (!input || !output) {
        cout << "ERR" << endl << "Dateifehler" << endl;
        return -1;
    }

    // Die ben�tigten Variablen f�r die Spalten anlegen
    int zeile = 1;
    int ganzzahl;
    double gleitkomma;
    string text;

    // Lese einen Datensatz ein bis keiner mehr vorhanden ist
    while(input >> ganzzahl >> gleitkomma >> text) {
        // Gebe die Zeile formatiert aus
        output << zeile << ". | ";
        output << hex << setw(4) << setfill('0') << ganzzahl << " | ";
        output << dec << setprecision(6) << gleitkomma << " | ";
        output << setw(15) << setfill('-') << text << endl;

        // Inkrementiere die Zeilennummer
        zeile++;
    }

    // Leere den Ausgabepuffer und schlie�e die Dateien
    output.flush();
    input.close();
    output.close();

    cout << "OK" << endl;
}

// Domenik Kranke <domenik@kranke.de>