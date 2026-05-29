
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