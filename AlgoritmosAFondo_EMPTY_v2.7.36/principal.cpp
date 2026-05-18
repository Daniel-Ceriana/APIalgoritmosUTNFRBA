
#include "principal.hpp"

#include <iostream>

#include "biblioteca/funciones/files.hpp"
#include "biblioteca/funciones/millis.hpp"
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/parte1/Coll.hpp"
#include "biblioteca/tads/parte1/Fecha.hpp"
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
    // Fecha fTest = fecha(1120506805720);

    // Fecha fTestAddSegundos = fechaAddSegundos(fTest, 300);
    // Fecha fTestAddMinutos = fechaAddMinutos(fTest, 300);
    // Fecha fTestAddHoras = fechaAddHoras(fTest, 300);

    // string mostrarFechaTest = "Dia: " + to_string(fTest.dia) +
    //                           " Hora: " + to_string(fTest.hora) +
    //                           " Minutos: " + to_string(fTest.min) +
    //                           " Segundos: " + to_string(fTest.seg);

    // cout << "Original: " << endl;

    // cout << mostrarFechaTest << endl;

    // cout << "Cambios: " << endl;
    // string mostrarFechaTestSegundos =
    //     "Dia: " + to_string(fTestAddSegundos.dia) +
    //     " Hora: " + to_string(fTestAddSegundos.hora) +
    //     " Minutos: " + to_string(fTestAddSegundos.min) +
    //     " Segundos: " + to_string(fTestAddSegundos.seg);
    // string mostrarFechaTestMinutos =
    //     "Dia: " + to_string(fTestAddMinutos.dia) +
    //     " Hora: " + to_string(fTestAddMinutos.hora) +
    //     " Minutos: " + to_string(fTestAddMinutos.min) +
    //     " Segundos: " + to_string(fTestAddMinutos.seg);
    // string mostrarFechaTestHoras = "Dia: " + to_string(fTestAddHoras.dia) +
    //                                " Hora: " + to_string(fTestAddHoras.hora)
    //                                + " Minutos: " +
    //                                to_string(fTestAddHoras.min) + " Segundos:
    //                                " + to_string(fTestAddHoras.seg);

    // cout << mostrarFechaTestSegundos << endl;
    // cout << mostrarFechaTestMinutos << endl;
    // cout << mostrarFechaTestHoras << endl;

    // Fecha f1 = fecha(2026,5,20);
    // Fecha f2 = fechaAddDias(f1,5); // 25 de mayo
    // Fecha f3 = fechaAddDias(f1,-5);
    // cout<<f1.dia<<", "<<f1.mes<<endl;
    // cout<<f2.dia<<", "<<f1.mes<<endl;
    // cout<<f3.dia<<", "<<f1.mes<<endl;

    // Fecha f1 = fecha(1973,6,15);
    // Fecha f2 = fecha(1970,10,2);
    // long long diff = fechaDiffMillis(f1,f2);
    // cout<<diff<<endl;

    // Fecha f1 = fecha(2025,10,2);
    // Fecha f2 = fecha(2025,10,10);
    // int n = fechaDiffDias(f1,f2); // retorna 8
    // cout<<n<<endl;

    // Fecha f1 = fecha(2025,10,2,18,30);
    // Fecha f2 = fecha(2025,10,10,21,0);
    // if( fechaCmp(f1,f2)<0 )
    // {
    //  cout << fechaToString(f1) << " es anterior a ";
    //  cout << fechaToString(f2) << endl;
    // }

    // Fecha f1 = fecha(2025,10,2);
    // Fecha f2 = fecha(2025,10,10);
    // if( fechaCmp(f1,f2)<0 )
    // {
    //  cout << fechaToString(f1) << " es anterior a ";
    //  cout << fechaToString(f2) << endl;
    // }

    // bool esBisiesto1 = fechaEsAnioBisiesto(2025);
    // bool esBisiesto2 = fechaEsAnioBisiesto(2000);
    // bool esBisiesto3 = fechaEsAnioBisiesto(2024);
    // cout << "2025: "<<esBisiesto1 << endl;
    // cout << "2000: "<<esBisiesto2 << endl;
    // cout << "2024: "<<esBisiesto3 << endl;

    // cout<<"Dias en: 1:"<<fechaDiasEnMes(1,2000)<<endl;
    // cout<<"Dias en: 2: "<<fechaDiasEnMes(2,2001)<<endl;
    // cout<<"Dias en: 2 bisiesto: "<<fechaDiasEnMes(2,2000)<<endl;
    // cout<<"Dias en: 3: "<<fechaDiasEnMes(3,2000)<<endl;
    // cout<<"Dias en: 4: "<<fechaDiasEnMes(4,2000)<<endl;
    // cout<<"Dias en: 5: "<<fechaDiasEnMes(5,2000)<<endl;
    // cout<<"Dias en: 6: "<<fechaDiasEnMes(6,2000)<<endl;
    // cout<<"Dias en: 7: "<<fechaDiasEnMes(7,2000)<<endl;
    // cout<<"Dias en: 8: "<<fechaDiasEnMes(8,2000)<<endl;
    // cout<<"Dias en: 9: "<<fechaDiasEnMes(9,2000)<<endl;
    // cout<<"Dias en: 10: "<<fechaDiasEnMes(10,2000)<<endl;
    // cout<<"Dias en: 11: "<<fechaDiasEnMes(11,2000)<<endl;
    // cout<<"Dias en: 12: "<<fechaDiasEnMes(12,2000)<<endl;

    // // Fecha f = fecha();
    // Fecha f2 = fecha(2025,10,10,21,0);
    // Fecha f3 = fecha(2025,1,1);

    // int nroDia = fechaDiaDelAnio(f2);
    // cout<<nroDia<<endl;

    // Fecha f = fecha(29,2,2925);
    // bool consistente = fechaEsValida(f);
    // cout<<consistente<<endl;
    // cout<<fechaDiasEnMes(f)<<endl;
    // int i;
    // cout<< i;

    // Fecha f = fecha(1900,2,2);
    // fechaSetAnio(f,1940);
    // cout<<fechaToString(f)<<endl;

    // string s = "Hola";
    // int n = length(s);
    // cout << n << endl; // muestra: 4
    // s = "";
    // n = length(s);
    // cout << n << endl; // muestra: 0

    // string s = "Esto es una prueba";

    // int n = charCount(s,'e');
    // cout << n << endl; // muestra: 2
    // n = charCount(s,' ');
    // cout << n << endl; // muestra: 3

    //  string s = "Esto es una prueba";
    //  string x = substring(s,2,10);
    //  cout << x << endl; // muestra: to es un
    //  x = substring(s,2,length(s));
    //  cout << x << endl; // muestra: to es una prueba

    //   s = "Esto es una prueba";
    //   x = substring(s,2);
    //  cout << x << endl; // muestra: to es una prueba

    // string s = "Esto es una prueba";
    // int p = indexOf(s,'e');
    // cout << p << endl; // muestra: 5
    // p = indexOf(s,'X');
    // cout << p << endl; // muestra: -1

    // string s = "Esto es una prueba";
    // int p = indexOf(s,'e',0);
    // cout << p << endl; // muestra: 5
    // p = indexOf(s,'e',12);
    // cout << p << endl; // muestra: 15

    // string s = "Esto es una prueba";
    // int p = indexOf(s,"una");
    // cout << p << endl; // muestra: 8
    // p = indexOf(s,"jamon");
    // cout << p << endl; // muestra: algun valor negativo

    // string s = "Esta funcion es la funcion mas dificil";
    // int p = indexOf(s,"funcion",0);
    // cout << p << endl; // muestra: 5
    // p = indexOf(s,"funcion",13);
    // cout << p << endl; // muestra: 19

    // string s = "John|Paul|George|Ringo";

    // cout << lastIndexOf(s,'J') << endl; // muestra: 0
    // cout << lastIndexOf(s,'o') << endl; // muestra: 21
    // cout << lastIndexOf(s,'h') << endl; // muestra: 2
    // cout<<"ASDASD"<<endl;

    //  int p = indexOfN(s,'|',1);
    //  cout << p << endl; // muestra: 4
    //  p = indexOfN(s,'|',2);
    //  cout << p << endl; // muestra: 9
    //  p = indexOfN(s,'|',3);
    //  cout << p << endl; // muestra: 16

    // char c = '2';
    // int n = charToInt(c); // retorna: 2
    // cout << n << endl;
    // c = 'D';
    // n = charToInt(c); // retorna: 13
    // cout << n << endl;
    // c = 'd';
    // n = charToInt(c); // retorna: 13
    // cout << n << endl;
    // c = 'z';
    // n = charToInt(c); // retorna: 13
    // cout << n << endl;

    // int i = 2;
    // char c = intToChar(i);
    // cout << c << endl; // muestra: 2
    // i = 13;
    // c = intToChar(i);
    // cout << c << endl; // muestra: D

    // int n = 12345;
    // int i = 0;
    // int r = getDigit(n,i);
    // cout << r << endl; // muestra: 5
    // i = 1;
    // r = getDigit(n,i);
    // cout << r << endl; // muestra: 4
    // i = 2;
    // r = getDigit(n,i);
    // cout << r << endl; // muestra: 3
    // i = 3;
    // r = getDigit(n,i);
    // cout << r << endl; // muestra: 2

    // int n = 12345;
    // int i = digitCount(n);
    // cout << i << endl; // muestra: 5

    // n = 1;
    // i = digitCount(n);
    // cout << i << endl; // muestra: 1
    // n = 11;
    // i = digitCount(n);
    // cout << i << endl; // muestra: 2

    // int i = 12345;
    // string s = intToString(i);
    // cout << s << endl; // muestra: 12345
    //  i = 1;
    //  s = intToString(i);
    // cout << s << endl; // muestra: 1
    //  i = 125;
    //  s = intToString(i);
    // cout << s << endl; // muestra: 125

    // string s = "10";
    // int i = stringToInt(s,10);
    // cout << i << endl; // muestra: 10
    // i = stringToInt(s,2);
    // cout << i << endl; // muestra: 2
    // i = stringToInt(s,16);
    // cout << i << endl; // muestra: 16
    // s = "12AB";
    // i = stringToInt(s,16);
    // cout << i << endl; // muestra: 4779

    // string s = "12345";
    // int i = stringToInt(s);
    // cout << i << endl; // muestra: 12345

    // char c = 'A';
    // string s = charToString(c);
    // cout << s << endl; // muestra: A
    // cout << length(s) << endl; // muestra: 1
    // c = ' ';
    // s = charToString(c);
    // cout << s << endl; // muestra: [VACIO]
    // cout << length(s) << endl; // muestra: 1

    // string s = "A";

    // char c = stringToChar(s);
    // cout << c << endl; // muestra: A
    // cout << (int)c << endl; // muestra: 65
    // s = " ";
    // c = stringToChar(s);
    // cout << c << endl; // muestra: [VACIO]
    // cout << (int)c << endl; // muestra: 32, ASCII de ' '

    // string s = stringToString("Hola");
    // cout << s << endl; // muestra: Hola

    // double d = 123.4;
    // string s = doubleToString(d);

    // cout << to_string(d) << endl; // muestra: 123.4
    //  d = 123.4234;
    //  s = doubleToString(d);
    // cout << s << endl; // muestra: 123.4
    //  d = 123.700023;
    //  s = doubleToString(d);
    // cout << s << endl; // muestra: 123.4
    //  d = 123.50234;
    //  s = doubleToString(d);
    // cout << s << endl; // muestra: 123.4

    //  string s = "123.4";
    // double d = stringToDouble(s);
    // cout << d << endl; // muestra: 123.4

    //  s = "123.42";
    //  d = stringToDouble(s);
    // cout << d << endl; // muestra: 123.4

    //  s = "123.423";
    //  double e = stringToDouble(s);
    // cout << e << endl; // muestra: 123.4

    // string s = "";
    // cout << isEmpty(s) << endl; // true
    // s = "Hola";
    // cout << isEmpty(s) << endl; // false
    // s = " ";
    // cout << isEmpty(s) << endl; // false

    // string s1 = "cursoDeAlgoritmos";
    // string s2 = "curso";
    // if( startsWith(s1,s2) )
    // {
    // cout << s2 << " es prefijo de: " << s1 << endl;
    // }

    // string s1 = "cursoDeAlgoritmos";
    // string s2 = "Algoritmos";
    // if( endsWith(s1,s2) )
    // {
    // cout << s2 << " es sufijo de: " << s1 << endl;
    // }

    // string s = "abcd";
    // char c = 'b';
    // if( contains(s,c) )
    // {
    // cout << s << " contiene a: " << c << endl;
    // }
    // c = 'X';
    // if( !contains(s,c) )
    // {
    // cout << s << " NO contiene a: " << c << endl;
    // }

    // string s = "Esto es una prueba";
    // string r = replace(s,'e','X');
    // cout << r << endl; // SALIDA: Esto Xs una pruXba

    // string s = "Esto es una prueba";
    // int pos = 6;
    // char c = 'X';
    // string r = insertAt(s,pos,c);
    // cout << r << endl; // SALIDA: Esto eXs una prueba

    // string s = "Esto es una prueba";
    // int pos = 7;
    // string r = removeAt(s,pos);
    // cout << r << endl; // SALIDA: Esto esuna prueba

    // // con espacios a izquierda
    // string s = " Esto es una prueba";
    // string r = ltrim(s);
    // cout << "[" << r << "]" << endl; // [Esto es una prueba]
    // // sin espacios
    // s = "Esto es una prueba";
    // r = ltrim(s);
    // cout << "[" << r << "]" << endl; // [Esto es una prueba]
    // // con espacios a izquierda y derecha
    // s = " Esto es una prueba ";
    // r = ltrim(s);
    // cout << "[" <<length(s) r << "]" << endl; // [Esto es una prueba ]

    // // con espacios a derecha
    // string s = "Esto es una prueba ";
    // string r = rtrim(s);
    // cout << "[" << r << "]" << endl; // [Esto es una prueba]
    // // sin espacios
    // s = "Esto es una prueba";
    // r = rtrim(s);
    // cout << "[" << r << "]" << endl; // [Esto es una prueba]
    // // con espacios a izquierda y derecha
    // s = " Esto es una prueba ";
    // r = rtrim(s);
    // cout << "[" << r << "]" << endl; // [ Esto es una prueba]

    // // con espacios a izquierda y derecha
    // string s = " Esto es una prueba ";
    // string r = trim(s);
    // cout << "[" << r << "]" << endl; // [Esto es una prueba]
    // // con espacios dentro de la cadena
    // s = "Esto   es una prueba";
    // r = rtrim(s);
    // cout << "[" << r << "]" << endl; // [Esto   es una prueba]

    // int n = 5;
    // char c = 'X';
    // string r = replicate(c,n);
    // cout << "[" << r << "]" << endl; // muestra: [XXXXX]
    // c = ' ';
    // r = replicate(c,n);
    // cout << "[" << r << "]" << endl; // muestra: [      ]

    // int n = 5;
    // string r = spaces(n);
    // // muestra: [ ] (cinco espacios)
    // cout << "[" << r << "]" << endl;

    // string s = "Hola";
    // int n = 10;
    // char c = 'X';
    // string r = lpad(s,n,c);
    // cout << "[" << r << "]" << endl; // muestra: [XXXXXXHola]

    // string s = "Hola";
    // int n = 10;
    // char c = 'X';
    // string r = rpad(s,n,c);
    // cout << "[" << r << "]" << endl; // muestra: [HolaXXXXXX]

    // string s = "Hola";
    // int n = 10;
    // char c = 'X';
    // string r = cpad(s,n,c);
    // cout << "[" << r << "]" << endl; // muestra: [XXXHolaXXX]

    // char c = '9';
    // if(isDigit(c))
    // {
    //     cout << c << " es digito" << endl;  // SALIDA
    // }
    // c = 'A';
    // if(!isDigit(c))
    // {
    //     cout << c << " NO es digito" << endl;  // SALIDA
    // }

    // char c = 'X';
    // if(isLetter(c))
    // {
    //     cout << c << " es letra" << endl;  // SALIDA
    // }
    // c = '9';
    // if(!isLetter(c))
    // {
    //     cout << c << " NO es letra" << endl;  // SALIDA
    // }

    // char c = 'X';
    // if(isUpperCase(c))
    // {
    //     cout << c << " es letra mayuscula" << endl;  // SALIDA
    // }
    // c = 'x';
    // if(!isUpperCase(c))
    // {
    //     cout << c << " NO es mayuscula" << endl;  // SALIDA
    // }

    // char c = 'a';
    // if(isLowerCase(c))
    // {
    //     cout << c << " es letra minuscula" << endl;  // SALIDA
    // }
    // c = 'A';
    // if(!isLowerCase(c))
    // {
    //     cout << c << " NO es minuscula" << endl;  // SALIDA
    // }

    // char c = 'a';
    // char r = toUpperCase(c);
    // cout << r << endl;  // Salida: A (convierte a mayuscula)
    // c = 'B';
    // r = toUpperCase(c);
    // cout << r << endl;  // Salida: B (ya era mayuscula)
    // c = '9';
    // r = toUpperCase(c);
    // cout << r << endl;  // Salida: 9 (no es una letra)

//     char c = 'A';
// char r = toLowerCase(c);
// cout << r << endl; // Salida: a (convierte a minuscula)
// c = 'b';
// r = toLowerCase(c);
// cout << r << endl; // Salida: b (ya era minuscula)
// c = '9';
// r = toLowerCase(c);
// cout << r << endl; // Salida: 9 (no es una letra)

// string s = "hola";
// string r = toUpperCase(s);
// cout << r << endl; // Salida: HOLA

// string s = "HOLA";
// string r = toLowerCase(s);
// cout << r << endl; // Salida: hola

// string s1 = "Carlos";

// string s2 = "Pablo";
// if( cmpString(s1,s2)<0 )
// {
//  cout << s1 << " es menor que: " << s2 << endl;
// }

//  s1 = "Carlos";

//  s2 = "Carlos";
// if( cmpString(s1,s2)==0 )
// {
//  cout << s1 << " es igual: " << s2 << endl;
// }



//  s1 = "Pablo";

//  s2 = "Carlos";
// if( cmpString(s1,s2)>0 )
// {
//  cout << s1 << " es mayor que: " << s2 << endl;
// }


//  s1 = "Carlosssssss";

//  s2 = "Carlos";

//  cout << cmpString(s1,s2)<< endl;


// double x = 25.7;
// double y = 36.9;
//  if( cmpDouble(x,y)<0 )
//  {
//    cout << x << " es menor que: " << y << endl;
//  }

//   x = 25.7;
//  y = 25.7;
//  if( cmpDouble(x,y)==0 )
//  {
//    cout << x << " es igual que: " << y << endl;
//  }
//   x = 36.9;
//  y = 25.7;
//  if( cmpDouble(x,y)>0 )
//  {
//    cout << x << " es mayor que: " << y << endl;
//  }



// string s = "Esto es una prueba";
// int p = indexOf(s,'e',0);
// cout << p << endl; // muestra: 5
// p = indexOf(s,'e',12);
// cout << p << endl; // muestra: 15



// string s = "Esta funcion es la funcion mas dificil";
// int p = indexOf(s,"funcion",0);
// cout << p << endl; // muestra: 5
// p = indexOf(s,"funcion",13);
// cout << p << endl; // muestra: 19




    return 0;
}
