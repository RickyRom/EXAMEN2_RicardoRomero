#include "Nodo.h"

Nodo::Nodo() {

}

Nodo::Nodo(Seleccion* pPais, Nodo* psig = NULL) {
    Seleccion* pais = pPais;
    Nodo* sig = psig;
}

//getters
Seleccion* Nodo::getSeleccion() {
    return pais;
}

Nodo* Nodo::getNodo() {
    return sig;
}

//setters
void Nodo::addNodo(Nodo* n) {
    sig = n;
}

void Nodo::addSeleccion(Seleccion* s) {
    pais = s;
}