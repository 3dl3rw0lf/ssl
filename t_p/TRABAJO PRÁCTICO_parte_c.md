# MÁQUINAS SECUENCIAS Y AUTÓMATAS

31. Para el siguiente autómata determine la expresión normal (regular) y su equivalente en notación BNF:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_31.png" style="zoom:33%;" />

    Realizado en clase:

    *Expresión regular*: $ae^{*}b(ceb)^{*}$

    #### *BNF*: 

    $<q_i>::= a\rightarrow <q>$

    $<q>::= e\rightarrow <q>$

    $<q>::= b\rightarrow <q_j>$

    $<q_j>::= c\rightarrow <q>$​

    ---

    Realizado por:

    Expresión Normal o Regular: $a(e|bc)^{*}b$ 

    Si $q_j$ es el *estado final*.

    **Notación BNF**

    $q_i::=\text{'a'}<q>$

    $q::=\text{'e'}<q>|\text{'b'}<q_j>|\text{b}$

    $q_j::=\text{'c'}<q>$

32. Para la siguiente expresión: $A.((A|B).C)^{*}.C$​​ construya el *AEFD*. Realice la descripción en forma gráfica, funcional y tabular.

    *Forma tabular*

    |      | A     | B     | C     |
    | ---- | ----- | ----- | ----- |
    | q0   | $q_1$ |       |       |
    | q1   | $q_2$ | $q_2$ |       |
    | q2   |       |       | $q_1$ |
    | q1   |       |       | $q_3$ |

    *Forma funcional*

    $f(q_0,A)\rightarrow q_1$

    $f(q_1,A)\rightarrow q_2$

    $f(q_1,B)\rightarrow q_2$

    $f(q_2,C)\rightarrow q_1$

    $f(q_1,C)\rightarrow q_3$​

    *Forma gráfica*

    <img src="D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_32.png" alt="exercise_32" style="zoom:33%;" />

    ---

    Realizado por: **Julio Monetti**

    <img src="C:\Users\xang_\AppData\Roaming\Typora\typora-user-images\image-20240505155526599.png" alt="image-20240505155526599" style="zoom:49%;" />

    $Q = \lbrace 1,2,3,4\rbrace$

    $F = \lbrace 4 \rbrace$

    Expresamos en forma funcional las transiciones observadas en el autómata. Por ejemplo:

    $f(1,A)=3$

    indica que estando en el estado **1** se transita al estado **3**, con la lectura de **$A$**. De la misma forma se completan las funciones restantes:

    $f(2,A)= 3$

    $f(2,B)= 3$

    $f(2,C)= 4$

    $f(3,C)= 2$

    Estas funciones pueden ser volcadas en una matriz (forma matricial). En la matriz también se pueden visualizar las diferentes transiciones entre estados. Para ello se confecciona la matriz, listando por columna (en la primer fila) los diferencias símbolos que pueden ser leídos, y por filas ( en la primer columna) listando los diferencias estados que presenta el autómata.

    Por último en el centro de la matriz, se indican las diferentes transiciones posibles. Por ejemplo:

    Si desde **1** se puede transitar a **2**, leyendo **$A$**. Se coloca el estado destino **2** en la intersección de la fila/estado **1** y la columna/símbolo $A$, como sigue:

    |      | $A$  | $B$  | $C$  |
    | ---- | ---- | ---- | ---- |
    | $1$  | $2$  | -    | -    |
    | $2$  | $3$  | $3$  | $4$  |
    | $3$  | -    | -    | $2$  |
    | $4$  | -    | -    | -    |

     Por último, se listan todas las relaciones posibles.

33. Sea la expresión regular: $a^{*}.b.a^{*}.b.(a|b)^{*}$​ construya el *AEFD*. Realice la descripción en forma gráfica, funcional y tabular.

    *Forma gráfica*

    <img src="D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_33.png" alt="exercise_33" style="zoom:33%;" />

    *Forma funcional*

    $f(q_0,a) \rightarrow q_0$

    $f(q_0, b) \rightarrow q_1$

    $f(q_1,a) \rightarrow q_1$

    $f(q_1, b) \rightarrow q_2$

    $f(q_2,a) \rightarrow q_2$

    $f(q_2, b) \rightarrow q_2$

    *Forma tabular*

    |       | a     | b     |
    | ----- | ----- | ----- |
    | $q_0$ | $q_0$ | $q_1$ |
    | $q_1$ | $q_1$ | $q_2$ |
    | $q_2$ | $q_2$ | $q_2$ |

    

34. Determine la expresión regular para: $\lbrace S \rightarrow bA, S \rightarrow aB, A \rightarrow aS, B \rightarrow bS\rbrace$​

    <img src="D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_34.png" alt="exercise_34" style="zoom:33%;" />

    Realizado en clase:

    $(ba|ab)^{+}$

    $(a|b).(a|b)^{+}$​

35. Describa el autómata para la siguiente gramática $G=\lbrace \lbrace S,A,B,C\rbrace,\lbrace x,y\rbrace, S, P\rbrace$ donde $P=\lbrace S\rightarrow xA, S\rightarrow yB, A \rightarrow xC, A \rightarrow yA, A\rightarrow \lambda, B \rightarrow xC, B\rightarrow yB, B \rightarrow \lambda, C \rightarrow \lambda \rbrace$

    ---

    Realizado por: **Pablo Wilkinson**

    <img src="D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_35.png" alt="exercise_35" style="zoom:33%;" />

    Aclaración:

    Cuando se indica que $A \rightarrow \lambda$, $B \rightarrow \lambda$, $C \rightarrow \lambda$ significa que los estados $A$,$B$, y $C$ del *AF* deberán ser finales, por tanto, marcados con doble círculo concéntrico.

36. Dada la siguiente especificación, dibuje el autómata:

    $L_1=\lbrace a^{n}cb^{m}/n \gt0\space \wedge \space m \geq 0\rbrace$ 

    $M=\lbrace Q, \Sigma, f, e_0, F\rbrace$

    $Q=\lbrace e_0, e_1, e_2\rbrace$

    $\Sigma= \lbrace a,b,c\rbrace$

    $e_i=e_0$

    $F=\lbrace e_2\rbrace$

    Ejemplos de cadena generadas

    |                         | $a^n$ | c    | $b^m$     |
    | ----------------------- | ----- | ---- | --------- |
    | $ n = 1  \wedge  m = 0$ | $a$   | $c$  | $\lambda$ |
    | $n = 1 \wedge m = 1$    | $a$   | $c$  | $b$       |
    | $n = 2 \wedge m = 0$    | $aa$  | $c$  | $\lambda$ |
    | $n = 2 \wedge m = 1$    | $aa$  | $c$  | $b$       |
    | $n = 2 \wedge m = 2$    | $aa$  | $c$  | $bb$      |

    <img src="D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_36.png" alt="exercise_36" style="zoom:33%;" />

37.  Obtenga el *AFD* equivalente para el *AFND*, dibuje el autómata *AFD* indicando a cuáles nodos del *AFND* representa cada nodo. Describa la tabla completa de transiciones $P(Q)$.

     <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_37.png" alt="exercise_37" style="zoom:70%;" />

     <img src="D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_37.png" alt="exercise_37" style="zoom:70%;" />

     Realizado por: **Mauricio Fariello**

     Tabla completa de transiciones $P(Q)$

     | $P(Q)$                | $a$                   | $b$                   |
     | --------------------- | --------------------- | --------------------- |
     | ~~$\lbrace \rbrace$~~ | ~~$\lbrace \rbrace$~~ | ~~$\lbrace \rbrace$~~ |
     | $ \rightarrow q_0$    | $q_0q_1$              | $q_0$                 |
     | ~~$q_1$~~             | ~~$q_1$~~             | ~~$q_2$~~             |
     | ~~$*q2$~~             | ~~$q_1q_2$~~          | -                     |
     | $q_0q_1$              | $q_0q_1$              | $q_2$                 |
     | ~~$q_1q_2$~~          | ~~$q_1q_2$~~          | ~~$q_2$~~             |
     | $*q_0q_2$             | $q_0q_1q_2$           | $q_0$                 |
     | $*q_0q_1q_2$          | $q_0q_1q_2$           | $q_0q_2$              |

     ***Autómata AFD equivalente***

     <img src="D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_37_r.png" alt="exercise_37_r" style="zoom:56%;" />

     Explicación:

     + Los siguientes son los pasos para armar el *AFD* partiendo de un *AFND* utilizando la *Tabla de transiciones* completa

       1. Armar la tabla de transición del autómata (sin lambda si la hubiese).
     
          | $P(Q)$            | $a$               | $b$               |
          | ----------------- | ----------------- | ----------------- |
          | $\lbrace \rbrace$ | $\lbrace \rbrace$ | $\lbrace \rbrace$ |
          | ►$q_0$            | $q_0q_1$          | $q_0$             |
          | $q_1$             | $q_1$             | $q_2$             |
          | $*q_2$            | $q_1q_2$          | -                 |

       2. Completar la tabla con la "*tabla completa*" de transición del Autómata: agregar un fila con cada subconjunto de estados combinados y completar las celdas con los estados alcanzables. Incluir en la primera fila el estado de "*captación global*".
     
          | $P(Q)$            | $a$               | $b$               |
          | ----------------- | ----------------- | ----------------- |
          | $\lbrace \rbrace$ | $\lbrace \rbrace$ | $\lbrace \rbrace$ |
          | $►q_0$            | $q_0q_1 $         | $q_0$             |
          | $q_1$             | $q_1$             | $q_2$             |
          | $*q_2$            | $q_1q_2$          | -                 |
          | $q_0q_1$          | $q_0q_1$          | $q_0q_2$          |
          | $q_1q_2$          | $q_1q_2$          | $q_2$             |
          | $q_0q_2$          | $q_0q_1q_2$       | $q_0$             |
          | $q_0q_1q_2$       | $q_0q_1q_2$       | $q_0q_2$          |

       3. Marcar como estados finales todo aquel subconjunto que tengan algún estado final en sus filas.
     
          | $P(Q)$            | $a$               | $b$               |
          | ----------------- | ----------------- | ----------------- |
          | $\lbrace \rbrace$ | $\lbrace \rbrace$ | $\lbrace \rbrace$ |
          | $►q_0$            | $q_0q_1$          | $q_0$             |
          | $q_1$             | $q_1$             | $q_2$             |
          | $*q_2$            | $q_1q_2$          | -                 |
          | $q_0q_1$          | $q_0q_1$          | $q_0q_2$          |
          | $q_1q_2$          | $q_1q_2$          | $q_2$             |
          | $*q_0q_2$         | $q_0q_1q_2$       | $q_0$             |
          | $*q_0q_1q_2$      | $q_0q_1q_2$       | $q_0q_2$          |

       4. Eliminar las filas de los estados finales no alcanzables.
     
          | $P(Q)$              | $a$               | $b$               |
          | ------------------- | ----------------- | ----------------- |
          | ◄►$\lbrace \rbrace$ | $\lbrace \rbrace$ | $\lbrace \rbrace$ |
          | $►q_0$              | $q_0q_1$          | $q_0$             |
          | ◄►$q_1$             | $q_1$             | $q_2$             |
          | ◄►$*q_2$            | $q_1q_2$          | -                 |
          | $q_0q_1$            | $q_0q_1$          | $q_0q_2$          |
          | $q_1q_2$            | $q_1q_2$          | $q_2$             |
          | $*q_0q_2$           | $q_0q_1q_2$       | $q_0$             |
          | $*q_0q_1q_2$        | $q_0q_1q_2$       | $q_0q_2$          |

       5. Eliminar las filas de los estado alcanzados **solo** por los eliminados en el paso previo,
     
          | $P(Q)$              | $a$               | $b$               |
          | ------------------- | ----------------- | ----------------- |
          | ◄►$\lbrace \rbrace$ | $\lbrace \rbrace$ | $\lbrace \rbrace$ |
          | $►q_0$              | $q_0q_1$          | $q_0$             |
          | ◄►$q_1$             | $q_1$             | $q_2$             |
          | ◄►$*q_2$            | $q_1q_2$          | -                 |
          | $q_0q_1$            | $q_0q_1$          | $q_0q_2$          |
          | ◄►$q_1q_2$          | $q_1q_2$          | $q_2$             |
          | $*q_0q_2$           | $q_0q_1q_2$       | $q_0$             |
          | $*q_0q_1q_2$        | $q_0q_1q_2$       | $q_0q_2$          |

       6. De existir, eliminar las filas de los estados cuyas filas estén duplicadas. No hay en este ejercicio.

          Luego de eliminar todas las filas, la tabla nos queda así:
     
          | $P(Q)$       | $a$         | $b$      |
          | ------------ | ----------- | -------- |
          | $►q_0$       | $q_0q_1$    | $q_0$    |
          | $q_0q_1$     | $q_0q_1$    | $q_0q_2$ |
          | $*q_0q_2$    | $q_0q_1q_2$ | $q_0$    |
          | $*q_0q_1q_2$ | $q_0q_1q_2$ | $q_0q_2$ |

       7. Agrupar los estados con un nuevo nombre de estado y armar el grafo con la tabla resultante.

          $q_0 \rightarrow q_0$

          $q_0q_1 \rightarrow q_1$

          $q_0q_2 \rightarrow q_2$

          $q_0q_1q_2 \rightarrow q_3$
     
          | $P(Q)$ | $a$   | $b$   |
          | ------ | ----- | ----- |
          | $►q_0$ | $q1$  | $q_0$ |
          | $q_1$  | $q_1$ | $q_2$ |
          | $*q_2$ | $q_3$ | $q_0$ |
          | $*q_3$ | $q_3$ | $q_2$ |
          
          ![exercise_37_r](D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_37_r.png)
     
     + Los número dentro de los rectángulos de los nodos de *AFD* se encuentra indicando el o los nodos que representan el *AFND*. Por ejemplo, en el siguiente grafo el estado $q_1$ representa los estado $q_1$ y $q_2$. 
     
       <img src="C:\Users\xang_\AppData\Roaming\Typora\typora-user-images\image-20240509172127620.png" alt="image-20240509172127620" style="zoom:56%;" />
     


​     

38. Obtenga el *AFD* equivalente para el *AFND*, dibuje el autómata *AFD* indicando a cuáles nodos del *AFND* original representa cada nodo.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_38.png" style="zoom:33%;" />

    <img src="D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_38.png" style="zoom:33%;" />

    |                   | a                 |
    | ----------------- | ----------------- |
    | $\lbrace \rbrace$ | $\lbrace \rbrace$ |
    | ►$q_0$            | $q_1q_3$          |
    | ◄►$q_1$           | $q_2$             |
    | ◄►*$q_2$          | $q_1$             |
    | $q_3$             | -                 |
    | $q_0q_1$          | $q_1q_2q_3$       |
    | ◄►$q_0q_3$        | $q_1$             |
    | ◄►*$q_1q_2$       | $q_1q_2$          |
    | ◄►$q_1q_3$        | $q_2$             |
    | $q_0q_1q_3$       | $q_1q_2q_3$       |
    | *$q_0q_1q_2$      | $q_1q_2q_3$       |
    | *$q_1q_2q_3$      | $q_1q_2$          |

    

    |        | a      |
    | ------ | ------ |
    | >q0    | q1q3   |
    | q3     | -      |
    | q1     | q2~    |
    | q2*    | q1     |
    | q0q1   | q1q2~  |
    | q0q3   | q1     |
    | q1q2   | q1q2~  |
    | q1q3   | q1q2~  |
    | q0q1q2 | q1q2q3 |
    | q0q1q3 | q1q2~  |
    | q1q2q3 | q1q2~  |

    

39. Obtenga el autómata equivalente mínimo para:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_39.png" alt="exercise_39" style="zoom:33%;" />

    En clase:

    $NT=\lbrace q_1,q_2,q_5,q_6\rbrace$

    $T=\lbrace q_3,q_4\rbrace$​

    G1=q1q6 G2=q4 G3=q2 G4=q3 G5=q5

    |      | 0      | 1      |
    | ---- | ------ | ------ |
    | q1   | q2->NT | q3*->T |
    | q2   | q4*->T | -      |
    | q3*  | q5->NT | q6->NT |
    | q4   | q2->NT | -      |
    | q5   | q5->NT | q6->NT |
    | q6   | q2->NT | q3*->T |
    |      |        |        |

    

    $G_1=\lbrace q_1\rbrace \lbrace q_2,q_5,q_6\rbrace$

40. Obtenga el autómata equivalente mínimo. Indicar la secuencia de conjuntos obtenidos y dibujar el autómata resultante.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_40.png" style="zoom:33%;" />

    G=q0q1q2

    G1=q3q4q5q6q7q8

    G=q1 G1=q2 G2=q0

    G4=q3q4q5q6q7q8

41. Para el siguiente *AFND*, encuentre el *AFD* equivalente, dibuje el autómata *AFD* indicando a cuáles nodos del *AFND* original representa cada nodo.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_41.png" style="zoom:33%;" />

    

    NT= i,q0

    T= f

    |      | 0    | 1    |
    | ---- | ---- | ---- |
    | i    | i->n | i->n |
    | q0   | -    | f*   |
    | f    | -    | -    |
    |      |      |      |

    

42.  Obtenga el autómata equivalente mínimo. Indicar la secuencia de conjuntos partición obtenidos y dibujar el autómata resultante.

     <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_42.png" alt="exercise_42" style="zoom:33%;" />

     G=q0q1q2q3

     T=q4

     |      | a     | b     |
     | ---- | ----- | ----- |
     | q0   | q1->G | q2->G |
     | q1   | q1->G | q3->G |
     | q2   | q1->G | q2->G |
     | q3   | q1->  | q4->T |

     G=q0q1q2 G1=q3 por b

     T=q4

     |      | a     | b      |
     | ---- | ----- | ------ |
     | q0   | q1->G | q2->G  |
     | q1   | q1->G | q3->G1 |
     | q2   | q1->G | q2->G  |
     | q3   | q1->G | q4->T  |

     G=q0q2 G1=q1 G2=q3 por b

     T=q4

     |      | a      | b      |
     | ---- | ------ | ------ |
     | q0   | q1->G1 | q2->G  |
     | q1   | q1->G1 | q3->G2 |
     | q2   | q1->G1 | q2->G  |
     | q3   | q1->G1 | q4->T  |

     G=q0q2  G1=q1 G2= q3

     T=q4

     

     ## Convención a usar con los AP: los símbolos en la pila se insertan en sentido $\rightarrow$

43.  Definir el *APD* reconocedor para el siguiente lenguaje: $L = \lbrace a^{2n}b^{n}/n \geq 0\rbrace$

     1. por vaciado de pila.
     2. por alcance del estado final.
     3. vaciado de pila y alcance del estado final.

44.  Definir los *APD* equivalentes que reconocen $L= \lbrace 1^{n}0^{n-1}/n \gt 0\rbrace$ por:

     1. vaciado de pila.

     2. por alcance del estado final.

     3. vaciado de pila y alcance del estado final.

        La palabra más simple que tiene que reconocer el *APD* es cuando $n=1$, $1^10^{1-1} \rightarrow 1^10^0 \rightarrow 1$. Luego, las demás palabras tendrán un $0$ sera que la cantidad de $1$ en la palabra.

        1. Vaciado de pila

           ![exercise_44_empty_stack](D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_44_empty_stack.png)

        2. Alcance de estado final

        3. Vaciado de pila y alcance de estado final

45.  Definir los *APD* equivalentes que reconocen $L=\lbrace X^{n}Y^{n}/n \geq 0\rbrace$ por:

     1. vaciado de pila.

     2. alcance del estado final.

     3. vaciado de pila y alcance del estado final.

        La palabra más simple que se puede formar es cuando $n = 0$, $X^0Y^0 \rightarrow \lambda$, y luego, las palabras formadas tiene la misma cantidad de $X$  que de $Y$.

        1. vaciado de pila

           ![exercise_45_empty_stack](D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_45_empty_stack.png)

        2. alcance de estado final

           

        3. vaciado de pila y alcance del estado final

           ![exercise_45_final_state](D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_45_final_state.png)

46.  Defina el *APD* que reconoce el lenguaje $L= \lbrace x^{R}/R\space \text{es par} \gt 0\rbrace$ para la siguiente especificación:

     $A=\lbrace \Sigma_e, \Gamma, Q, a_0,q_0,F,f,g\rbrace$

     $\lbrace x \rbrace:\text{alfabeto de entrada}\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\lbrace x,$ # $\space\rbrace : \text{alfabeto de la pila}$

     $\lbrace q_0,q_1,q_2\rbrace:\text{conjunto de estados}\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space $# $\space : \text{símbolo inicial de la pila}$

     $\lbrace q_0\rbrace:\text{estado inicial}\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\lbrace q_2\rbrace : \text{estado final}$
     
     La cadena más simple generada es cuando $R = 2$, $x^2 \rightarrow xx$. Las cadenas siguientes estarán formadas por número pares de $x$.
     
     ![exercise_46_final_state_empty_stack](D:\UTN\ssl\TP_github\ssl\t_p\img\exercise_46_final_state_empty_stack.png)
