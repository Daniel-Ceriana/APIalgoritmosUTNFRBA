
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
#include "principal.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::to_string;

int main()
{
    // FILE* f = fopen("viernes.tt", "r+b");  // open write binary
    // //  char c;
    //  short c;
    //     fread(&c, sizeof(short), 1, f);  //
    // while(!feof(f))
    // {
    //     fread(&c, sizeof(short), 1, f);  //
    //     // lo que queremos leer, el tamanio, cuantas veces, el archivo.
    //     cout << c << endl;
    // }

    // cout << c << endl;
    // fclose(f);

    // FILE* f = fopen("viernes.tt", "r+b");  // open write binary
    //                                        //  char c;
    // Fecha c;
    // fread(&c, sizeof(Fecha), 1, f);  //
    // while(!feof(f))
    // {
    //     fread(&c, sizeof(Fecha), 1, f);  //
    //                                      //
    //     // lo que queremos leer, el tamanio, cuantas veces, el archivo.
    //     cout << fechaToString(c) << endl;
    // }

    
    FILE* f = fopen("viernes.tt", "r+b");  // open write binary
                                           //  char c;
    Persona c;
    // fread(&c, sizeof(Persona), 1, f);  //
    while(!feof(f))
    {
        fread(&c, sizeof(Persona), 1, f);  //
        //
        // lo que queremos leer, el tamanio, cuantas veces, el archivo.
        cout << personaToString(c) << endl;
    }

    fclose(f);

    return 0;
}
