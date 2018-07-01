#ifndef SELECCION_H
#define SELECCION_H
#include <string>
#include <fstream>
#include <iostream>

using namespace std;


class Seleccion {
    private:
            string nombre_sele;
            string max_goleador;
            int partidos_g;
            int partidos_p;
            int partidos_e;
            int golesAnotados;
            int goles_anotados_max_goleador;
    public:
            Seleccion();
            Seleccion(string,string,int,int,int,int,int);

            //getters
            string getNombreSele();
            string getMaxGoleador();
            int getPartidosG();
            int getPartidosP();
            int getPartidosE();
            int getGolesAnotados();
            int getGolesAnotadosMaxGoleador();

            //setters
            void setNombreSele(string);
            void setMaxGoleador(string);
            void setPartidosG(int);
            void setPartidosP(int);
            void setPartidosE(int);
            void setGolesAnotados(int);
            void setGolesAnotadosMaxGoleador(int);

            void write(ofstream&);
            void read(ifstream&);

            friend ostream& operator<<(ostream&,const Seleccion&);

            friend istream& operator>>(istream&, Seleccion&);
};
#endif