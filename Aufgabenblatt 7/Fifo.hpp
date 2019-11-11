#ifndef _H_FIFO
#define _H_FIFO

#include "FifoElement.hpp"

#include <iostream>
using namespace std;

template <class T>
class Fifo
{
    private:
        FifoElement<T> *anfang;
        FifoElement<T> *ende;
        int groesse;
    public:
        Fifo<T>();
        ~Fifo<T>();
        Fifo<T>(const Fifo<T>& fifo);
        void push(const T&);
        T pop() throw();
        int size() const;
        void info() const;

        Fifo& operator<<(const T&);
        Fifo& operator>>(T&) throw();
        operator int() const;
};

template <class T>
Fifo<T>::Fifo() {
    anfang = nullptr;
    ende = nullptr;
    groesse = 0;
}

template <class T>
Fifo<T>::~Fifo() {
    delete anfang;
}

template <class T>
Fifo<T>::Fifo(const Fifo<T>& fifo) {
    anfang = nullptr;
    ende = nullptr;
    groesse = 0;

    FifoElement<T> *cur = fifo.anfang;
    while (cur != nullptr) {
        push(cur->inhalt);
        cur = cur->naechstesElement;
    }
}

template <class T>
void Fifo<T>::push(const T &value) {
    FifoElement<T>* element = new FifoElement<T>(value);

    if (ende != nullptr) {
        ende->naechstesElement = element;
    }
    ende = element;

    if (anfang == nullptr) {
        anfang = ende;
    }

    groesse++;
}

template <class T>
T Fifo<T>::pop() throw() {
    FifoElement<T> *element = anfang;

    if (element != nullptr) {
        anfang = element->naechstesElement;
        if (anfang == nullptr) {
            ende = nullptr;
        }

        T inhalt = element->inhalt;

        element->naechstesElement = nullptr;
        delete element;

        groesse--;

        return inhalt;
    } else {
        throw "No element";
    }
}

template <class T>
int Fifo<T>::size() const {
    return groesse;
}

template <class T>
void Fifo<T>::info() const {
    cout << "Info: [";

    for (FifoElement<T> *element = anfang; element != nullptr; element = element->naechstesElement) {
        cout << " " << element->inhalt;
    }

    cout << "]" << endl;
}

template <class T>
Fifo<T>& Fifo<T>::operator<<(const T& value) {
    push(value);
    return *this;
}

template <class T>
Fifo<T>& Fifo<T>::operator>>(T& value) throw() {
    value = pop();
    return *this;
}

template <class T>
Fifo<T>::operator int() const {
    return size();
}

#endif
