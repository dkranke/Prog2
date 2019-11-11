#include "Fifo.hpp"

/*template <class T>
Fifo<T>::Fifo() {
    anfang = nullptr;
    ende = nullptr;
    groesse = 0;
}

template <class T>
Fifo<T>::~Fifo() {
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
    FifoElement<T> element(value);

    if (ende != nullptr) {
        ende->naechstesElement = &element;
    }
    ende = &element;

    if (anfang == nullptr) {
        anfang = ende;
    }

    groesse++;
}

template <class T>
const T& Fifo<T>::pop() throw() {
    FifoElement<T> *element = anfang;

    if (element != nullptr) {
        anfang = element->naechstesElement;
        if (anfang == nullptr) {
            ende = nullptr;
        }

        const T &inhalt = element->inhalt;

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

    for (FifoElement<T> *element = anfang; element != ende; element = element->naechstesElement) {
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
}*/
