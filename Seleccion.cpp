#include "Seleccion.h"
#include <string>
#include <fstream>
#include <iostream>

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


void Seleccion::read(ifstream& in){
  int size; 
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  //buffer de nombre
  char nameBuffer[size];
  in.read(nameBuffer,size);
  
  nombre_sele=nameBuffer;
}

void Seleccion::write(ofstream& out){

  //nombre
  int size=nombre_sele.size();
   out.write(reinterpret_cast<char*>(&size),sizeof(int));
   out.write(nombre_sele.data(),nombre_sele.size());
}

istream& operator>>(istream& in, Seleccion& selec){
  string buffer;
  //leer una línea del archivo
  getline(in,buffer);
  string parse="";
  int cont=0; 
  for(int i = 0; i<buffer.size();i++){
    if(buffer[i]!=',')
      parse+=buffer[i];
    else{
      
      switch(cont){
        case 0:
          selec.nombre_sele = parse;
           break;
      }
      cont++;
    }
  }

  return in;
}


ostream& operator<<(ostream& out, const Seleccion& selec){

   out<<selec.nombre_sele<<endl;;
   return out;

}