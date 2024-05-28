/******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.0
 * Date: 2024-05-26 14:42:07
 * Identificación del error Ejercicio 57
 * Error identification Exercise 57
 ******************************************************************************/
#include <iostream>
using namespace std;
#include <malloc.h>
Typedef const char* PtrChar;
typedef PtrChar* PtrPtrChar;
PtrPtrCharcopia(PtrChar a, PtrChar b) {
    PtrPtrChar p = (PtrPtrChar) malloc(sizeof(PtrChar) * 2);
    p[0] = a;
    p[1] = b;
    return p;
}
intmain() {
    PtrPtrChar mc = copia( "Novedades", "Mayormente" );
    PtrPtrCharhny = copia( "Similaridad", "Algunas veces" );
    cout<< mc[0]<< mc[1]<<endl;
    cout<<hny[0], hny[1] <<endl;
}