## TRABAJO PRÁCTICO

# A. ALFABETOS, CADENAS Y LENGUAJES

1. Sea el vocabulario $V = \lbrace 1, 2 \rbrace$. Indique cinco de las cadenas pertenecientes a $V^*$ y $V^+$​​.

   Realizado por Julio Monetti

   Las cadenas en $V^*$ están compuestas por todas las cadenas del universo, incluida la cadena vacía. A esto lo llamamos el **universo de Kleene**. Como los elementos del vocabulario son $1$ y $2$, a continuación listamos algunas palabras de este universo.

   $\lambda$, $1$, $1111$, $22221$

   Por otro lado, las cadenas en $V^+$, o *clausura positiva*, están compuestas por todos los elementos del **universo del Kleene**, pero sin la palabra vacía. Algunas cadenas en esta clausura son:

   $1$, $2$, $11$, $1112$, $2222$

2. Sean los vocabularios $V = \lbrace i, x\rbrace$ y $W = \lbrace i, v, c \rbrace$. Defina por extensión:

   a) $V^3 = \lbrace iii, iix, ixi, ixx, xii, xix, xxi, xxx \rbrace$​

   $V^3$ es el conjunto de todas las posibles cadenas de longitud 3 que se puede obtener utilizando los símbolos del vocabulario $V$.

   b) $W^* = \lbrace \lambda, i, v, c, iv, ic, vvc, ccv, iic, ...\rbrace$

   $W^*$ es el *cierre* o *clausura*, que se forma por la unión del *cierre* o *clausura positiva* a la cadena vacía $(\lambda-\epsilon)$

   c) $V \cdot W = \lbrace ii, iv, ic, xi, xv, xc \rbrace$

   $V \cdot W$ es el conjunto de todas las posibles cadenas formadas por los elementos del vocabulario $V$ seguidas por los símbolos de $W$.

3. Sean $A$ y $B$ dos lenguajes, formados por las cadenas: $A = \lbrace hola, adios \rbrace$ y $B = \lbrace casa \rbrace$ , entonces indicar el resultado de la operación de concatenación $ A \cdot B$​ 

   $A \cdot B = \lbrace holacasa, adioscasa \rbrace$

4. Sea $A$ los lenguajes formados por:  $A = \lbrace ab \rbrace$ entonces indicar el resultado de las operaciones: $A^0$, $A^1$, $A^2$, $A^3$. 

   $A^0 = \lbrace \lambda\rbrace$

   $A^1 = \lbrace ab\rbrace$

   $A^2 = \lbrace abab\rbrace$

   $A^3 = \lbrace ababab\rbrace$

5. Sean $A$ y  $B$ lenguajes sobre el alfabeto $\sum$ formados  $A = \lbrace a, b, c, d, e \rbrace$ y $B=\lbrace 0,1,2,3,4 \rbrace$ indicar el resultado de $A \cup B$.

   $A \cup B = \lbrace a, b, c, d, e, 0, 1, 2, 3, 4\rbrace$​

   $A \cup B$ es el conjunto formado por todas las palabras que pertenezcan a los lenguajes $A$ y $B$.

6. Sean $A$ y  $B$ lenguajes sobre el alfabeto $\sum$ formados  $A = \lbrace a, b, c, d, e \rbrace$ y $B=\lbrace 0,1,2,3,4 \rbrace$ indicar el resultado de $A \cap B$.

   $A \cap B = \lbrace \emptyset\rbrace$​

   $A \cap B $ es el conjunto de todas las palabras que pertenecen a ambos lenguajes, en este caso no existen palabras por lo que el conjunto obtenido es el $ \lbrace \emptyset\rbrace$.​

7. Sea $A = \lbrace hola, raro\rbrace$, entonces indicar el resultado de  $A^R$ o $A^{-1}$ 

   $A^R =  A^{-1}= \lbrace raro, hola\rbrace$​​

   $A^R$ o  $A^{-1}$ indican que se debe aplicar la **reflexión** a $A$.

 8. Sea $\lbrace 000 \rightarrow 010, 10 \rightarrow 01\rbrace$ para la palabra $1010$​, obtenga las derivaciones a derecha.

    Realizado por Pablo Wilkinson

    Una derivación es una secuencia de cadenas de símbolos (llamadas formas sentenciales ) en la que cada cadena es resultado de la aplicación de una regla de la gramática a la cadena anterior. Una derivación válida es aquella en la que la primera cadena de la secuencia es el símbolo inicial y la última es una cadena de terminales.

    Sea la gramática $G = \lbrace ( VN= \lbrace S, B, C\rbrace, VT = \lbrace a, b, bas, big, boss, c\rbrace), S, P = \lbrace S \rightarrow ...\rbrace)$

    Con $P$:

    $S \rightarrow a\space B \space C$

    $B \rightarrow b \space bas$

    $B \rightarrow big \space C \space boss$

    $C \rightarrow \lambda$

    $C \rightarrow c$

    Ejemplo uno: derivación por derecha

    $S \implies a \space B \space \underline{C} \implies a \space \underline{B} \space c \implies a\space big \space \underline{C }\space boss \space c\implies a\space big \space boss \space c$ 

    Ejemplo dos: derivación por izquierda

    $A \implies a\space \underline{B}\space C \implies a \space b \space bas \space \underline{C}\implies a \space b \space bas$

    En el ejemplo uno, la derivación se dice que es una derivación por derecha, por que siempre se deriva el **<u>no terminal situado</u>** más a la derecha. En el ejemplo dos es una derivación por la izquierda.

    Caso:

    ► Sea $\lbrace 000 \rightarrow 010, 10 \rightarrow 01\rbrace$ para la palabra $1010$, obtenga las derivaciones a derecha.

    Tengo que derivar por la derecha, entonces busco el *no terminal situado más a la derecha*.

    Por derecha: $10\underline{10} \rightarrow \underline{10}01 \rightarrow 0\underline{10}1 \rightarrow 0011$
            $b \space b \space b$

    Entonces obtengo la cadena: $0011$

 9. Sea $\lbrace 000 \rightarrow 010, 10 \rightarrow 01\rbrace$ para la palabra $1000$, obtenga las derivaciones a izquierda.

    Por izquierda: $\underline{10}00 \rightarrow 0\underline{10}0 \rightarrow 00\underline{10} \rightarrow \underline{000}1 \rightarrow 0\underline{10}1 \rightarrow 0011$
            $b \space b \space b \space a \space b$  

10. Se la palabra $zxu$ si se aplica $\lbrace x \rightarrow vv \rightarrow, zv \rightarrow u\rbrace$ indicar la palabra que se obtiene al aplicar derivación por derecha.

    Por derecha: $z\underline{x}u \rightarrow \underline{zv}vu \rightarrow uvu$

    $a \space b$

11. Sea la gramática $G_1$ y la palabra $0B1$, indicar lo que se obtiene al aplicar $B \rightarrow 0A0$

    $0\underline{B}1 \rightarrow 00A01$

12. Para el caso anterior indicar la secuencia de palabras que se obtienen hasta que ya no sea posible aplicar la regla.

    $0\underline{B}1 \rightarrow 00A01$​
    
    Se obtiene la misma palabra ya que es imposible aplicar nuevamente la regla $B \rightarrow 0A0$.
