## TRABAJO PRÁCTICO

# A. ALFABETOS, CADENAS Y LENGUAJES

1. Sea el vocabulario $V = \lbrace 1, 2 \rbrace$. Indique cinco de las cadenas pertenecientes a $V^*$ y $V^+$​.

   Las cadenas en $V^*$ están compuestas por todas las cadenas del universo, incluida la cadena vacía. A esto lo llamamos el **universo de Kleene**. Como los elementos del vocabulario son $1$ y $2$, a continuación listamos algunas palabras de este universo.

   "$\lambda$", "$1$", "$1111$", "$22221$"

   Por otro lado, las cadenas en $V^+$, o *clausura positiva*, están compuestas por todos los elementos del **universo del Kleene**, pero sin la palabra vacía. Algunas cadenas en esta clausura son:

   "$1$", "$2$", "$11$", "$1112$", "$2222$"

2. Sean los vocabularios $V = \lbrace i, x\rbrace$ y $W = \lbrace i, v, c \rbrace$. Defina por extensión:

   a) $V^3$

   b) $W^*$

   c) $V \cdot W = \lbrace ii, iv, ic, xi, xv, xc \rbrace$

3. Sean $A$ y $B$ dos lenguajes, formados por las cadenas: $A = \lbrace hola, adios \rbrace$ y $B = \lbrace casa \rbrace$ , entonces indicar el resultado de la operación de concatenación $ A \cdot B$​ 

   $A \cdot B = \lbrace holacasa, adioscasa \rbrace$

4. Sea $A$ los lenguajes formados por:  $A = \lbrace ab \rbrace$ entonces indicar el resultado de las operaciones: $A^0$, $A^1$, $A^2$, $A^3$. 

   $A^0 = \lbrace \lambda\rbrace$
   $A^1 = \lbrace ab\rbrace$
   $A^2 = \lbrace abab\rbrace$
   $A^3 = \lbrace ababab\rbrace$

5. Sean $A$ y  $B$ lenguajes sobre el alfabeto $\sum$ formados  $A = \lbrace a, b, c, d, e \rbrace$ y $B=\lbrace 0,1,2,3,4 \rbrace$ indicar el resultado de $A \cup B$.

   $A \cup B = \lbrace a, b, c, d, e, 0, 1, 2, 3, 4\rbrace$

6. Sean $A$ y  $B$ lenguajes sobre el alfabeto $\sum$ formados  $A = \lbrace a, b, c, d, e \rbrace$ y $B=\lbrace 0,1,2,3,4 \rbrace$ indicar el resultado de $A \cap B$.

   $A \cap B = \lbrace \lambda\rbrace$

7. Sea $A = \lbrace hola, raro\rbrace$, entonces indicar el resultado de  $A^R$ o $A^{-1}$ 
   $A^R =  A^{-1}= \lbrace raro, hola\rbrace$

 8. Sea $\lbrace 000 \rightarrow 010, 10 \rightarrow 01\rbrace$ para la palabra "$1010$", obtenga las derivaciones a derecha.
    Por derecha: $10\underline{10} \rightarrow \underline{10}01 \rightarrow 0101$
            $b \space b$​

 9. Sea $\lbrace 000 \rightarrow 010, 10 \rightarrow 01\rbrace$ para la palabra "$1000$", obtenga las derivaciones a izquierda.
    Por izquierda: $\underline{10}00 \rightarrow 0\underline{10}0 \rightarrow 00\underline{10} \rightarrow \underline{000}1 \rightarrow 0\underline{10}1 \rightarrow 0011$
            $b \space b \space b \space a \space b$  

10. Se la palabra "$zxu$" si se aplica $\lbrace x \rightarrow vv \rightarrow, zv \rightarrow u\rbrace$ indicar la palabra que se obtiene al aplicar derivación por derecha.
    Por derecha: $z\underline{x}u \rightarrow \underline{zv}vu \rightarrow uvu$

    $a \space b$

11. Sea la gramática $G_1$ y la palabra $0B1$, indicar lo que se obtiene al aplicar $B \rightarrow 0A0$

    $0\underline{B}0 \rightarrow 00A00$

12. Para el caso anterior indicar la secuencia de palabras que se obtienen hasta que ya no sea posible aplicar la regla.

