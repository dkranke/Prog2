#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Aufgabe 1.1
bool isFibonacci(int x) {
    // Falls die Zahl in einem ung�ltigen Bereich ist gebe FALSCH zur�ck
    if (x < 1) {
        return false;
    }

    // Berechne die Fibonacci-Sequence, bis die Zahl theoretisch erreicht ist
    // Quelle: https://en.wikipedia.org/wiki/Fibonacci_number#Recognizing_Fibonacci_numbers
    int n = 1;
    int n_1 = 1;
    while (n < x) {
        n += n_1;
        n_1 = n - n_1;
    }

    // Pr�fe ob x teil der Fibonacci-Sequence ist
    return n == x;
}

// Aufgabe 1.2
float round(float x, int n) {
    // Bedingungen der Parameter pr�fen
    if  (x < 0 || x > 1000 || n < 1 || n > 5) {
        return -1;
    }

    // Berechne den Wert zum Multiplizieren und Teilen (10^n)
    float multiplier = 1;
    for (int i = 0; i < n; i++) {
        multiplier *= 10;
    }

    // Multipliziere x mit 1n^n*10 und caste in einen int (Nachkommastellen l�schen)
    int ix = (int) (x * multiplier * 10);

    // Pr�fe ob aufgerundet werden muss
    float fx = ix / 10.0;
    if (fx - (int) (ix / 10) > 0.5) {
        ix += 10;
    }
    ix /= 10;

    // Teile die Zahl wieder durch den Multiplier und gebe den Wert zur�ck
    return ix / multiplier;
}

// Aufgabe 1.3
void sumAndDiff(int x, int y, int &sum, int &diff) {
    sum = x + y;
    if (x > y) {
        diff = x - y;
    } else {
        diff = y - x;
    }
}

// Aufgabe 1.4
int fakultaet(int n) {
    // Bedingung der Parameter pr�fen
    if (n < 0) {
        return -1;
    }

    // Berechne die Fakult�t n und gebe Sie zur�ck
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}

// AufgabesumAndDiff 1.5
void addiereUhrzeit(float &uhrzeit, float summand) {
    // Zeiten in Komponenten aufteilen
    int uhrzeitStunden = (int) uhrzeit;
    float uhrzeitMinuten = uhrzeit - uhrzeitStunden;
    int summandStunden = (int) summand;
    float summandMinuten = summand - summandStunden;

    // Komponenten verrechnen
    uhrzeitMinuten += summandMinuten;
    if (uhrzeitMinuten > 0.59) {
        uhrzeitMinuten -= 0.60;
        summandStunden += 1;
    }
    uhrzeitStunden += summandStunden;
    if (uhrzeitStunden > 23) {
        uhrzeitStunden -= 24;
    }

    // Komponenten zusammenf�hren
    uhrzeit = uhrzeitStunden + uhrzeitMinuten;
}

// Aufgabe 1.6
bool contains7(int x) {
    // Solange x nicht 0 ist
    while (x != 0) {
        // Falls die letzte Ziffer eine 7 ist, gebe true zur�ck
        if (x % 10 == 7) {
            return true;
        }
        // Sonst verschiebe die Zahl um eine Stelle nach rechts
        else {
            x /= 10;
        }
    }

    // Ist x null gibt es keine weitere Ziffer, also ist das Ergebnis false
    return false;
}

int main() {
    // Solange wie das Programm nicht beendet wurde
    while (true) {
        // Gebe das Men� aus
        cout << "===Menu" << setw(41) << setfill('=') << "=" << endl;
        cout << "1. isFibonacci(int x)" << endl;
        cout << "2. round(float x ,int n)" << endl;
        cout << "3. sumAndDiff(int x, int y, int &sum, int &diff)" << endl;
        cout << "4. fakultaet(int n)" << endl;
        cout << "5. addiereUhrzeit(float &uhrzeit, float summand)" << endl;
        cout << "6. contains7(int x)" << endl << endl;
        cout << "9. Beenden" << endl;
        cout << setw(48) << setfill('=') << "=" << endl << endl;

        // Frage die Auswahl ab
        cout << "Auswahl: ";
        char auswahl = 0;
        cin >> auswahl;
        while ((auswahl < '1' || auswahl > '6') && auswahl != '9') {
            cout << "Ungueltige Eingabe. Auswahl: ";
            cin >> auswahl;
        }
        cout << endl;
        system("cls");

        switch (auswahl) {
        case '1':
            cout << "===Funktion: isFibonacci" << setw(24) << setfill('=') << "=" << endl;
            cout << "int x: ";
            int x1;
            cin >> x1;
            cout << endl << "isFibonacci(x) = ";
            if (isFibonacci(x1)) {
                cout << "true";
            } else {
                cout << "false";
            }
            cout << endl;
            break;
        case '2':
            cout << "===Funktion: round" << setw(30) << setfill('=') << "=" << endl;
            cout << "float x: ";
            float x2;
            cin >> x2;
            cout << "int n: ";
            int n2;
            cin >> n2;
            cout << endl << "round(x,n) = ";
            cout << round(x2, n2) << endl;
            break;
        case '3':
            cout << "===Funktion: sumAndDiff" << setw(25) << setfill('=') << "=" << endl;
            cout << "int x: ";
            int x3;
            cin >> x3;
            cout << "int y: ";
            int y3;
            cin >> y3;
            cout << endl << "sumAndDiff(x,y,diff,sum);" << endl;
            int sum;
            int diff;
            sumAndDiff(x3,y3,sum,diff);
            cout << "sum: " << sum << endl;
            cout << "diff: " << diff << endl;
            break;
        case '4':
            cout << "===Funktion: fakultaet" << setw(26) << setfill('=') << "=" << endl;
            cout << "int n: ";
            int n4;
            cin >> n4;
            cout << endl << "fakultaet(n) = ";
            cout << fakultaet(n4) << endl;
            break;
        case '5':
            cout << "===Funktion: addiereUhrzeit" << setw(21) << setfill('=') << "=" << endl;
            cout << "float uhrzeit: ";
            float uhrzeit;
            cin >> uhrzeit;
            cout << "float summand: ";
            float summand;
            cin >> summand;
            cout << endl << "addiereUhrzeit(uhrzeit,summand);" << endl;
            addiereUhrzeit(uhrzeit, summand);
            cout << "uhrzeit: " << uhrzeit << endl;
            break;
        case '6':
            cout << "===Funktion: contains7" << setw(26) << setfill('=') << "=" << endl;
            cout << "int n: ";
            int n6;
            cin >> n6;
            cout << endl << "contains7(n) = ";
            if (contains7(n6)) {
                cout << "true";
            } else {
                cout << "false";
            }
            cout << endl;
            break;
        case '9':
            return 0;
        }
        cout << setw(48) << setfill('=') << "=" << endl << endl;
        cout << endl;

        system("pause");
        system("cls");
    }
}

// Domenik Kranke <domenik@kranke.de>
