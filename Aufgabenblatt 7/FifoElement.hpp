#ifndef _H_FIFOELEMENT
#define _H_FIFOELEMENT

template <class T>
class FifoElement
{
    public:
        T inhalt;
        FifoElement *naechstesElement;

        FifoElement<T>(const T &_inhalt);
        ~FifoElement();
};

template <class T>
FifoElement<T>::FifoElement(const T &_inhalt) : inhalt(_inhalt) {
    naechstesElement = nullptr;
}

template <class T>
FifoElement<T>::~FifoElement() {
    delete naechstesElement;
}

#endif // _H_FIFOELEMENT
