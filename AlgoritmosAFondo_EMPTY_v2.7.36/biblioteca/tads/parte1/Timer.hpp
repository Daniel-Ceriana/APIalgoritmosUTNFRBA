
#ifndef _TTIMER_
#define _TTIMER_

#include "../../../biblioteca/funciones/millis.hpp"

struct Timer
{
    long long tsInicial;
    long long tsFinal;
};

// funcion de inicializacion
Timer timer()
{
    Timer t;
    return t;
}

// instante inicial (i)
void timerStart(Timer& t)
{
    t.tsInicial = currTimeMillis();
}

// instante final (f)
void timerStop(Timer& t)
{
    t.tsFinal = currTimeMillis();
}

// retorna el tiempo transcurrido entre f e i,
// expresado en milisegundos
long long timerElapsedTime(Timer t)
{
    return t.tsFinal - t.tsInicial ;
}

#endif
