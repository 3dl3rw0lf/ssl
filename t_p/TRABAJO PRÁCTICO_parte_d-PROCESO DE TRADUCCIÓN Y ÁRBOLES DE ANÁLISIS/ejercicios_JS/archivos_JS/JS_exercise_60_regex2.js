 /******************************************************************************
 * Author: Gustavo Adolfo Arauz
 * version: 0.1.1
 * Date: 2024-05-26 21:18:39
 * Corrección de errores Ejercicio 59-b
 * Error correction Exercise 59-b
 ******************************************************************************/
 /******************************************************************************
  * Author: Gustavo Adolfo Arauz
  * version: 0.1.0
  * Date: 2024-05-27 22:13:23
  * Identificación de errores Ejercicio 60 REGEX 2
  * Error identification Exercise 60 REGEX 2
  ******************************************************************************/
 function expresion(){
     let la_expre = /^([0-9\s\+\-])+$/
     // let texto = "militar"; // cadena inválida
     let texto = ["correo", " 257", "257", "-257", "+257", "257 +", "257+", "257-", "257 -", "257 + 752 +", "257+752+" ];
     texto.map(t =>{
             if (la_expre.test(t))
                 console.log(`La cadena "${t}" es válida`);
             else
                 console.log(`La cadena "${t}" es inválida`);
         }
     )

 }

 expresion();