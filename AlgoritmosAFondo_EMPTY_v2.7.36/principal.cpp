
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

double fibonacci(int n);
void f(int n);


// cmpTT: compara dos int
int cmpTT_int(int t1, int t2) {
    if (t1 < t2) return -1;
    if (t1 == t2) return  0;
    return 1;
}

// cmpTT: orden inverso (para probar criterio distinto)
int cmpTT_int_desc(int t1, int t2) {
    return cmpTT_int(t2, t1);
}

// int intFromString(std::string s)      { return std::stoi(s); }
// std::string intToString(int n)        { return std::to_string(n); }

// cmpTT: compara dos string
int cmpTT_str(std::string t1, std::string t2) {
    if (t1 < t2) return -1;
    if (t1 == t2) return  0;
    return 1;
}
//  std::string strFromString(std::string s) { return s; }
//  std::string strToString(std::string s)   { return s; }

// ── Helpers ───────────────────────────────────────────────────────────────

void pass(const std::string& nombre) {
    std::cout << "[PASS] " << nombre << "\n";
}
void fail(const std::string& nombre, const std::string& detalle) {
    std::cerr << "[FAIL] " << nombre << " => " << detalle << "\n";
}

// Verifica que la colección esté ordenada según cmpTT
bool estaOrdenada_int(Coll<int>& c, int(*cmpTT)(int,int)) {
    int n = collSize(c);
    for (int i = 0; i < n - 1; i++) {
        if (cmpTT(collGetAt(c, i,stringToInt), collGetAt(c, i + 1,stringToInt)) > 0)
            return false;
    }
    return true;
}

bool estaOrdenada_str(Coll<std::string>& c, int(*cmpTT)(std::string,std::string)) {
    int n = collSize(c);
    for (int i = 0; i < n - 1; i++) {
        if (cmpTT(collGetAt(c, i,stringToString), collGetAt(c, i + 1,stringToString)) > 0)
            return false;
    }
    return true;
}

// ── Tests ─────────────────────────────────────────────────────────────────

void test_orden_ascendente() {
    Coll<int> c = coll<int>();
    collAdd(c, 30, intToString);
    collAdd(c, 10, intToString);
    collAdd(c, 20, intToString);

    collSort(c, cmpTT_int, stringToInt, intToString);

    if (estaOrdenada_int(c, cmpTT_int)
        && collGetAt(c, 0,stringToInt) == 10
        && collGetAt(c, 1,stringToInt) == 20
        && collGetAt(c, 2,stringToInt) == 30)
        pass("orden_ascendente");
    else
        fail("orden_ascendente", "coleccion no quedo ordenada correctamente");
}

void test_orden_descendente() {
    Coll<int> c = coll<int>();
    collAdd(c, 10, intToString);
    collAdd(c, 30, intToString);
    collAdd(c, 20, intToString);

    collSort(c, cmpTT_int_desc, stringToInt, intToString);

    if (collGetAt(c, 0,stringToInt) == 30
        && collGetAt(c, 1,stringToInt) == 20
        && collGetAt(c, 2,stringToInt) == 10)
        pass("orden_descendente");
    else
        fail("orden_descendente", "coleccion no quedo en orden descendente");
}

void test_ya_ordenada() {
    Coll<int> c = coll<int>();
    collAdd(c, 1, intToString);
    collAdd(c, 2, intToString);
    collAdd(c, 3, intToString);

    collSort(c, cmpTT_int, stringToInt, intToString);

    if (estaOrdenada_int(c, cmpTT_int))
        pass("ya_ordenada");
    else
        fail("ya_ordenada", "se rompio una coleccion que ya estaba ordenada");
}

void test_orden_inverso() {
    Coll<int> c = coll<int>();
    collAdd(c, 3, intToString);
    collAdd(c, 2, intToString);
    collAdd(c, 1, intToString);

    collSort(c, cmpTT_int, stringToInt, intToString);

    if (estaOrdenada_int(c, cmpTT_int))
        pass("orden_inverso");
    else
        fail("orden_inverso", "no ordeno coleccion en orden inverso");
}

void test_elementos_duplicados() {
    Coll<int> c = coll<int>();
    collAdd(c, 5, intToString);
    collAdd(c, 3, intToString);
    collAdd(c, 5, intToString);
    collAdd(c, 1, intToString);
    collAdd(c, 3, intToString);

    collSort(c, cmpTT_int, stringToInt, intToString);

    if (estaOrdenada_int(c, cmpTT_int)
        && collGetAt(c, 0,stringToInt) == 1
        && collGetAt(c, 1,stringToInt) == 3
        && collGetAt(c, 2,stringToInt) == 3
        && collGetAt(c, 3,stringToInt) == 5
        && collGetAt(c, 4,stringToInt) == 5)
        pass("elementos_duplicados");
    else
        fail("elementos_duplicados", "no manejo bien los duplicados");
}

void test_un_elemento() {
    Coll<int> c = coll<int>();
    collAdd(c, 42, intToString);

    collSort(c, cmpTT_int, stringToInt, intToString);

    if (collSize(c) == 1 && collGetAt(c, 0,stringToInt) == 42)
        pass("un_elemento");
    else
        fail("un_elemento", "coleccion de un elemento quedo mal");
}

void test_coleccion_vacia() {
    Coll<int> c = coll<int>();

    collSort(c, cmpTT_int, stringToInt, intToString);

    if (collSize(c) == 0)
        pass("coleccion_vacia");
    else
        fail("coleccion_vacia", "coleccion vacia quedo con elementos");
}

void test_todos_iguales() {
    Coll<int> c = coll<int>();
    collAdd(c, 7, intToString);
    collAdd(c, 7, intToString);
    collAdd(c, 7, intToString);

    collSort(c, cmpTT_int, stringToInt, intToString);

    if (estaOrdenada_int(c, cmpTT_int) && collSize(c) == 3)
        pass("todos_iguales");
    else
        fail("todos_iguales", "fallo con todos los elementos iguales");
}

void test_tipo_string() {
    Coll<std::string> c = coll<std::string>();
    collAdd(c, std::string("banana"),  stringToString);
    collAdd(c, std::string("alfa"),    stringToString);
    collAdd(c, std::string("gamma"),   stringToString);

    collSort(c, cmpTT_str, stringToString, stringToString);

    if (estaOrdenada_str(c, cmpTT_str)
        && collGetAt(c, 0,stringToString) == "alfa"
        && collGetAt(c, 1,stringToString) == "banana"
        && collGetAt(c, 2,stringToString) == "gamma")
        pass("tipo_string");
    else
        fail("tipo_string", "no ordeno strings correctamente");
}






int main()
{
    // // Test: multiplicar fracción por escalar
    // Fraccion a = fraccion(2, 9);
    // Fraccion r1 = fraccionMultiplicar(a, 3);
    // cout << "2/9 * 3 = " << r1.numerador << "/" << r1.denominador << endl; //
    // esperado: 6/9

    // Fraccion b = fraccion(1, 4);
    // Fraccion r2 = fraccionMultiplicar(b, 0);
    // cout << "1/4 * 0 = " << r2.numerador << "/" << r2.denominador << endl; //
    // esperado: 0/4

    // Fraccion c = fraccion(3, 5);
    // Fraccion r3 = fraccionMultiplicar(c, -2);
    // cout << "3/5 * -2 = " << r3.numerador << "/" << r3.denominador << endl;
    // // esperado: -6/5

    // Test:
    //     multiplicar fracción por fracción
    // Fraccion d = fraccion(2, 3);
    // Fraccion e = fraccion(3, 4);
    // Fraccion r4 = fraccionMultiplicar(d, e);
    // cout << "2/3 * 3/4 = " << r4.numerador << "/" << r4.denominador
    //      << endl;  // esperado: 6/12

    // Fraccion f = fraccion(1, 2);
    // Fraccion g = fraccion(1, 2);
    // Fraccion r5 = fraccionMultiplicar(f, g);
    // cout << "1/2 * 1/2 = " << r5.numerador << "/" << r5.denominador
    //      << endl;  // esperado: 1/4

    // Fraccion h = fraccion(-3, 7);
    // Fraccion i = fraccion(2, 5);
    // Fraccion r6 = fraccionMultiplicar(h, i);
    // cout << "-3/7 * 2/5 = " << r6.numerador << "/" << r6.denominador
    //      << endl;  // esperado: -6/35

    // Timer t;
    // timerStart(t);
    // f(100);
    // timerStop(t);
    // cout << timerElapsedTime(t)<<endl;
    // timerStart(t);
    // f(1000);
    // timerStop(t);
    // cout << timerElapsedTime(t)<<endl;
    // timerStart(t);
    // f(1500);
    // timerStop(t);
    // cout << timerElapsedTime(t)<<endl;
    // timerStart(t);
    // f(3000);
    // timerStop(t);
    // cout << timerElapsedTime(t)<<endl;
    // timerStart(t);
    // f(10000);
    // timerStop(t);
    // cout << timerElapsedTime(t)<<endl;
    // timerStart(t);
    // f(100000);
    // timerStop(t);
    // cout << timerElapsedTime(t)<<endl;

    //   Timer t;
    //  timerStart(t);
    //  fibonacci(40);
    //  timerStop(t);
    //  cout << timerElapsedTime(t)<<endl;

    //       timerStart(t);
    //  fibonacci(41);
    //  timerStop(t);
    //  cout << timerElapsedTime(t)<<endl;

    //       timerStart(t);
    //  fibonacci(42);
    //  timerStop(t);
    //  cout << timerElapsedTime(t)<<endl;

    //       timerStart(t);
    //  fibonacci(50);
    //  timerStop(t);
    //  cout << timerElapsedTime(t)<<endl;

    // int n=5;
    // int m=3;
    // int d=4;

    // int i=0;
    // int contadorNumero=0;
    // while(i<n){// total de numeros (n)
    //     int j =0;
    //     while(j<m){// dentro de un numero, sus cifras (m)
    //         int contadorCifras=0;

    //         if(charToInt(intToString(contadorNumero)[j]) == d ){
    //             j++;
    //         }else{
    //             contadorNumero++;
    //         }
    //     }
    //     cout<< contadorNumero<<", "<<endl;
    //     i++;

    // }

    // string s = "John|Paul|George|Ringo";
    // char sep = '|';
    // int n = tokenCount(s,sep);
    // cout << n << endl; // Salida: 4
    // s = "John";
    // sep = '|';
    // n = tokenCount(s,sep);
    // cout << n << endl; // Salida: 1
    // s = "";
    // sep = '|';
    // n = tokenCount(s,sep);
    // cout << n << endl; // Salida: 0

    // string s = "";
    // char sep = '|';
    // addToken(s,sep,"John");
    // cout << s << endl; // Salida: John
    // addToken(s,sep,"Paul");
    // cout << s << endl; // Salida: John|Paul
    // addToken(s,sep,"George");
    // cout << s << endl; // Salida: John|Paul|George
    // addToken(s,sep,"Ringo");
    // cout << s << endl; // Salida: John|Paul|George|Ringo

    // string s = "John|Paul|George|Ringo";
    // char sep = '|';
    // int pos = 0;
    // string t = getTokenAt(s,sep,pos);
    // cout << t << endl; // Salida: John
    // pos = 1;
    // t = getTokenAt(s,sep,pos);
    // cout << t << endl; // Salida: Paul
    // pos = 2;
    // t = getTokenAt(s,sep,pos);
    // cout << t << endl; // Salida: George
    // pos = 3;
    // t = getTokenAt(s,sep,pos);
    // cout << t << endl; // Salida: Ringo

    // string s = "John|Paul|George|Ringo";
    // char sep = '|';
    // int i = 2;
    // removeTokenAt(s,sep,i);
    // cout << s << endl; // Salida: John|Paul|Ringo
    // i = 0;
    // removeTokenAt(s,sep,i);
    // cout << s << endl; // Salida: Paul|Ringo

    // string s = "John|Paul|George|Ringo";
    // char sep = '|';
    // int i = 1;
    // string t = "McCartney";
    // setTokenAt(s,sep,t,i);
    // cout << s << endl; // Salida: John|McCartney|George|Ringo

    // string s = "John|Paul|George|Ringo";
    // char sep = '|';

    // string t = "Paul";
    // int p = findToken(s,sep,t);
    // cout << p << endl; // Salida: 1
    //  t = "John";
    // p = findToken(s,sep,t);
    // cout << p << endl; // Salida: 0

    //  t = "AAA";
    // p = findToken(s,sep,t);
    // cout << p << endl; // Salida: -1

    // string nombres = "";
    // char sep = ',';
    // string nom;
    // cout << "Ing nombre";
    // cin >> nom;
    // while(nom != "FIN")
    // {
    //     int pos = findToken(nombres, sep, nom);

    //     if(pos < 0)
    //     {
    //         addToken(nombres, sep, nom);
    //     }

    //     cout << "Ing nombre: ";
    //     cin >> nom;
    // }

    // for(int i = 0; i < tokenCount(nombres, sep); i++)
    // {
    //     string t= getTokenAt(nombres,sep,i);
    //     cout<<t<<endl;
    // }

    //     Coll<string> c = coll<string>();
    // collAdd<string>(c,"John",stringToString);
    // collAdd<string>(c,"Paul",stringToString);
    // collAdd<string>(c,"George",stringToString);
    // collAdd<string>(c,"Ringo",stringToString);
    // int pos = 2;
    // string s = collGetAt<string>(c,pos,stringToString);
    // cout << s << endl; // George

    // Coll<string> c = coll<string>();
    // collAdd<string>(c,"John",stringToString);
    // collAdd<string>(c,"Paul",stringToString);
    // collAdd<string>(c,"George",stringToString);
    // collAdd<string>(c,"Ringo",stringToString);
    // int pos = 2;
    // string nuevo = "George Harrison";
    // collSetAt<string>(c,nuevo,pos,stringToString);
    // string s = collGetAt<string>(c,pos,stringToString);
    // cout << s << endl; // George Harrison

    // Coll<string> c = coll<string>();
    // collAdd<string>(c,"John",stringToString);
    // collAdd<string>(c,"Paul",stringToString);
    // collAdd<string>(c,"George",stringToString);
    // collAdd<string>(c,"Ringo",stringToString);
    // int pos = 2;
    // // Salida: George
    // cout << collGetAt<string>(c,pos,stringToString) << endl;
    // collRemoveAt<string>(c,pos);
    // // Salida: Ringo
    // cout << collGetAt<string>(c,pos,stringToString) << endl;

    // Coll<string> c = coll<string>();
    // collAdd<string>(c,"John",stringToString);
    // collAdd<string>(c,"Paul",stringToString);
    // collAdd<string>(c,"George",stringToString);
    // collAdd<string>(c,"Ringo",stringToString);
    // for(int i=0; i<collSize<string>(c); i++)
    // {
    //  string s = collGetAt<string>(c,i,stringToString);
    // cout << s << endl;
    // }


    // std::cout << "=== Tests collFind ===\n";
    // test_elemento_existe_posicion_0();
    // test_elemento_existe_posicion_intermedia();
    // test_elemento_existe_ultima_posicion();
    // test_elemento_no_existe();
    // test_coleccion_vacia();
    // test_primera_ocurrencia_duplicados();
    // test_un_solo_elemento_encontrado();
    // test_un_solo_elemento_no_encontrado();
    // test_tipo_string();
    // std::cout << "=== Fin ===\n";

    // std::cout << "=== Tests collSort ===\n";
    // test_orden_ascendente();
    // test_orden_descendente();
    // test_ya_ordenada();
    // test_orden_inverso();
    // test_elementos_duplicados();
    // test_un_elemento();
    // test_coleccion_vacia();
    // test_todos_iguales();
    // test_tipo_string();
    // std::cout << "=== Fin ===\n";

    return 0;
}

// double fibonacci(int n)
// {
//     if(n < 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// void f(int n)
// {
//     int i = 0;
//     while(i < n)
//     {
//         int j = 0;
//         while(j < n)
//         {
//             j = j + 1;
//         }
//         i = i + 1;
//     }
// }
