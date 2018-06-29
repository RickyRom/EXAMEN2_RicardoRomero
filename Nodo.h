#ifndef NODO_H
#define NODO_H
#include <string>
#include "Seleccion.h"

using namespace std;

class Nodo {
    private:
            Seleccion* pais;
            Nodo* sig;
    public:
            Nodo();
            Nodo(Seleccion*, Nodo*);

            //getters

            Seleccion* getSeleccion();
            Nodo* getNodo();

            //setters
            void addSeleccion(Seleccion*);
            void addNodo(Nodo*);
};
#endif