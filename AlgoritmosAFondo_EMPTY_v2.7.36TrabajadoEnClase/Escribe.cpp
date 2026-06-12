
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
    // FILE* f = fopen("viernes.tt", "w+b");  // open write binary
    // // char c = 'A';
    // short c = 123;
    // fwrite(&c, sizeof(short), 1, f);  // lo guardamos
    // // lo que queremos guardar, el tamanio, cuantas veces, el archivo.
    // //  c = 'B';
    // //  fwrite(&c,1,1,f);//lo guardamos

    // // c = 'C';
    // // fwrite(&c,1,1,f);//lo guardamos

    // c = 456;
    // fwrite(&c, sizeof(short), 1, f);  // lo guardamos
    // c = 789;
    // fwrite(&c, sizeof(short), 1, f);  // lo guardamos

    // fclose(f);


        FILE* f = fopen("viernes.tt", "w+b");  // open write binary
    // char c = 'A';
    Persona c = persona(123,"Pablo");
    fwrite(&c, sizeof(Persona), 1, f);  // lo guardamos
    // lo que queremos guardar, el tamanio, cuantas veces, el archivo.
    //  c = 'B';
    //  fwrite(&c,1,1,f);//lo guardamos

    // c = 'C';
    // fwrite(&c,1,1,f);//lo guardamos

    // char c = 'A';
     c = persona(456,"Pedro");

    fwrite(&c, sizeof(Persona), 1, f);  // lo guardamos
    // char c = 'A';

     c = persona(789,"Alberto");

    fwrite(&c, sizeof(Persona), 1, f);  // lo guardamos
    
    fclose(f);
    return 0;
}
