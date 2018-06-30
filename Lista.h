#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

class Lista {
    private:
            Nodo* sige;
            int pos;
    public:
            Lista();
            void agregar(Nodo*);
            void listar();          
};
#endif