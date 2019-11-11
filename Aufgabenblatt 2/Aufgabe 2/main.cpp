#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void eingabe(int &a, int &b) {
    cout << " - Zahl a: ";
    cin >> a;
    cout << " - Zahl b: ";
    cin >> b;
}

int main()
{
    int a = 0;
    int b = 0;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "eingabe(&a, &b):" << endl;
    eingabe(a,b);
    cout << "a = " << a << ", b = " << b << endl;
    cout << "swap(&a, &b):" << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

// Domenik Kranke <domenik@kranke.de>