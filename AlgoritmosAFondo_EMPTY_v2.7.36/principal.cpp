
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

Persona persona(int dni, string nombre)
{
    Persona p = {dni, nombre};
    // p.dni = dni;
    // p.nombre = nombre;

    return p;
}

Persona personaFromString(string persona)
{
    Persona p = {stringToInt(getTokenAt(persona, ',', 0)),
                 getTokenAt(persona, ',', 1)};
    return p;
}

int cmpPersonaDNI(Persona p, int dni)
{
    return p.dni - dni;
}
int cmpPersonaDNI(Persona p, Persona p2)
{
    return p.dni - p2.dni;
}

string personaToString(Persona p)
{
    return intToString(p.dni) + ',' + p.nombre;
}
void mostrarColeccion(Coll<Persona> c);
int cmpPersonaNombre(Persona p, string nombre);
int main()
{
    // Coll<Persona> c = coll<Persona>();
    // collAdd<Persona>(c, persona(11, "Juan"), personaToString);
    // collAdd<Persona>(c, persona(44, "Pedro"), personaToString);
    // collAdd<Persona>(c, persona(33, "Carlos"), personaToString);
    // collAdd<Persona>(c, persona(22, "Pablo"), personaToString);
    // int dni = 33;
    // int pos = collFind<Persona, int>(c, dni, cmpPersonaDNI,
    // personaFromString); Persona p = collGetAt<Persona>(c, pos,
    // personaFromString); cout << personaToString(p) << endl;

    Coll<Persona> c = coll<Persona>();
    collAdd<Persona>(c, persona(11, "Juan"), personaToString);
    collAdd<Persona>(c, persona(44, "Pedro"), personaToString);
    collAdd<Persona>(c, persona(33, "Carlos"), personaToString);
    collAdd<Persona>(c, persona(22, "Pablo"), personaToString);
    // ordenamos por nombre alfabeticamente
//     void collSort(Coll<T>& c, int cmpTT(T, T), T tFromString(string),
//               string tToString(T))
// {
    collSort<Persona>(c, cmpPersonaNombre, personaFromString, personaToString);
    // iteramos y mostramos
    mostrarColeccion(c);
    // ordenamos por DNI ascendente
    collSort<Persona>(c, cmpPersonaDNI, personaFromString, personaToString);
    // iteramos y mostramos
    mostrarColeccion(c);

    return 0;
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

int cmpPersonaNombre(Persona p, string nombre)
{
    return cmpString(p.nombre, nombre);
}
// int cmpPersonaNombre(Persona p, Persona p2)
// {
//     return cmpString(p.nombre, p2.nombre);
// }