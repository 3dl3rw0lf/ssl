/******************************************************************************
* Author: Gustavo Adolfo Arauz
 * version: 0.1.1
 * Date: 2024-05-25 19:15:14
 * Corrección de error Ejercicio 55 b
 * Error correction Exercise 55 b
 ******************************************************************************/
#include <iostream>
using namespace std;
int i = 0;  // Initialize i to 0
void foo(){
    cout<< i++<<endl;
}
int main() {
    int j;
    for (j = 0; j < 10; j++) foo();
}