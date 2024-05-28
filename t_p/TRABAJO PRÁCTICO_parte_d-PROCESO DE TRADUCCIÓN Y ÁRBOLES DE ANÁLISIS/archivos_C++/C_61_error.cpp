/******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.0
 * Date: 2024-05-28 16:21:57
 * Detección de errores Ejercicio 61
 * Error detection Exercise 61
 ******************************************************************************/
#include <iostream>
using namespace std;
#include <malloc.h>
#include <string.h>
typedef char *PtrChar;
typedefPtrChar *PtrPtrChar; // typedef PtrChar
PtrPtrCharcopia(PtrChar a, PtrChar b) { // PrtPrtChar copia
    PtrPtrChar p = (PtrPtrChar) malloc(sizeof(PtrChar) * 2);
    strcpy(p[0], a);
    strcpy(p[1], b);
    return p;
}
intmain() { // int main
    PtrPtrChar mc = copia( "Novedades", "Mayormente" );
    PtrPtrCharhny = copia( "Similaridad", "Algunas veces" ); // PrtPtrChar hny
    cout<<mc[0], mc[1] <<endl; // mc[0] << mc[1]
    cout<<hny[0], hny[1] <<endl; // hny[0] << hny[1]
    return 0;
}