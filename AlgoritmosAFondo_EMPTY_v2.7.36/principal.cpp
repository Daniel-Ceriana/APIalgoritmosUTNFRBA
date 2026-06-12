
#include "principal.hpp"

#include <iostream>

#include "biblioteca/funciones/files.hpp"
#include "biblioteca/funciones/millis.hpp"
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/intro/Fraccion.hpp"
#include "biblioteca/tads/parte1/Coll.hpp"
#include "biblioteca/tads/parte1/Fecha.hpp"
#include "biblioteca/tads/parte1/Timer.hpp"
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

struct Persona
{
    int dni;  // documento nacional de identidad
    string nombre;
};

Persona persona(int dni, string nombre){
    Persona p;
    p.dni = dni;
    p.nombre = nombre;
    return p;
}
string personaToString(Persona p) {
    return to_string(p.dni) + "," + p.nombre;
}

Persona personaFromString(string s){
 int pos = indexOf(s, ',');

    string dniStr = substring(s, 0, pos);
    string nombreStr = substring(s, pos + 1);

    return persona(stringToInt(dniStr), nombreStr);
}

int cmpPersonaDNI(Persona p, int dni);
void mostrarColeccion(Coll<Persona> c);
int cmpPersonaNombre(Persona p,string nombre);
int cmpPersonaNombre(Persona a, Persona b);
int cmpPersonaDNI(Persona a, Persona b);

int main()
{
    Coll<Persona> c = coll<Persona>();
    collAdd<Persona>(c, persona(11, "Juan"), personaToString);
    collAdd<Persona>(c, persona(44, "Pedro"), personaToString);
    collAdd<Persona>(c, persona(33, "Carlos"), personaToString);
    collAdd<Persona>(c, persona(22, "Pablo"), personaToString);
    // ordenamos por nombre alfabeticamente
    collSort<Persona>(c, cmpPersonaNombre, personaFromString, personaToString);
    // iteramos y mostramos
    mostrarColeccion(c);
    // ordenamos por DNI ascendente
    collSort<Persona>(c, cmpPersonaDNI, personaFromString, personaToString);
    // iteramos y mostramos
    mostrarColeccion(c);

    return 0;
}

int cmpPersonaDNI(Persona p, int dni)
{
    return p.dni - dni;
}

void mostrarColeccion(Coll<Persona> c)
{
    collReset<Persona>(c);
    while(collHasNext<Persona>(c))
    {
        Persona p = collNext<Persona>(c, personaFromString);
        cout << personaToString(p) << endl;
    }
}

int cmpPersonaNombre(Persona p,string nombre)
{
 return cmpString(p.nombre,nombre);
}



// Para collSort: comparan dos Personas entre si
int cmpPersonaNombre(Persona a, Persona b)
{
    return cmpString(a.nombre, b.nombre);
}

int cmpPersonaDNI(Persona a, Persona b)
{
    return a.dni - b.dni;
}