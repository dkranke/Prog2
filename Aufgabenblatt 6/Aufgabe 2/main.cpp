#include <iostream>

using namespace std;

void eingabe(int *x, int *y) {
    cout << "-= EINGABE =-" << endl;
    cout << "x: " << &x << "(" << x << ")" << ", y: " << &y << "(" << y << ")" << endl;
    cout << "x: ";
    cin >> *x;
    cout << "y: ";
    cin >> *y;
    cout << "x: " << &x << "(" << x << ")" << ", y: " << &y << "(" << y << ")" << endl;
    cout << endl;
}

void swap(int *a, int *b) {
    cout << "-= SWAP =-" << endl;
    int c = *a;
    int d = *b;
    cout << "a: " << &a << "(" << a << ")" << ", b: " << &b << "(" << b << ")" << endl;
    *a = d;
    cout << "a: " << &a << "(" << a << ")" << ", b: " << &b << "(" << b << ")" << endl;
    *b = c;
    cout << "a: " << &a << "(" << a << ")" << ", b: " << &b << "(" << b << ")" << endl;
    cout << endl;
}

int main()
{
    int x, y;
    cout << "x: " << &x << "(" << x << ")" << ", y: " << &y << "(" << y << ")" << endl;
    eingabe(&x,&y);
    cout << "x: " << &x << "(" << x << ")" << ", y: " << &y << "(" << y << ")" << endl;
    swap(&x,&y);
    cout << "x: " << &x << "(" << x << ")" << ", y: " << &y << "(" << y << ")" << endl;
    return 0;
}
