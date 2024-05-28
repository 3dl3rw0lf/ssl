 /******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.0
 * Date: 2024-05-27 19:49:23
 * Identificación de errores Ejercicio 60 REGEX 1
 * Error identification Exercise 60 REGEX 1
 ******************************************************************************/
 function expresion(){
     let la_expre = /^(.+\@.+\..+)$/ ;
     // let texto = "militar"; // cadena inválida
     let texto = ["correo", "correo@", "correo@correo", "correo@correo.", "correo@correo.com"];
     texto.map(t =>{
         if (la_expre.test(t))
             console.log(`La cadena "${t}" es válida`);
         else
             console.log(`La cadena "${t}" es inválida`);
         }
     )

 }

 expresion();