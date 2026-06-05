#ifndef _TCOLL_T_
#define _TCOLL_T_

#include <iostream>

#include "../../funciones/strings.hpp"

using std::string;

template <typename T>
struct Coll
{
    string s;
    char sep;
    int contadorNext;
};

template <typename T>
Coll<T> coll(char sep)
{
    return {"",sep,0};
}

template <typename T>
Coll<T> coll()
{
    return {"",'|',0};
}

template <typename T>
int collSize(Coll<T> c)
{
    return tokenCount(c.s,c.sep);
}

template <typename T>
void collRemoveAll(Coll<T>& c)
{
    c.s="";
    c.contadorNext=0;//Chequear
}

template <typename T>
void collRemoveAt(Coll<T>& c, int p)
{
    removeTokenAt(c.s,c.sep,p);
}

template <typename T>
int collAdd(Coll<T>& c, T t, string tToString(T))
{
    addToken(c.s,c.sep,tToString(t));
    return collSize(c)-1;
}

template <typename T>
void collSetAt(Coll<T>& c, T t, int p, string tToString(T))
{
    setTokenAt(c.s,c.sep,tToString(t),p);
}

template <typename T>
T collGetAt(Coll<T> c, int p, T tFromString(string))
{
    T t;
    t= tFromString(getTokenAt(c.s,c.sep,p));
    return t;
}

template <typename T, typename K>
int collFind(Coll<T> c, K k, int cmpTK(T, K), T tFromString(string))
{
    // // n(string s, char sep, string t)
    // findToken(c.s,c.sep,k)
    // int retorno = -1;
    int i=0;
// int collSize(Coll<T> c)
    while(i<collSize(c)){
        if(cmpTK(collGetAt(c,i, tFromString),k)==0){
                return i;
        }
        i++;
    }
    
    // T collGetAt(Coll<T> c, int p, T tFromString(string))
    
    return -1;
}

template <typename T>
void collSort(Coll<T>& c, int cmpTT(T, T), T tFromString(string),
              string tToString(T))
{
}

template <typename T>
bool collHasNext(Coll<T> c)
{
    return true;
}

template <typename T>
T collNext(Coll<T>& c, T tFromString(string))
{
    T t;
    return t;
}

template <typename T>
T collNext(Coll<T>& c, bool& endOfColl, T tFromString(string))
{
    T t;
    return t;
}

template <typename T>
void collReset(Coll<T>& c)
{
}

#endif
