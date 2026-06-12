#ifndef FECHA_H
#define FECHA_H

#include <string>

#include "../../funciones/millis.hpp"

using std::string;
using std::to_string;

// ============================
// Estructura
// ============================

struct Fecha
{
    int anio, mes, dia, hora, min, seg, ms;
};

Fecha fecha(long long ts)
{
    Fecha f;
    int anio, mes, dia, h, m, s, ms;
    millisToAttributes(ts, anio, mes, dia, h, m, s, ms);
    f = {anio, mes, dia, h, m, s, ms};

    return f;
}

Fecha fecha()
{
    Fecha f = fecha(currTimeMillis());
    return f;
}

Fecha fecha(int anio, int mes, int dia, int hora, int min)
{
    // 2026,5,25,13,30
    Fecha f = fecha(attributesToMillis(anio, mes, dia, hora, min, 0, 0));

    return f;
}

Fecha fecha(int anio, int mes, int dia)
{
    Fecha f = fecha(anio, mes, dia, 0, 0);
    return f;
}

long long fechaInMillis(Fecha f)
{
    return attributesToMillis(f.anio, f.mes, f.dia, f.hora, f.min, f.seg, f.ms);
}

Fecha fechaAddSegundos(Fecha ff, int n)
{
    Fecha f;

    long long ts = fechaInMillis(ff);
    n = n * 1000;
    ts = ts + n;

    f = fecha(ts);

    return f;
}

Fecha fechaAddMinutos(Fecha ff, int n)
{
    Fecha f;
    n = n * 60;
    f = fechaAddSegundos(ff, n);
    return f;
}

Fecha fechaAddHoras(Fecha ff, int n)
{
    Fecha f;
    n = n * 60;
    f = fechaAddMinutos(ff, n);
    return f;
}

Fecha fechaAddDias(Fecha ff, int n)
{
    Fecha f;
    n = n * 24;
    f = fechaAddHoras(ff, n);
    return f;
}

long long fechaDiffMillis(Fecha a, Fecha b)
{
    // long long attributesToMillis(int y, int mo, int d, int h, int mi, int s,
    // int ms)

    long long millisA =
        attributesToMillis(a.anio, a.mes, a.dia, a.hora, a.min, a.seg, a.ms);
    long long millisB =
        attributesToMillis(b.anio, b.mes, b.dia, b.hora, b.min, b.seg, b.ms);

    return abs(millisA - millisB);
}

int fechaDiffDias(Fecha a, Fecha b)
{
    long long diff = fechaDiffMillis(a, b) / (86400000);

    int diffEnDias = (int)diff;
    return diffEnDias;
}

int fechaCmp(Fecha a, Fecha b)
{
    long long millisA =
        attributesToMillis(a.anio, a.mes, a.dia, a.hora, a.min, a.seg, a.ms);
    long long millisB =
        attributesToMillis(b.anio, b.mes, b.dia, b.hora, b.min, b.seg, b.ms);
    int retorno = 1;

    if(millisA - millisB == 0)
    {
        retorno = 0;
    }
    if(millisA - millisB < 0)
    {
        retorno = -1;
    }

    return retorno;
}

int fechaCmpDiaMesAnio(Fecha f1, Fecha f2)
{
    Fecha fechaA = Fecha{f1.anio, f1.mes, f1.dia};
    Fecha fechaB = Fecha{f1.anio, f1.mes, f1.dia};

    return fechaCmp(fechaA, fechaB);
}

string fechaToString(Fecha f)
{
    // 25-5-2026, 0hs 20min 20seg 10ms.

    return to_string(f.dia) + "-" + to_string(f.mes) + "-" + to_string(f.anio) +
           "," + to_string(f.hora) + "hs " + to_string(f.min) + "min " +
           to_string(f.seg) + "seg " + to_string(f.ms) + "ms ";
}

bool fechaEsAnioBisiesto(int anio)
{
    bool retorno = false;
    if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
    {
        retorno = true;
    }
    return retorno;
}

bool fechaEsAnioBisiesto(Fecha f)
{
    bool retorno = fechaEsAnioBisiesto(f.anio);
    return retorno;
}

int fechaDiasEnMes(int mes, int anio)
{
    int retorno;

    // 30dias = 11,04,06,09
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        retorno = 30;
    }
    else if(mes == 2)
    {
        if(fechaEsAnioBisiesto(anio) == true)
        {
            retorno = 29;
        }
        else
            retorno = 28;
    }
    else
    {
        retorno = 31;
    }

    return retorno;
}
int fechaDiasEnMes(Fecha f)
{
    return fechaDiasEnMes(f.mes, f.anio);
}

int fechaDiaDelAnio(Fecha f)
{
    int retorno;

    Fecha anioAComparar = Fecha{f.anio, 1, 1};
    retorno = fechaDiffDias(f, anioAComparar) + 1;

    return retorno;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
bool fechaEsValida(Fecha f)
{
    bool retorno = false;
    // attributesToMillis(b.anio, b.mes, b.dia, b.hora, b.min, b.seg, b.ms);

    if(f.mes > 0 && f.dia > 0 && f.hora >= 0 && f.min >= 0 && f.seg >= 0 &&
       f.ms >= 0)
    {
        if(f.mes <= 12)
        {
            if(f.dia <= fechaDiasEnMes(f))
            {
                if(f.hora <= 24)
                {
                    if(f.min <= 60)
                    {
                        if(f.seg <= 60)
                        {
                            if(f.ms <= 1000)
                            {
                                retorno = true;
                            }
                        }
                    }
                }
            }
        }
    }

    return retorno;
}

// =================
// Setters y getters
// =================

int fechaGetDia(Fecha f)
{
    return f.dia;
}
int fechaGetAnio(Fecha f)
{
    return f.anio;
}

int fechaGetMes(Fecha f)
{
    return f.mes;
}


int fechaGetHora(Fecha f)
{
    return f.hora;
}

int fechaGetMinuto(Fecha f)
{
    return f.min;
}

int fechaGetSegundo(Fecha f)
{
    return f.seg;
}

void fechaSetAnio(Fecha& f, int anio)
{
    f.anio = anio;
}

void fechaSetMes(Fecha& f, int mes)
{
    f.mes=mes;
}

void fechaSetDia(Fecha& f, int dia)
{
    f.dia=dia;
}

void fechaSetHora(Fecha& f, int hora)
{
    f.hora = hora;
}

void fechaSetMinuto(Fecha& f, int minuto)
{
    f.min =minuto; 
}

void fechaSetSegundo(Fecha& f, int segundo)
{
    f.seg = segundo; 
}

int fechaGetMillis(Fecha f){
    return f.ms;
}
void fechaSetMillis(Fecha& f,int x){
    f.ms = x;
}


#endif  // FECHA_H