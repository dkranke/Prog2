#include <iostream>
using namespace std;

void aufruf() {
    // Statische Variable anlegen
    static int zaehler = 0;

    // Erh�he den Z�hler und gebe den Status aus
    zaehler++;
    cout << zaehler << ". Aufruf" << endl;
}

int main()
{
    // Lese eine Zahl ein
    cout << "Wieviele Male aufrufen? ";
    int n;
    cin >> n;

    // F�hre aufruf() n mal aus
    for (int i = 0; i < n; i++) {
        aufruf();
    }

    return 0;
}

// Domenik Kranke <domenik@kranke.de>