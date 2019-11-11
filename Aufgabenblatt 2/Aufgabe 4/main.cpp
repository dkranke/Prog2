#include <iostream>
#include "inkrement.h"

using namespace std;

int main()
{
    // Lese eine Zahl ein
    cout << "Wieviele Male aufrufen? ";
    int n;
    cin >> n;

    // F�hre inkrement() n mal aus
    for (int i = 0; i < n; i++) {
        inkrement();
    }
    return 0;
}

// Domenik Kranke <domenik@kranke.de>