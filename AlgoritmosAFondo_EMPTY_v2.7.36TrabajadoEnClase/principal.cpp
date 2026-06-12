
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

int main()
{
    FILE* f = fopen("viernes.tt","w+b");//open write binary
    char c = 'A';
    fwrite(&c,1,1,f);//lo guardamos
    //lo que queremos guardar, el tamanio, cuantas veces, el archivo.
    c = 'B';
    fwrite(&c,1,1,f);//lo guardamos
    
    c = 'C';
    fwrite(&c,1,1,f);//lo guardamos
    
    fclose(f);


    // leyendo archivo diga cuantas veces aparece cada nombre
    // aceptando que algunos aparecen 1 vez, y otros varias
    return 0;
}
