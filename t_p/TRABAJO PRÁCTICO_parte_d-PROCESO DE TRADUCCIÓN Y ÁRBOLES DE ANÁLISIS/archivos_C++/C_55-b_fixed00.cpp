/******************************************************************************
* Author: Gustavo Adolfo Arauz
 * version: 0.1.0
 * Date: 2024-05-25 18:14:40
 * Corrección de error Ejercicio 55 b
 * Error correction Exercise 55 b
 ******************************************************************************/
#include <iostream>
using namespace std;
void foo(){
    int i = 0;  // Initialize i to 0
    cout<< i++<<endl;
}
int main() {
    int j;
    for (j = 0; j < 10; j++) foo();
}