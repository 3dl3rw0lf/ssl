 /******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.1
 * Date: 2024-05-26 19:53:57
 * Corrección de errores Ejercicio 59-a
 * Error correction Exercise 59-a
 ******************************************************************************/
 function multiplicar(x, y){
     var w = 0; // se inicializa en 0
     while (x <= y){ // while (x =< y) x++;  El símbolo de comparación menor o igual es <=
         w += x++; // se le asigna a la variable w el valor de la variable x en ese loop además se post-incrementa en 1 a la variable x
     }
     return( w); // w está indefinido
 }
 function ver(){
     console.log(multiplicar(2, 9));
 }

 ver();