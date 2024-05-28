 /******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.1
 * Date: 2024-05-26 21:18:39
 * Corrección de errores Ejercicio 59-b
 * Error correction Exercise 59-b
 ******************************************************************************/
 function llamar(){
     var x, y;
     y = 3;
     x = 12;
     y += x;     //La operación =+ solo asigna el valor de la variable `x` la variable `y`, la operación correcta para suma y asignación es +=
     console.log(y);
 }
 llamar();