#include "Lista.h"
#include "Nodo.h"
#include "Seleccion.h"
#include <iostream>

using namespace std;

Lista::Lista() {

}

void Lista::agregar(Nodo* sig) {
    if(sige == NULL) {
        cout<<"puta"<<endl;
        sige = new Nodo();
        sige = sig;
    }else{
        Nodo* temp = sige;
        cout<<"sdfg"<<endl;
        while(temp -> getNodo() != NULL) {
            cout<<"puta2"<<endl;
            temp = temp -> getNodo();
        }
        temp -> addNodo(sig);
    }
}

void Lista::listar() {
    Nodo* temp = sige->getNodo();
    Nodo* temp2 = NULL;
    while(true) {
        cout << "fgd"<<endl;
        if(temp != NULL){
            cout<<"dwf"<<endl;
            cout<<temp->getSeleccion()->getNombreSele()<<endl;
            cout<<"xcz"<<endl;
            temp2 = temp->getNodo();
            cout<<"fgfg"<<endl;
            if(temp2 == NULL) {
                cout<<"df"<<endl;
                break;
            }
        }else if(temp2 != NULL){
            cout<<"rif"<<endl;
            cout<<temp2->getSeleccion()->getNombreSele()<<endl;
            cout<<"dfs"<<endl;            
            temp = temp2->getNodo();
            if(temp == NULL) {
                cout<<"fggh"<<endl;
                break;
            }
        }
    }
}
