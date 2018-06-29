#include "Seleccion.h"

Seleccion::Seleccion() {

}

Seleccion::Seleccion(string pnombre_sele, string pmaxGoleador, int pPartidosG, int pPartidosP, 
int pPartidosE, int pGolesAnotados, int pGolesAnotadosMaxGoleador) {

    nombre_sele = pnombre_sele;
    max_goleador = pmaxGoleador;
    partidos_g = pPartidosG;
    partidos_p = pPartidosP;
    partidos_e = pPartidosE;
    golesAnotados = pGolesAnotados;
    goles_anotados_max_goleador = pGolesAnotadosMaxGoleador;
}

//getters
string Seleccion::getNombreSele() {
    return nombre_sele;
}

string Seleccion::getMaxGoleador() {
    return max_goleador;
}

int Seleccion::getPartidosG() {
    return partidos_g;
}

int Seleccion::getPartidosP() {
    return partidos_p;
}

int Seleccion::getPartidosE() {
    return partidos_e;
}

int Seleccion::getGolesAnotados() {
    return golesAnotados;
}

int Seleccion::getGolesAnotadosMaxGoleador() {
    return goles_anotados_max_goleador;
}

//setters
void Seleccion::setNombreSele(string ns) {
    nombre_sele = ns;
}

void Seleccion::setMaxGoleador(string mg) {
    max_goleador = mg;
}

void Seleccion::setPartidosG(int pg) {
    partidos_g = pg;
}

void Seleccion::setPartidosP(int pp) {
    partidos_p = pp;
}

void Seleccion::setPartidosE(int pe) {
    partidos_e = pe;
}

void Seleccion::setGolesAnotados(int ga) {
    golesAnotados = ga;
}

void Seleccion::setGolesAnotadosMaxGoleador(int gamg) {
    goles_anotados_max_goleador = gamg;
}