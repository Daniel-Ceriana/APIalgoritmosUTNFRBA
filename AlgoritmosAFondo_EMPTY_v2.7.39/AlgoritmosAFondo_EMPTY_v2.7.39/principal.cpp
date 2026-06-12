
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
    int dni;
    char nom[20];
};
Persona persona(int d, string n)
{
    Persona p;
    p.dni = d;

    // string => char[]
    strcpy(p.nom, n.c_str());
    // target, string

    return p;
}

string personaToString(Persona p)
{
    string sDni = intToString(p.dni);

    // char[] =>string (no necesita conversion rara)
    string sNom = (p.nom);
    return sDni + "," + sNom;
}

struct Nombre
{
    int cantApariciones;
    char nom[20];
};
Nombre nombre(int a, string nom)
{
    Nombre n;
    n.cantApariciones = a;

    // string => char[]
    strcpy(n.nom, nom.c_str());
    // target, string

    return n;
}

string nombreToString(Nombre n)
{
    string sCantApariciones = intToString(n.cantApariciones);

    // char[] =>string (no necesita conversion rara)
    string sNom = (n.nom);
    return sCantApariciones + "," + sNom;
}
// nombreFromString
Nombre nombreFromString(string s)
{
    int pos = indexOf(s, ',');

    string cantAparicionesStr = substring(s, 0, pos);
    string nombreStr = substring(s, pos + 1);

    return nombre(stringToInt(cantAparicionesStr), nombreStr);
}

// compare Nombre a nom[20]

int cmpNombreNom(Nombre nombre, string nom)
{
    string a = nombre.nom;

    return cmpString(nombre.nom, nom);
}

int main()
{
    // Parte crear y escribir archivo

    // FILE* f1 = fopen("ARCHIVO.txt", "w+b");

    // string s = "Maria Juan Pablo Maria Maria Pablo";
    // // fwrite(&s,sizeof(string),1,f1);
    // fwrite(s.c_str(),sizeof(char),s.length(),f1);
    // fclose(f1);

    // //Parte leer archivo

    FILE* f = fopen("ARCHIVO.txt", "r+b");
    char c;
    string aux;
    Coll<Nombre> nombres = coll<Nombre>();

    while(fread(&c, sizeof(char), 1, f) == 1)
    {
        aux += charToString(c);
    }

    fclose(f);
    cout << aux << endl;

    cout << tokenCount(aux, ' ') << endl;
    int i = 0;
    while(i < tokenCount(aux, ' '))
    {
        string nombreActual = getTokenAt(aux, ' ', i);
        // int collFind(Coll<T> c, K k, int cmpTK(T, K), T tFromString(string))
        int indice =
            collFind(nombres, nombreActual, cmpNombreNom, nombreFromString);
        if(indice >= 0)  // si lo encuentra
        {
            // asigno a una nueva variable auxiliar, el nombre con su cantidad
            // de apariciones. A ese nombre, le agrego 1 cantidad de
            // apariciones. Guardo con collSetAt el aux.

            // T collGetAt(Coll<T> c, int p, T tFromString(string))
            Nombre aux = collGetAt(nombres, indice, nombreFromString);
            aux.cantApariciones++;

            // void collSetAt(Coll<T>& c, T t, int p, string tToString(T))
            collSetAt(nombres, aux, indice, nombreToString);
        }
        else  // si no lo encuentra lo agrega con cantApariciones 0
        {
            Nombre aux = nombre(1, nombreActual);
            // int collAdd(Coll<T>& c, T t, string tToString(T))
            collAdd(nombres, aux, nombreToString);
        }

        i++;
    }

    // Coll nombres -> nombre,
    // cantApariciones////=================================== nombre es un
    // struct ////=================================== Guardo todo el archivo en
    // AUX (string) Voy iterando todo AUX. Cuando encuentro un espacio, primero
    // busco el nombre en la coleccion. Si lo encuentra, cantApariciones++. Si
    // no lo encuentra, hace un add a la coleccion
    // Al final de todo, muestra nombres

    int j = 0;
    while(j < collSize(nombres))
    {
        Nombre aux = collGetAt(nombres, j, nombreFromString);
        cout << aux.nom << ", " << intToString(aux.cantApariciones) << endl;
        j++;
    }

    return 0;
}
