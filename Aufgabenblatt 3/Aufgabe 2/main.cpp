#include <iostream>

using namespace std;

int eingabeanalyse(double &min, double &max, double &durchschnitt) {
    // R�ckgabewerte zur�cksetzen
    min = 0;
    max = 0;
    durchschnitt = 0;

    // Ben�tigte Variablen deklarieren
    int anzahl = 0;
    int eingabe;

    // Wiederhole bis -1 eingeben wurden
    while (true) {
        // Wert einlesen
        cout << "Zahl zwischen -100 und 100, -1 zum terminieren: ";
        cin >> eingabe;

        // Falls der Wert = -1, beende das Programm
        if (eingabe == -1) {
            return anzahl;
        }

        // Falls der Wert g�ltig ist
        if (eingabe >= -100 && eingabe <= 100) {
            // Falls der Wert kleiner als das Minimum ist oder der erste Wert ist
            if (eingabe < min || anzahl == 0) {
                // Setze das Minimum
                min = eingabe;
            }
            // Falls der Wert kleiner als das Maxium ist oder der erste Wert ist
            if (eingabe > max || anzahl == 0) {
                // Setze das Maximum
                max = eingabe;
            }
            // Den Durchschnitt neu berechnen
            durchschnitt = (anzahl * durchschnitt + eingabe) / (anzahl + 1);
            // Die Anzahl der Werte erh�hen
            anzahl++;
        }
    }
}

int main()
{
    // Deklarieren der R�ckgabewerte
    double min;
    double max;
    double durchschnitt;
    double anzahl;

    // Funktion ausf�hren
    anzahl = eingabeanalyse(min, max, durchschnitt);

    // Ergebnis ausgeben
    cout << "Anzahl: " << anzahl;
    cout << ", Min: " << min;
    cout << ", Max: " << max;
    cout << " und Durchschnitt: " << durchschnitt << endl;

    return 0;
}

// Domenik Kranke <domenik@kranke.de>