#include "GeoObjekt.hpp"

GeoObjekt& GeoObjekt::assign(const GeoObjekt &obj) throw() {
    if (typeid(*this).name() != typeid(obj).name()) {
        throw OperandenPassenNicht();
    }

    //if (typeid(*this).name() == typeid(obj).name()) {
        GeoObjekt* copy = obj.clone();
        memcpy(this, copy, sizeof copy);
    //}

    return *this;
}

GeoObjekt& GeoObjekt::operator=(const GeoObjekt &obj) throw() {
    return this->assign(obj);
}
