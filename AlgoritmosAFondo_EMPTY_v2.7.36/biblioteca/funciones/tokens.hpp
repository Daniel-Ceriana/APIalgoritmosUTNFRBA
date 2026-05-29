#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <stdio.h>

#include <iostream>

#include "strings.hpp"
using std::string;

int tokenCount(string s, char sep)
{
    int retorno = 0;

    if(length(s) > 0)
    {
        retorno = charCount(s, sep) + 1;
    }

    return retorno;
}

void addToken(string& s, char sep, string t)
{
    if(length(s) > 0)
    {
        s += sep + t;
    }
    else
    {
        s += t;
    }
}

string getTokenAt(string s, char sep, int i)
{
    int indiceSep = indexOfN(s, sep, i) + 1;
    int segundoIndiceSep = indexOfN(s, sep, i + 1);

    return substring(s, indiceSep, segundoIndiceSep);
}

void removeTokenAt(string& s, char sep, int i)
{
    string aux = "";
    int j = 0;

    while(j < tokenCount(s, sep))
    {
        if(j != i)
        {
            addToken(aux, sep, getTokenAt(s, sep, j));
        }
        j++;
    }

    s = aux;
}

void setTokenAt(string& s, char sep, string t, int i)
{
    string aux = "";
    int j = 0;
    while(j < tokenCount(s, sep))
    {
        if(j != i)
        {
            addToken(aux, sep, getTokenAt(s, sep, j));
        }
        else
        {
            addToken(aux, sep, t);
        }

        j++;
    }
    s = aux;
}

int findToken(string s, char sep, string t)
{
    int retorno =-1;

    int i = 0;
    while(i < tokenCount(s, sep))
    {
       if(getTokenAt(s,sep,i)== t){
        retorno = i;
       }

        i++;
    }

    return retorno;
}

#endif
