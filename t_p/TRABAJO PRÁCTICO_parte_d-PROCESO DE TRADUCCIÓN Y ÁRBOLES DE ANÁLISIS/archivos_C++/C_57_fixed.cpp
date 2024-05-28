/******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.1
 * Date: 2024-05-26 16:01:07
 * Corrección de errores Ejercicio 57
 * Error correction Exercise 57
 ******************************************************************************/
#include <iostream>
using namespace std;
#include <malloc.h>
typedef const char* PtrChar; // typedef
typedef PtrChar* PtrPtrChar;
PtrPtrChar copia(PtrChar a, PtrChar b) { // PtrPtrChar copia
    PtrPtrChar p = (PtrPtrChar) malloc(sizeof(PtrChar) * 2);
    p[0] = a;
    p[1] = b;
    return p;
}
int main() {
    PtrPtrChar mc = copia( "Novedades", "Mayormente" );
    PtrPtrChar hny = copia( "Similaridad", "Algunas veces" ); // PrtPtrChar hny
    cout<< mc[0]<< mc[1]<<endl;
    cout<<hny[0]<< hny[1]<<endl; // <<
}