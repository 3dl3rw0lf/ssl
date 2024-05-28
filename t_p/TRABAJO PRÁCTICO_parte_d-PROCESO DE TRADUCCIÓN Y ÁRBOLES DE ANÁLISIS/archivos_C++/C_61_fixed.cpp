/******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.0
 * Date: 2024-05-28 16:21:57
 * Corrección de errores Ejercicio 61
 * Error correction Exercise 61
 ******************************************************************************/
#include <iostream>
using namespace std;
#include <malloc.h>
#include <string.h>
typedef char *PtrChar;
typedef PtrChar *PtrPtrChar; // typedef PtrChar
PtrPtrChar copia(PtrChar a, PtrChar b) { // PrtPrtChar copia
    PtrPtrChar p = (PtrPtrChar) malloc(sizeof(PtrChar) * 2);
    p[0] = (PtrChar) malloc(strlen(a) + 1); // Asignar memoria para la cadena de caracteres
    p[1] = (PtrChar) malloc(strlen(b) + 1); // Asignar memoria para la cadena de caracteres
    strcpy(p[0], a);
    strcpy(p[1], b);
    return p;
}
int main() { // int main
    PtrPtrChar mc = copia( "Novedades", "Mayormente" );
    PtrPtrChar hny = copia( "Similaridad", "Algunas veces" ); // PrtPtrChar hny
    cout<<mc[0] << " | " << mc[1] <<endl; // mc[0] << mc[1]
    cout<<hny[0] << " | " << hny[1] <<endl; // hny[0] << hny[1]
    // Liberar la memoria asignada
    free(mc[0]);
    free(mc[1]);
    free(hny[0]);
    free(hny[1]);
    free(mc);
    free(hny);
    return 0;
}