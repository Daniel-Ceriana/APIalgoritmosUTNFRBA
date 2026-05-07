
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

Fecha f = fecha(1900,2,2);
fechaSetAnio(f,1940);
cout<<fechaToString(f)<<endl;
    return 0;
}
