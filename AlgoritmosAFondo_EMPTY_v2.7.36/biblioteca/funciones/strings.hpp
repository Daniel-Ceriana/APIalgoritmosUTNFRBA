#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <math.h>
#include <stdio.h>
#include <string.h>

#include <iostream>
using std::string;
// using std::to_string;//=======================

int length(string s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }

    return i;
}

int charCount(string s, char c)
{
    int i = 0;
    int contador = 0;
    while(i != length(s))
    {
        if(s[i] == c)
        {
            contador++;
        }
        i++;
    }

    return contador;
}

string substring(string s, int d, int h)
{
    string retorno;

    while(d < h)
    {
        retorno += s[d];
        d++;
    }

    return retorno;
}

string substring(string s, int d)  // ok
{
    return substring(s, d, length(s));
}

int indexOf(string s, char c)  // ok
{
    int i = 0;
    int retorno = -1;
    while(s[i] != c && s[i] != '\0')
    {
        i++;
    }
    if(s[i] == c)
    {
        retorno = i;
    }
    return retorno;
}

int indexOf(string s, char c,
            int offSet)  // ok // MEJORAR (llamando a la anterior)
{
    int i = offSet;
    int retorno = -1;
    while(s[i] != c && s[i] != '\0')
    {
        i++;
    }
    if(s[i] == c)
    {
        retorno = i;
    }
    return retorno;

    return 0;
}

int indexOf(string s, string toSearch)  // ok
{
    int indice = -1;
    int i = 0;
    int j = 0;
    bool continuar = true;

    while(continuar)
    {
        if(toSearch[j + 1] == '\0' || s[i] == '\0')
        {
            continuar = false;
        }

        if(s[i] == toSearch[j])
        {
            j++;
            if(indice == -1)
            {
                indice = i;
            }
        }
        else
        {
            j = 0;
            indice = -1;
        }

        i++;
    }

    return indice;
}

int indexOf(string s, string toSearch,
            int offset)  // MEJORAR (llamando a la anterior)
{
    int indice = -1;
    int i = offset;
    int j = 0;
    bool continuar = true;

    while(continuar)
    {
        if(toSearch[j + 1] == '\0' || s[i] == '\0')
        {
            continuar = false;
        }

        if(s[i] == toSearch[j])
        {
            j++;
            if(indice == -1)
            {
                indice = i;
            }
        }
        else
        {
            j = 0;
            indice = -1;
        }

        i++;
    }

    return indice;
}

int lastIndexOf(string s, char c)
{
    // Da vuelta el string, se lo pasa al uno de los buscadores de indice
    // anteriores hace la diferencia de indices (para ver cual es el que
    // corresponde al string original) devuelve ese resultado
    int i = length(s) - 1;
    string aux;
    int retorno = -1;
    int indiceEncontrado;
    while(i >= 0)
    {
        aux += s[i];
        i--;
    }
    indiceEncontrado = indexOf(aux, c);
    if(indiceEncontrado >= 0)
    {
        retorno = length(s) - 1 - indexOf(aux, c);
        // Indices totales //-// Indices desde el final
    }

    return retorno;
}

int indexOfN(string s, char c, int n)
{
    if(n == 0)
    {
        return -1;
    }

    int cantOcurrencias = charCount(s, c);
    if(n > cantOcurrencias)
    {
        return length(s);
    }
    // En esos dos casos, prefiero retornar rapido, asi evito tener un codigo
    // muy anidado por los ifs.

    int i = 0;
    int j = 0;
    int retorno = 0;

    while(j < n && s[i] != '\0')
    {
        if(s[i] == c)
        {
            // if(j==n){
            retorno = i;
            // }
            j++;
        }
        i++;
    }
    return retorno;
}

int charToInt(char c)
{
    //'0'=0
    //'9'=9
    //'A'=10 = 'a'
    //'B'=11 = 'b'
    //'Z'=35 = 'z'
    int retorno = 0;

    if(c > 47)  // no hace falta, en teoria no es apb
    {
        if(c < 58)
        {
            retorno = c - 48;
        }
        else if(c > 64 && c < 91)
        {
            retorno = c - 55;
        }
        else if(c > 96 && c < 123)
        {
            retorno = c - 87;
        }
    }

    return retorno;
}

char intToChar(int i)
{
    char retorno = '0';

    if(i <= 9)
    {
        retorno = i + 48;
    }
    else if(i > 9 && i < 36)
    {
        retorno = i + 55;
    }
    return retorno;
}

int getDigit(int n, int i)
{
    int retorno;
    int auxMenos = round(pow(10, i + 1));
    int aux;
    aux = n / auxMenos;
    int parteIzquierda = n - aux * round(pow(10, i + 1));
    if(i == 0)
    {
        retorno = parteIzquierda;  // en este caso no tiene parte derecha
    }
    else
    {
        retorno = parteIzquierda /
                  round(pow(10, i));  // en este caso si, y al dividirlo se
                                      // pierde en la precision
    }

    return retorno;
}

int digitCount(int n)
{
    int i = 1;
    int aux = 1;
    while(n / aux > 0)
    {
        aux = round(pow(10, i));
        i++;
    }

    return i - 1;
}

string intToString(int i)
{
    int j = digitCount(i) - 1;
    string retorno;
    while(j >= 0)
    {
        retorno += intToChar(getDigit(i, j));
        j--;
    }

    return retorno;
}

int stringToInt(string s, int b)  // ok //revisar si esta muy enredado
{
    // charToInt
    int retorno = 0;
    int i = length(s) - 1;
    int j = 0;
    while(i >= 0)
    {
        int expo = round(pow(b, j));
        int charEnInt = charToInt(s[i]);  // los puse en variables para debugear
        retorno += expo * charEnInt;
        j++;
        i--;
    }

    return retorno;
}

int stringToInt(string s)  // ok
{
    return stringToInt(s, 10);
}

string charToString(char c)
{
    string retorno;
    retorno += c;
    return retorno;
}

char stringToChar(string s)
{
    char retorno = s[0];
    return retorno;
}

string stringToString(string s)
{
    return s;
}

string doubleToString(double d)  // Revisar precision
{
    int auxParteEntera = int(d);
    int auxMantisa = (d - auxParteEntera) * round(pow(10, 5));  // harcodeado
    string retorno;

    retorno += intToString(auxParteEntera);
    retorno += ".";
    retorno += intToString(auxMantisa);

    return retorno;
}

double stringToDouble(string s)
{
    double retorno = 0;
    // substring
    // indexOf

    int iPunto = indexOf(s, '.');
    string auxEntero = substring(s, 0, iPunto);
    string auxMantisa;

    auxMantisa = substring(s, iPunto + 1);

    retorno += stringToInt(auxEntero);
    retorno +=
        double(stringToInt(auxMantisa)) / round(pow(10, length(auxMantisa)));

    return retorno;
}

bool isEmpty(string s)
{
    return length(s) > 0 ? false : true;
}

bool startsWith(string s, string x)
{
    bool retorno = true;
    string inicio = substring(s, 0, length(x) - 1);

    int i = 0;
    while(i < length(inicio))
    {
        if(s[i] != x[i])
        {
            retorno = false;
        }
        i++;
    }

    return retorno;
}

bool endsWith(string s, string x)
{
    bool retorno = startsWith(substring(s, length(s) - length(x)), x);
    return retorno;
}

bool contains(string s, char c)
{
    bool retorno = false;

    if(indexOf(s, c) != -1)
    {
        retorno = true;
    }

    return retorno;
}

string replace(string s, char oldChar, char newChar)
{
    string retorno = s;
    int i = 0;
    while(i < length(retorno))
    {
        if(retorno[i] == oldChar)
        {
            retorno[i] = newChar;
        }
        i++;
    }

    return retorno;
}

string insertAt(string s, int pos, char c)
{
    string retorno;

    retorno += substring(s, 0, pos);
    retorno += c;
    retorno += substring(s, pos);

    return retorno;
}

string removeAt(string s, int pos)
{
    string retorno;
    retorno += substring(s, 0, pos);
    retorno += substring(s, pos + 1);

    return retorno;
}

string ltrim(string s)
{
    string retorno;

    int i = 0;
    while(i < length(s))
    {
        if(s[i] != ' ')
        {
            retorno = substring(s, i);
            i = length(s);
        }
        i++;
    }

    return retorno;
}

string rtrim(string s)//revisar
{
       string retorno;

    int i = length(s);
    while(i > length(s))
    {
        if(s[i] != ' ')
        {
            retorno = substring(s, i);
            i = length(s);
        }
        i--;
    }

    return retorno;
}

string trim(string s)
{
    return "";
}

string replicate(char c, int n)
{
    return "";
}

string spaces(int n)
{
    return "";
}

string lpad(string s, int n, char c)
{
    return "";
}

string rpad(string s, int n, char c)
{
    return "";
}

string cpad(string s, int n, char c)
{
    return "";
}

bool isDigit(char c)
{
    return true;
}

bool isLetter(char c)
{
    return true;
}

bool isUpperCase(char c)
{
    return true;
}

bool isLowerCase(char c)
{
    return true;
}

char toUpperCase(char c)
{
    return '0';
}

char toLowerCase(char c)
{
    return '0';
}

string toUpperCase(string s)
{
    return "";
}

string toLowerCase(string s)
{
    return "";
}

int cmpString(string a, string b)
{
    return 0;
}

int cmpDouble(double a, double b)
{
    return 0;
}

char* stringToCString(string s)  // Prehecho?
{
    char* ret = new char[length(s) + 1];

    int i = 0;
    while(s[i] != '\0')
    {
        ret[i] = (char)s[i];
        i++;
    }

    ret[i] = '\0';
    return ret;
}

string cStringToString(char c[])
{
    return string(c);
}

#endif
