/******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.1
 * Date: 2024-05-26 14:02:25
 * Corrección del error Ejercicio 56 b
 * Error correction Exercise 56 b
 ******************************************************************************/
#include <iostream>
using namespace std;
int an[4] = { 1, 2, 3, 4 };
int sum( int a[4] ) {
    int limit = sizeof(int)*4 / sizeof(int);
    int result = 0; // declaración e inicialización de la varible result
    for( int i = 0; i < limit; i++ )
        result += a[i];
    return result;
}
int main(){
    cout<< sum( an ) <<endl;
}