/******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.0
 * Date: 2024-05-26 13:36:07
 * Identificación del error Ejercicio 56 b
 * Error identification Exercise 56 b
 ******************************************************************************/
#include <iostream>
using namespace std;
int an[4] = { 1, 2, 3, 4 };
int sum( int a[4] ) {
    int limit = sizeof(int)*4 / sizeof(int);
    result = 0; // result no está declarado
    for( int i = 0; i < limit; i++ )
        result += a[i];
    return result;
}
int main(){
    cout<< sum( an ) <<endl;
}