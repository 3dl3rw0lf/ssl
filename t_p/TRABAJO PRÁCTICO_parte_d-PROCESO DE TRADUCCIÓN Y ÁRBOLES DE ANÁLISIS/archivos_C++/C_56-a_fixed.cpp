/******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.1
 * Date: 2024-05-26 13:22:51
 * Correción del error Ejercicio 56 a
 * Error correction Exercise 56 a
 ******************************************************************************/
#define VERSION 1
#include <iostream>
using namespace std;
const char *ss(const char *s ) {
    return s;
}
int main(){
    if (VERSION > 0)
        cout<<"Hello "<<ss("world")<<endl;
}