# MÁQUINAS SECUENCIAS Y AUTÓMATAS

31. Para el siguiente autómata determine la expresión normal (regular) y su equivalente en notación BNF:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_31.png" style="zoom:33%;" />

32. Para la siguiente expresión: $A.((A|B).C)^{*}.C$ construya el *AEFD*. Realice la descripción en forma gráfica, funcional y tabular.

33. Sea la expresión regular: $a^{*}.b.a^{*}.b.(a|b)^{*}$ construya el *AEFD*. Realice la descripción en forma gráfica, funcional y tabular.

34. Determine la expresión regular para: $\lbrace S \rightarrow bA, S \rightarrow aB, A \rightarrow aS, B \rightarrow bS\rbrace$

35. Describa el autómata para la siguiente gramática $G=\lbrace \lbrace S,A,B,C\rbrace,\lbrace x,y\rbrace, S, P\rbrace$ donde $P=\lbrace S\rightarrow xA, S\rightarrow yB, A \rightarrow xC, A \rightarrow yA, A\rightarrow \lambda, B \rightarrow xC, B\rightarrow yB, B \rightarrow \lambda, C \rightarrow \lambda$  

36. Dada la siguiente especificación, dibuje el autómata:

    $L_1=\lbrace a^{n}cb^{m}/n \gt0\space \and\space \geq0\rbrace$ 

    $M=\lbrace Q, \Sigma, f, e_0, F\rbrace$

    $Q=\lbrace e_0, e_1, e_2\rbrace$

    $\Sigma= \lbrace a,b,c\rbrace$

    $e_i=e_0$

    $F=\lbrace e_2\rbrace$

37.  Obtenga el *AFD* equivalente para el *AFND*, dibuje el autómata *AFD* indicando a cuáles nodos del *AFND* representa cada nodo. Describa la tabla completa de transiciones $P(Q)$.

     <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_37.png" alt="exercise_37" style="zoom:33%;" />

38. Obtenga el *AFD* equivalente para el *AFND*, dibuje el autómata *AFD* indicando a cuáles nodos del *AFND* original representa cada nodo.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_38.png" style="zoom:33%;" />

39. Obtenga el autómata equivalente mínimo para:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_39.png" alt="exercise_39" style="zoom:33%;" />

40. Obtenga el autómata equivalente mínimo. Indicar la secuencia de conjuntos obtenidos y dibujar el autómata resultante.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_40.png" style="zoom:33%;" />

41. Para el siguiente *AFND*, encuentre el *AFD* equivalente, dibuje el autómata *AFD* indicando a cuáles nodos del *AFND* original representa cada nodo.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_41.png" style="zoom:33%;" />

42.  Obtenga el autómata equivalente mínimo. Indicar la secuencia de conjuntos partición obtenidos y dibujar el autómata resultante.

     <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_42.png" alt="exercise_42" style="zoom:33%;" />

     ## Convención a usar con los AP: los símbolos en la pila se insertan en sentido $\rightarrow$

43.  Definir el *APD* reconocedor para el siguiente lenguaje: $L = \lbrace a^{2n}b^{n}/n \geq 0\rbrace$

     1. por vaciado de pila.
     2. por alcance del estado final.
     3. vaciado de pila y alcance del estado final.

44.  Definir los *APD* equivalentes que reconocen $L= \lbrace 1^{n}0^{n-1}/n \gt 0\rbrace$ por:

     1. vaciado de pila.
     2. por alcance del estado final.
     3. vaciado de pila y alcance del estado final.

45.  Definir los *APD* equivalentes que reconocen $L=\lbrace X^{n}Y^{n}/n \geq 0\rbrace$ por:

     1. vaciado de pila.
     2. alcance del estado final.
     3. vaciado de pila y alcance del estado final.

46.  Defina el *APD* que reconoce el lenguaje $L= \lbrace x^{R}/R \text{es par} \gt 0\rbrace$ para la siguiente especificación:

     $A=\lbrace \Sigma_e, \Gamma, Q, a_0,q_0,F,f,g\rbrace$

     $\lbrace x \rbrace:\text{alfabeto de entrada}\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\lbrace x,\#\rbrace : \text{alfabeto de la pila}$

     $\lbrace q_0,q_1,q_2\rbrace:\text{conjunto de estados}\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space \# : \text{símbolo inicial de la pila}$

     $\lbrace q_0\rbrace:\text{estado inicial}\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\lbrace q_2\rbrace : \text{estado final}$

     