/******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.0
 * Date: 2024-05-26 10:14:51
 * Identificación del error Ejercicio 56 a
 * Error identification Exercise 56 a
 ******************************************************************************/
#define VERSIÓN 1
#include <iostream>
using namespace std;
char *ss( char *s ) {
    return s;
}
int main(){
    if (VERSIÓN > 0)
        cout<<"Hello "<<ss("world")<<endl;
}