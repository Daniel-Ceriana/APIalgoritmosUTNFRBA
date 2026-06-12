#ifndef _MAINHPP
#define _MAINHPP

#include <iostream>
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/parte1/Coll.hpp"
#include "biblioteca/tads/parte2/Array.hpp"
#include "biblioteca/tads/parte2/List.hpp"
#include "biblioteca/tads/parte2/Map.hpp"
#include "biblioteca/tads/parte2/Queue.hpp"
#include "biblioteca/tads/parte2/Stack.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::to_string;

struct Persona{
    int dni;
    char nom[20];
};
Persona persona(int d, string n){
    Persona p;
    p.dni =d;
    
    //string => char[]
    strcpy(p.nom,n.c_str());
    //target, string

    return p;
}

string personaToString(Persona p){
    string sDni = intToString(p.dni);

    //char[] =>string (no necesita conversion rara)
    string sNom = (p.nom);
    return sDni + "," + sNom;
}







#endif
