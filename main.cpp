#include <iostream>
#include "Nodo.h"
#include "Seleccion.h"
#include "Lista.h"

using namespace std;

int main() {
    Lista* list = new Lista();
    int opcion;
	do{
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Agregar una Seleccion"<<endl;
		cout<<"2.- Poner en una posiciion"<<endl;
		cout<<"3.- Eliminar Selecciones"<<endl;
		cout<<"4.- Listar Selecciones"<<endl;
		cout<<"5.- Guardar en Archivo"<<endl;
		cout<<"6.- Salir"<<endl;
		cin>> opcion;
		switch (opcion) {

			case 1:{
                string nombre_sele;
                string max_goleador;
                int partidos_g;
                int partidos_p;
                int partidos_e;
                int golesAnotados;
                int goles_anotados_max_goleador;

                cout<<"Ingrese el nombre de la seleccion: "<<endl;
                cin>>nombre_sele;
                cout<<"Ingrese el maximo goleador: "<<endl;
                cin>>max_goleador;
                cout<<"Partidos Ganados: "<<endl;
                cin>>partidos_g;
                cout<<"Partidos Perdidos: "<<endl;
                cin>>partidos_p;
                cout<<"Partidos Empatados: "<<endl;
                cin>>partidos_e;
                cout<<"Goles Anotados: "<<endl;
                cin>>golesAnotados;
                cout<<"Goles Anotados Por El Maximo Goleador"<<endl;
                cin>>goles_anotados_max_goleador;

                Seleccion* s = new Seleccion(nombre_sele,max_goleador,partidos_g,partidos_p,partidos_e,
                golesAnotados, goles_anotados_max_goleador); 
                cout<<"hola"<<endl;
                Nodo* n = new Nodo(s,NULL);
                cout<<"hola2"<<endl;

                list -> agregar(n);
                cout<<"hola3"<<endl;

            }

				
				break;
			case 2:
				
				break;
            case 3:
				
				break;
            case 4:
                list -> listar();

				break;

            case 5:
				
				break;
			case 6:
				cout<<"Tenga Buen Dia"<<endl;
				break;	
		}
	}while(opcion != 6);


    return 0;
}
