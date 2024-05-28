<img class="img1" src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/encabezado" alt="image-20240526222853534" />

<img class="img2" src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/utn.png" alt="UTN" />

<style>
    .centrado {text-align: center;}
    .right {text-align: right;}
    .img1 {position: absolute; top: 1rem; z-index: 1;}
    .img2 {position: absolute; left: 2%; padding-top: 1.5rem; z-index: 10;}
    .mt{margin-top:14rem;}
    .steel_blue {color: SteelBlue;}
    .dodger_blue {color: DodgerBlue;}
    .black {color: black;}
    .font{font-size: 1rem;}
</style>



<h1 class="centrado dodger_blue mt">PROCESO DE TRADUCCIÓN Y ÁRBOLES DE ANÁLISIS</h1>

<p class="right steel_blue">Gustavo A. Arauz</p>



47. En base al documento con las reglas de sintaxis del lenguaje C (C-ANSI.pdf), dibuje los árboles de análisis para los siguientes enunciados, suponiendo análisis: 

    ```c
    while (x < y) 
    	if (x % 2 == 0) x = x + 1; 
    	elsex = x + 2;
    ```

    Realizado por: ***Pablo Wilkinson***

    Explicación: Deberá descargar el documento C-Ansi.pdf que se encuentra en el campus virtual. Luego buscará en el mismo cada una de las cláusulas del siguiente código C haciendo los reemplazos que corresponda a cada una de las regla de derivación del Lenguaje Ansi C.

    Nuestra primera sentencia del código C a analizar es : `while(x < y)`

    Deberá buscar la cláusula en la guía Ansi C, que es un *statement*

    `<Stm> ::= while '(' <Expr> ')' <Stm>;`

    Ahora buscará un `<Expr>`

    `<Expr> ::= <Expr> ',' <Op Assign> | <Op Assign>`

    `<Op Assign> ::= <Op If> '=' <Op Assign>`

    `| <Op If> '+=' <Op Assign>`

    `| <Op If> '-=' <Op Assign>`

    `| <Op If> '*=' <Op Assign>`

    `| <Op If> '/=' <Op Assign>`

    `| <Op If> '^=' <Op Assign>`

    `| <Op If> '&=' <Op Assign>`

    `| <Op If> '|=' <Op Assign>`

    `| <Op If> '>>=' <Op Assign>`

    `| <Op If> '<<=' <Op Assign>`

    `| <Op If>`

    `<Op If> ::= <Op Or> '?' <Op If> ':' <Op If> | <Op Or>`

    `<Value> ::= OctLiteral`
    `| HexLiteral`
    `| DecLiteral`
    `| StringLiteral`
    `| CharLiteral`
    `| FloatLiteral`
    `| Id '(' <Expr> ')'`
    `| Id '(' ')'`

    La siguiente sentencia de nuestro código C es `if(x % 2 == 0)`

    Entonces ahora se deberá buscar la regla de derivación para la estructura `if-else` que es un `<statement>` en nuestra guía Ansi C

    `<Stm> ::= <Var Decl>`
    		`| Id ':' !Label`
    		`| if '(' <Expr> ')' <Stm>`
    		`| if '(' <Expr> ')' <Then Stm> else <Stm>`
    		`| while '(' <Expr> ')' <Stm>`
    		`| for '(' <Arg> ';' <Arg> ';' <Arg> ')' <Stm>`
    		`| <Normal Stm>`

    Ahora debemos buscar una asignación que es un statement y derivarla para cada una de las siguientes dos asignaciones: `x = x + 1` y también para `x = x + 2`

    Deberá realizar el mismo proceso mencionado anteriormente, buscando la regla de derivación que corresponde y haciendo los reemplazos.

    Realizado por: ***Gustavo Aráuz***

    ```c
    while (x < y) 
    	if (x % 2 == 0) x = x + 1; 
    	else x = x + 2;
    ```

    Se comienza por el bucle `while`.

    En el documento *C-ANSI* la declaración del bucle `while` es un `Statements`:

    `<Stm> ::= <Var Decl>`
    		`| Id ':' !Label`
    		`| if '(' <Expr> ')' <Stm>`
    		`| if '(' <Expr> ')' <Then Stm> else <Stm>`
    		`| while '(' <Expr> ')' <Stm>`
    		`| for '(' <Arg> ';' <Arg> ';' <Arg> ')' <Stm>`
    		`| <Normal Stm>`

    Con lo cual quedaría: `<Stm> ::= while '(' <Expr> ')' <Stm>`, el árbol correspondiente es:

    ```mermaid
    graph TD
    	Stm[Stm] --> while((while));
    	Stm[Stm] --> o_par(("'('"));
    	Stm[Stm] --> Expr[Expr];
    	Stm[Stm] --> c_par(("')'"));
    	Stm[Stm] --> Stm1[Stm]
    ```

    La siguiente declaración es `x < y`, que es una `<Expr>`:

    `Expr> ::= <Expr> ',' <Op Assign>`

    ​		`|<Op Assign>`

    La `<Op Assign>` se define como:

    `<Op Assign> ::= <Op If> '=' <Op Assign>`
    			`| <Op If> '+=' <Op Assign>`
    			`| <Op If> '-=' <Op Assign>`
    			`| <Op If> '*=' <Op Assign>`
    			`| <Op If> '/=' <Op Assign>`
    			`| <Op If> '^=' <Op Assign>`
    			`| <Op If> '&=' <Op Assign>`
    			`| <Op If> '|=' <Op Assign>`
    			`| <Op If> '>>=' <Op Assign>`

    ​			`| <Op If> '<<=' <Op Assign>`
    ​			`| <Op If>`

    La `<Op If>` está definida como:

    `<Op If> ::= <Op Or> '?' <Op If> ':' <Op If>`
    		`| <Op Or>`

    Luego la `<Op Or>`:

    `<Op Or> ::= <Op Or> '||' <Op And>`
    		`| <Op And>`

    La `<Op And`: 

    `<Op And> ::= <Op And> '&&' <Op BinOR>`
    		`| <Op BinOR>`

    La `<Op BinOR>`:

    `<Op BinOR> ::= <Op BinOr> '|' <Op BinXOR>`
    			`| <Op BinXOR>`

    La `<Op BinXOR>`:

    `<Op BinXOR> ::= <Op BinXOR> '^' <Op BinAND>`
    			`| <Op BinAND>`

    La `<BinAND>`:

    `<Op BinAND> ::= <Op BinAND> '&' <Op Equate>`
    			`| <Op Equate>`

    La `<Op Equate>`:

    `<Op Equate> ::= <Op Equate> '==' <Op Compare>`
    			`| <Op Equate> '!=' <Op Compare>`
    			`| <Op Compare>`

    La `Op Compare`:

    `<Op Compare> ::= <Op Compare> '<' <Op Shift>`
    			`| <Op Compare> '>' <Op Shift>`
    			`| <Op Compare> '<=' <Op Shift>`
    			`| <Op Compare> '>=' <Op Shift>`
    			`| <Op Shift>`

    En esta última se encuentra la necesaria: `<Op Compare> ::= <Op Compare> '<' <Op Shift>`

    Además `<Op Shift>`:

    `<Op Shift> ::= <Op Shift> '<<' <Op Add>`
    			`| <Op Shift> '>>' <Op Add>`
    			`| <Op Add>`

    La `<Op Add`:

    `<Op Add> ::= <Op Add> '+' <Op Mult>`
    		`| <Op Add> '-' <Op Mult>`
    		`| <Op Mult>`

    La `<Op Mult>`:

    `<Op Mult> ::= <Op Mult> '*' <Op Unary>`
    			`| <Op Mult> '/' <Op Unary>`
    			`| <Op Mult> '%' <Op Unary>`
    			`| <Op Unary>`

    La `<Op Unary>`:

    `<Op Unary> ::= '!' <Op Unary>`
    			`| '~' <Op Unary>`
    			`| '-' <Op Unary>`
    			`| '*' <Op Unary>`
    			`| '&' <Op Unary>`
    			`| '++' <Op Unary>`
    			`| '--' <Op Unary>`
    			`| <Op Pointer> '++'`
    			`| <Op Pointer> '--'`
    			`| '(' <Type> ')' <Op Unary> !CAST`
    			`| sizeof '(' <Type> ')'`
    			`| sizeof '(' ID <Pointers> ')'`
    			`| <Op Pointer>`

    La `<Op Pointer>`:

    `<Op Pointer> ::= <Op Pointer> '.' <Value>`
    			`| <Op Pointer> '->' <Value>`
    			`| <Op Pointer> '[' <Expr> ']'`
    			`| <Value>`

    El `<Value>`:
    `<Value> ::= OctLiteral`
    		`| HexLiteral`
    		`| DecLiteral`
    		`| StringLiteral`
    		`| CharLiteral`
    		`| FloatLiteral`
    		`| Id '(' <Expr> ')'`
    		`| Id '(' ')'`
    		`| Id`
    		`| '(' <Expr> ')'`

    Actualizando el árbol queda:

    ```mermaid
    graph TD
    	Stm[Stm] --> while((while));
    	Stm[Stm] --> o_par(("'('"));
    	Stm[Stm] --> Expr[Expr];
    	Stm[Stm] --> c_par(("')'"));
    	Stm[Stm] --> Stm1[Stm];
    	Expr[Expr] --> OpAss[Op Assign];
    	OpAss[Op Assign] --> OpIf[Op If];
    	OpIf[Op If] --> OpOr[Op Or];
    	OpOr[Op Or] --> OpAnd[Op And];
    	OpAnd[Op And] --> OpBinOR[Op BinOR];
    	OpBinOR[Op BinOR] --> OpBinXOR[Op BinXOR];
        OpBinXOR[Op BinXOR] --> OpBinAND[Op BinAND];
        OpBinAND[Op BinAND] --> OpEquate[Op Equate];
    	OpEquate[Op Equate] --> OpCompare[Op Compare];
        OpCompare[Op Compare] --> OpCompare1[Op Compare];
        OpCompare[Op Compare] --> less(("'<'"));
        OpCompare[Op Compare] --> OpShift[Op Shift];
        OpCompare1[Op Compare] --> OpShift1[Op Shift];
    	OpShift[Op Shift] --> OpAdd[Op Add];
    	OpShift1[Op Shift] --> OpAdd1[Op Add];
    	OpAdd[Op Add] --> OpMult[Op Mult];
    	OpAdd1[Op Add] --> OpMult1[Op Mult];
    	OpMult[Op Mult] --> OpUnary[Op Unary];
    	OpMult1[Op Mult] --> OpUnary1[Op Unary];
    	OpUnary[Op Unary] --> OpPointer[Op Pointer];
    	OpUnary1[Op Unary] --> OpPointer1[Op Pointer];
    	OpPointer[Op Pointer] --> Value[Value];
    	OpPointer1[Op Pointer] --> Value1[Value];
    	Value[Value] --> StringLiteral[StringLiteral];
    	Value1[Value] --> StringLiteral1[StringLiteral];
    	StringLiteral[StringLiteral] --> y((y));
    	StringLiteral1[StringLiteral] --> x((x));
    ```

    La próxima operación a evaluar es `if(x % 2 == 0) x = x + 1 else x = x + 2` partiendo del `<Stm>` correspondiente, utilizando `<Stm> ::= if '(' <Expr> ')' <Then Stm> else <Stm>`.Actualizando el árbol:

    ```mermaid
    graph TD
    	Stm[Stm] --> while((while));
    	Stm[Stm] --> o_par(("'('"));
    	Stm[Stm] --> Expr[Expr];
    	Stm[Stm] --> c_par(("')'"));
    	Stm[Stm] --> Stm1[Stm];
    	Expr[Expr] --> OpAss[Op Assign];
    	OpAss[Op Assign] --> OpIf[Op If];
    	OpIf[Op If] --> OpOr[Op Or];
    	OpOr[Op Or] --> OpAnd[Op And];
    	OpAnd[Op And] --> OpBinOR[Op BinOR];
    	OpBinOR[Op BinOR] --> OpBinXOR[Op BinXOR];
        OpBinXOR[Op BinXOR] --> OpBinAND[Op BinAND];
        OpBinAND[Op BinAND] --> OpEquate[Op Equate];
    	OpEquate[Op Equate] --> OpCompare[Op Compare];
        OpCompare[Op Compare] --> OpCompare1[Op Compare];
        OpCompare[Op Compare] --> less(("'<'"));
        OpCompare[Op Compare] --> OpShift[Op Shift];
        OpCompare1[Op Compare] --> OpShift1[Op Shift];
    	OpShift[Op Shift] --> OpAdd[Op Add];
    	OpShift1[Op Shift] --> OpAdd1[Op Add];
    	OpAdd[Op Add] --> OpMult[Op Mult];
    	OpAdd1[Op Add] --> OpMult1[Op Mult];
    	OpMult[Op Mult] --> OpUnary[Op Unary];
    	OpMult1[Op Mult] --> OpUnary1[Op Unary];
    	OpUnary[Op Unary] --> OpPointer[Op Pointer];
    	OpUnary1[Op Unary] --> OpPointer1[Op Pointer];
    	OpPointer[Op Pointer] --> Value[Value];
    	OpPointer1[Op Pointer] --> Value1[Value];
    	Value[Value] --> StringLiteral[StringLiteral];
    	Value1[Value] --> StringLiteral1[StringLiteral];
    	StringLiteral[StringLiteral] --> y((y));
    	StringLiteral1[StringLiteral] --> x((x));
    	
    	Stm1[Stm] --> if((if));
    	Stm1[Stm] --> o_par1(("'('"));
    	Stm1[Stm] --> Expr1[Expr];
    	Stm1[Stm] --> c_par1(("')'"));
    	Stm1[Stm] --> then_stm[Then Stm];
    	Stm1[Stm] --> else((else));
    	Stm1[Stm] --> Stm2[Stm];
    ```

    Posteriormente, derivando `<Expr>` según la operación `x % 2 == 0`, `<Then Stm>` según `x = x + 1` y `<Stm>` según `s = x + 2`, se obtiene el árbol completo derivación:

    ```mermaid
    graph TD
    	%%Stm principal%%
    	Stm[Stm] --> while((while));
    	Stm[Stm] --> o_par(("'('"));
    	Stm[Stm] --> Expr[Expr];
    	Stm[Stm] --> c_par(("')'"));
    	Stm[Stm] --> Stm1[Stm];
    	%%Expr de Stm principal%%
    	Expr[Expr] --> OpAssign[Op Assign];
    	OpAssign[Op Assign] --> OpIf[Op If];
    	OpIf[Op If] --> OpOr[Op Or];
    	OpOr[Op Or] --> OpAnd[Op And];
    	OpAnd[Op And] --> OpBinOR[Op BinOR];
    	OpBinOR[Op BinOR] --> OpBinXOR[Op BinXOR];
        OpBinXOR[Op BinXOR] --> OpBinAND[Op BinAND];
        OpBinAND[Op BinAND] --> OpEquate[Op Equate];
    	OpEquate[Op Equate] --> OpCompare[Op Compare];
        OpCompare[Op Compare] --> OpCompare1[Op Compare];
        OpCompare[Op Compare] --> less(("'<'"));
        OpCompare[Op Compare] --> OpShift[Op Shift];
        OpCompare1[Op Compare] --> OpShift1[Op Shift];
    	OpShift[Op Shift] --> OpAdd[Op Add];
    	OpShift1[Op Shift] --> OpAdd1[Op Add];
    	OpAdd[Op Add] --> OpMult[Op Mult];
    	OpAdd1[Op Add] --> OpMult1[Op Mult];
    	OpMult[Op Mult] --> OpUnary[Op Unary];
    	OpMult1[Op Mult] --> OpUnary1[Op Unary];
    	OpUnary[Op Unary] --> OpPointer[Op Pointer];
    	OpUnary1[Op Unary] --> OpPointer1[Op Pointer];
    	OpPointer[Op Pointer] --> Value[Value];
    	Value[Value] --> StringLiteral((String Literal));
    	StringLiteral((StringLiteral)) --> x((x))
    	OpPointer1[Op Pointer] --> Value1[Value];
     	Value1[Value] --> StringLiteral1((StringLiteral));
     	StringLiteral1((StringLiteral)) --> y((y))
    	%%Stm secundario%%
    	Stm1[Stm] --> if((if));
    	Stm1[Stm] --> o_par1(("'('"));
    	Stm1[Stm] --> Expr1[Expr];
    	Stm1[Stm] --> c_par1(("')'"));
    	Stm1[Stm] --> Then_Stm[Then Stm];
    	Stm1[Stm] --> else((else));
    	Stm1[Stm] --> Stm2[Stm];
    	%%Expr de Stm secundario%%
    	Expr1[Expr] --> OpAssign1[Op Assign];
    	OpAssign1[Op Assign] --> OpIf1[Op If];
    	OpIf1[Op If] --> OpOr1[Op Or];
    	OpOr1[Op Or] --> OpAnd1[Op And];
    	OpAnd1[Op And] --> OpBinOR1[Op BinOR];
    	OpBinOR1[Op BinOR] --> OpBinXOR1[Op BinXOR];
        OpBinXOR1[Op BinXOR] --> OpBinAND1[Op BinAND];
        OpBinAND1[Op BinAND] --> OpEquate1[Op Equate];
        	%%Comparación%%
    	OpEquate1[Op Equate] --> OpEquate2[Op Equate];
    	OpEquate1[Op Equate] --> equal(("'=='"));
    	OpEquate1[Op Equate] --> OpCompare2[Op Compare];
    		%%Op Equate%%
    	OpEquate2[Op Equate] --> OpCompare3[Op Compare];
        OpCompare3[Op Compare] --> OpShift2[Op Shift];
        OpShift2[Op Shift] --> OpAdd2[Op Add];
    	OpAdd2[Op Add] --> OpMult2[Op Mult];
    		%%Módulo%%
        OpMult2[Op Mult] --> OpMult3[Op Mult];
        OpMult2[Op Mult] --> module(('%'));
        OpMult2[Op Mult] --> OpUnary2[Op Unary];
        		%%Op Mult 3%%
        OpMult3[Op Mult] --> OpUnary3[Op Unary];
        OpUnary3[Op Unary] --> OpPointer2[Op Pointer];
        OpPointer2[Op Pointer] --> OpValue2[Value];
        OpValue2[Value] --> StringLiteral2((StringLiteral));
        StringLiteral2((StringLiteral)) --> x2((x));
        		%%Op Unary%%
        OpUnary2[Op Unary] --> OpPointer3[Op Pointer];
        OpPointer3[Op Pointer] --> OpValue3[Value];
        OpValue3[Value] --> DecLiteral((Dec Literal))
        DecLiteral((Dec Literal)) --> two((2));
        	%%Op Compare2%% 
        OpCompare2[Op Compare] --> OpShift3[Op Shift];
        OpShift3[Op Shift] --> OpAdd3[Op Add];
        OpAdd3[Op Add] --> OpMult4[Op Mult];
        OpMult4[Op Mult] --> OpUnary4[Op Unary];
        OpUnary4[Op Unary] --> OpPointer4[Op Pointer];
        OpPointer4[Op Pointer] --> OpValue4[Value];
        OpValue4[Value] --> DecLiteral1((DecLiteral));
        DecLiteral1((DecLiteral)) --> zero((0));
        %% Then Stm %%
        Then_Stm[Then Stm] --> NormalStm[Normal Stm];
        NormalStm[Normal Stm] --> Expr2[Expr];
        Expr2[Expr] --> OpAssign2[Op Assign];
        	%%Operación Them%%
        OpAssign2[Op Assign] --> OpIf2[Op If];
        OpAssign2[Op Assign] --> assign(('='));
        OpAssign2[Op Assign] --> OpAssign3[Op Assign];
        		%%Op If Them%%
    	OpIf2[Op If] --> OpOr2[Op Or];
    	OpOr2[Op Or] --> OpAnd2[Op And];
    	OpAnd2[Op And] --> OpBinOR2[Op BinOR];
    	OpBinOR2[Op BinOR] --> OpBinXOR2[Op BinXOR];
    	OpBinXOR2[Op BinXOR] --> OpBinAND2[Op BinAND];
    	OpBinAND2[Op BinAND] --> OpEquate3[Op Equate];
    	OpEquate3[Op Equate] --> OpCompare4[Op Compare];
    	OpCompare4[Op Compare] --> OpShift4[Op Shift];
    	OpShift4[Op Shift] --> OpAdd4[Op Add];
    	OpAdd4[Op Add] --> OpMult5[Op Mult];
    	OpMult5[Op Mult] --> OpUnary5[Op Unary];
    	OpUnary5[Op Unary] --> OpPointer5[Op Pointer];
    	OpPointer5[Op Pointer] --> Value5[Value];
    	Value5[Value] --> StringLiteral5((StringLiteral));
    	StringLiteral5((StringLiteral)) --> x3((x));
    			%%Op Assign Them%%
    	OpAssign3[Op Assign] --> OpIf3[Op If];
    	OpIf3[Op If] --> OpOr3[Op Or];
    	OpOr3[Op Or] --> OpAnd3[Op And];
    	OpAnd3[Op And] --> OpBinOR3[Op BinOR];
    	OpBinOR3[Op BinOR] --> OpBinXOR3[Op BinXOR];
    	OpBinXOR3[Op BinXOR] --> OpBinAND3[Op BinAND];
    	OpBinAND3[Op BinAND] --> OpEquate4[Op Equate];
    	OpEquate4[Op Equate] --> OpCompare5[Op Compare];
    	OpCompare5[Op Compare] --> OpShift5[Op Shift];
    	OpShift5[Op Shift] --> OpAdd5[Op Add];
    				%%Operación x + 1%%
    	OpAdd5[Op Add] --> OpAdd6[Op Add];
    	OpAdd5[Op Add] --> plus(("'+'"));
    	OpAdd5[Op Add] --> OpMult6[Op Mult];
    						%%OpAdd6[Op Add]%%
    	OpAdd6[Op Add] --> OpMult7[Op Mult];
    	OpMult7[Op Mult] --> OpUnary7[Op Unary];
    	OpUnary7[Op Unary] --> OpPointer7[Op Pointer];
    	OpPointer7[Op Pointer] --> Value7[Value];
    	Value7[Value] --> StringLiteral6((StringLiteral));
    	StringLiteral6((StringLiteral)) --> x4((x));
    					%%OpMult6[Op Mult]%%
    	OpMult6[Op Mult] --> OpUnary6[Op Unary];
    	OpUnary6[Op Unary] --> OpPointer6[Op Pointer];
    	OpPointer6[Op Pointer] --> Value6[Value];
    	Value6[Value] --> DecLiteral7((DecLiteral));
    	DecLiteral7((DecLiteral)) --> one((1));
    
    		%%else Stm%%
    	Stm2[Stm] --> NormalStm2[Normal Stm];
    	NormalStm2[Normal Stm] --> Expr3[Expr];
    	Expr3[Expr] --> OpAssign4[Op Assign];
    			%%Operación x = x + 2;%%
    	OpAssign4[Op Assign] --> OpIf4[Op If];
    	OpAssign4[Op Assign] --> assign1(("'='"));
    	OpAssign4[Op Assign] --> OpAssign5[Op Assign]
    			%%OpIf4[Op If]%%
    	OpIf4[Op If] --> OpOr4[Op Or];
    	OpOr4[Op Or] --> OpAnd4[Op And];
    	OpAnd4[Op And] --> OpBinOR4[Op BinOR];
    	OpBinOR4[Op BinOR] --> OpBinXOR4[Op BinXOR];
    	OpBinXOR4[Op BinXOR] --> OpBinAND4[Op BinAND];
    	OpBinAND4[Op BinAND] --> OpEquate5[Op Equate];
    	OpEquate5[Op Equate] --> OpCompare6[Op Compare];
    	OpCompare6[Op Compare] --> OpShift6[Op Shift];
    	OpShift6[Op Shift] --> OpAdd7[Op Add];
    	OpAdd7[Op Add] --> OpMult8[Op Mult];
    	OpMult8[Op Mult] --> OpUnary8[Op Unary];
    	OpUnary8[Op Unary] --> OpPointer8[Op Pointer];
    	OpPointer8[Op Pointer] --> Value8[Value];
    	Value8[Value] --> StringLiteral8((StringLiteral));
    	StringLiteral8((StringLiteral)) --> x5((x));
    	OpAssign5[Op Assign] --> OpIf5[Op If];
    	OpIf5[Op If] --> OpOr5[Op Or];
    	OpOr5[Op Or] --> OpAnd5[Op And];
    	OpAnd5[Op And] --> OpBinOR5[Op BinOR];
    	OpBinOR5[Op BinOR] --> OpBinXOR5[Op BinXOR];
    	OpBinXOR5[Op BinXOR] --> OpBinAND5[Op BinAND];
    	OpBinAND5[Op BinAND] --> OpEquate6[Op Equate];
    	OpEquate6[Op Equate] --> OpCompare7[Op Compare];
    	OpCompare7[Op Compare] --> OpShift7[Op Shift];
    	OpShift7[Op Shift] --> OpAdd8[Op Add];
    				%%Operación x + 1%%
    	OpAdd8[Op Add] --> OpAdd9[Op Add];
    	OpAdd8[Op Add] --> plus1(("'+'"));
    	OpAdd8[Op Add] --> OpMult9[Op Mult];
    						%%OpAdd6[Op Add]%%
    	OpAdd9[Op Add] --> OpMult10[Op Mult];
    	OpMult10[Op Mult] --> OpUnary10[Op Unary];
    	OpUnary10[Op Unary] --> OpPointer10[Op Pointer];
    	OpPointer10[Op Pointer] --> Value10[Value];
    	Value10[Value] --> StringLiteral10((StringLiteral));
    	StringLiteral10((StringLiteral)) --> x6((x));
    					%%OpMult6[Op Mult]%%
    	OpMult9[Op Mult] --> OpUnary11[Op Unary];
    	OpUnary11[Op Unary] --> OpPointer11[Op Pointer];
    	OpPointer11[Op Pointer] --> Value11[Value];
    	Value11[Value] --> DecLiteral12((DecLiteral));
    	DecLiteral12((DecLiteral)) --> two3((2));
    ```

    <!--Preguntar en consulta si de <Value> se deriva a ...Literal y posteriormente al valor-->

48. En base al documento con las reglas de sintaxis del lenguaje C (C-ANSI.pdf), dibuje los árboles de análisis para los siguientes enunciados: 

    

    ```c
    for (k = 1; k < 10; k++) { 
    	if ( k < 5) j++; 
    	else j += 2; 
    }
    ```

    

    

    ---

    > Para usar la aplicación Java GoldParserGenerator seguir los siguientes pasos: 
    >
    > 1. Descargar el archivo y descomprimirlo. 
    > 2. En el directorio o carpeta donde se instale, escribir el texto del código a analizar en el archivo codigo.c o codigo.js, según el caso. 
    > 3. Modificar el archivo config.dat: 
    >    1. en la primera línea colocar el nombre del archivo a utilizar C-ANSI.cgt o Javascript.cgt, según el caso. 
    >    2. en la segunda línea escribir el nombre del archivo fuente a analizar: codigo.c o codigo.js, según el caso. 
    > 4. Escribir en la consola el comando: java -jar GoldParserGenerator.jar > salida.txt 
    > 5. En el archivo salida.txt quedará el texto resultante del proceso, indicando en la última línea si fue exitoso (con OK) o si hubo ERROR. En caso de error analice la secuencia de procesamiento, descubra dónde ocurrió, corrija el archivo fuente respectivo y verifique nuevamente. 

49. Escriba ejemplos en C para los generadores indicados, en base a la gramática en `CANSI.pdf`, y verifique su correcto análisis utilizando la aplicación GoldParserGenerator.

    `<Expr>`

    `<VarDecl>`

    `<Op Assign>`

    `<FuncDecl>`

    `<Stm>`

    Realizado por ***Mauricio Fariello***:

    Repuesta:

    ​	`<Expr>`: `int MiFuncion(){ c = 3 > 6; }`

    ​	`<Var Decl>`: `const char miVar;`

    ​	`<Op Assign>`: `int MiFuncion() { x = x + 5; }`

    ​	`<Func Decl>`: `float miFuncion (float miArg) { }`

    ​	`<Stm>`: `int MiFuncion() { if(a == 5) x = 9; else x = 10; }`

    ---

    Explicación:

    - Los ejemplos en *C* se obtienen siguiendo la gramática del  archivo "*ANSI.pdf*" que se puede descargar desde el link "*Especificación Lenguaje C*" del Campus.

    - Por ejemplo para obtener el código `int MiFuncion() { c = 3 > 6; }` partimos del axioma `<Decls>` y luego aplicamos sucesivas reglas hasta llegar a los símbolos terminales. Con las siguientes reglas se llega por ejemplo al terminal `;` y podemos seguir derivando `<Expr>`.

      `<Decls> ::= <Decl> <Decls>`

      `<Decl> ::= <Func Decl>`

      `<Func Decl> ::= <Func ID> '(' ')' <Block>`

      `<Block> ::= '{' <Stm List> '}'` 

      `<Stm List> ::= <Stm> <Stm List>`

      `<Stm> ::= <Normal Stm>`

      `<Normal Stm> ::= <Expr> ';'`

      `<Expr> ::= .....`

    - Para verificar su correcto análisis ( es decir, verificar si es correcta la sintáxis) con la aplicación *GoldParserGenerator* es necesario seguir los 5 pasos desciptos en la *Guía* (previo del ejercicio 49). A continuación algunas capturas de los pasos.

      - **Paso 2**

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_2.png" alt="Captura de pantalla 2024-05-12 122410" style="zoom:50%;" />

        - Recordar colocar un `enter` al final de la última línea, sino da un error al ejecutar *GoldenParser*, incluso algunas veces un bucle infinito generando un enorme archivo de salida.

      - Paso 3

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_3.png" alt="Captura de pantalla 2024-05-12 122445" style="zoom:50%;" />

      - Paso 4

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_4.png" alt="Captura de pantalla 2024-05-12 124222" style="zoom:50%;" />

        - Tomar en cuenta que es necesario tener *java* instalado en la PC para usar *GoldParserGenerator*.
        - También se puede correr el archivo `run.bat` desde el mismo directorio.

      - Paso 5

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_5.png" alt="image-20240512125134016" style="zoom:50%;" />

        ---

    - Verificación de la expresión `<Var Decl>`: `const char miVar;`

      - Paso 2

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_2_Var-Decl.png" alt="image-20240515192029098" style="zoom:50%;" />

      - Paso 3

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_3_Op-Assign.png" alt="exercise_49_3" style="zoom:50%;" />

        

      - Paso 4

        - Se corre `run.bat`

      - Paso 5

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_5_Var-Decl.png" alt="image-20240515192232762" style="zoom:50%;" />

      ---

    - Verificación de la expresión `<Op Assign>`: `int MiFuncion() { x = x + 5; }` con *GoldParserGenerator*.

      - Paso 2

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_2_Op-Assign.png" alt="image-20240512125316167" style="zoom:50%;" />

      - Paso 3

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_3_Op-Assign.png" alt="image-20240512125432076" style="zoom:50%;" />

      - Paso 4

        - Se corre `run.bat`

      - Paso 5

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_5_Op-Assign.png" alt="image-20240512130205558" style="zoom:50%;" />
        
        ---
        
        

    - Verificación de la expresión `<Stm>`: `int MiFuncion() { if(a == 5) x = 9; else x = 10; }`

      - Paso 2

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_2_Stm.png" alt="image-20240512130417565" style="zoom:50%;" />

      - Paso 3

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_3_Op-Assign.png" alt="exercise_49_3_Op-Assign" style="zoom:50%;" />

      - Paso 4

        - Se corre archivo `run.bar`.

      - Paso 5

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_5_Stm.png" alt="image-20240512134611967" style="zoom:50%;" />

      ---

      

    - Verificación de la expresión `<Func Decl>`: `float miFuncion (float miArg) { }`

      - Paso 2

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_2_Func-Decl.png" alt="image-20240512141327187" style="zoom:50%;" />

      - Paso 3

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_3_Op-Assign.png" alt="exercise_49_3_Op-Assign" style="zoom:50%;" />

      - Paso 4

        Se corre `run.bat`

      - Paso 5

        <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_49_5_Func-Decl.png" alt="image-20240512141506786" style="zoom:50%;" />

50. Escriba dos ejemplos diferentes en JavaScript para los generadores indicados, en base a la gramática en `Javascript.pdf`, y verifique su correcto análisis utilizando la aplicación GoldParserGenerator.

    `<Program>`

    `<Function Declaration>`

    `<Varaible Statements>`

    Resuelto por: ***Gustavo Arauz***

    `<Program>`

    - Paso 2:

      <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_50_2_Program.png" alt="image-20240512165717693" style="zoom:50%;" />

    - Paso 3:

      <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_50_3.png" alt="image-20240512165820427" style="zoom:50%;" />

    - Paso 4: 

      Se corre `run.bat`

    - Paso 5:

      <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_50_5_Program.png" alt="image-20240512165937856" style="zoom:50%;" />

    `<Function Declaration>`: `var name = "Gustavo" function hi(name){ alert("Hola" + name)}`

    - Paso 2:

      <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_50_2_Function-Declaration.png" alt="image-20240512171842293" style="zoom:50%;" />

    - Paso 3:

      <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_50_3.png" alt="exercise_50_3" style="zoom:50%;" />

    - Paso 4:

      Se corre `run.bat`

    - Paso 5:

      <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_50_5_Function-Declaration.png" alt="image-20240512172001550" style="zoom:50%;" />

    `<Variable Statements>`: `var = "Gustavo"`

    - Paso 2:

      <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_50_2_Variable-Statement.png" alt="image-20240512172212299" style="zoom:50%;" />

    - Paso 3:

      <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_50_3.png" alt="exercise_50_3" style="zoom:50%;" />

    - Paso 4:

      Se corre `run.bat`

    - Paso 5:

      <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_50_5_Variable-Statement.png" alt="exercise_50_5_Variable-Statement" style="zoom:50%;" />

51. Dibuje el árbol de derivación para las siguientes expresiones, luego según las declaraciones y asignaciones de valores. Indique los resultados considerando la secuencia en la que aparecen.

    `char *s = {"0123456789"}, *c;` 

    `int *p;` 

    `long *q;` 

    `c = (s + 3);`

    `p = (int *) s;` 

    `q = (long *) s;` 

    *<u>Analizar para</u>*: 

    `*((char*)q);` 

    `*(++c);` 

    `*c++;` 

    `++*s;`

    Realizado por: ***Romina Palmieri***

    Para entender mejor este ejercicio se recomienda escribir el código del mismo en un IDE ( Netbeans, Dev C++, etc) de c para ejecutar las operaciones.

    `char *s = {"0123456789"}, *c;` 				`s` **apunta a la cadena** `"0123456789"`

    `int * p;`

    `long * q;`

    `c = (s + 3);`								`c` **apunta a la cadena** `"3456789"`

    `p = (int *) s;`	               				     `p` **apunta al entero en la dirección de** `s` . Primeros 4 caracteres

    `q = (log *) s`							      `q` **apunta al entero largo en la dirección de** `s`. Primeros 8 caracteres

    <u>Analizar</u>

    `*((char*)q);`						       **El valor obtenido es** `0`. Obtiene el caracter a donde apunta `q`

    `*(++c);`								**El valor obtenido es** `4`. Obtiene el valor de la dirección siguiente a donde                     			  						     apunta `c`. El puntero `c` queda apuntado  a la siguiente dirección

    `*c++;`								   **El valor obtenido es ** `4`. Obtiene el valor de la dirección a donde apunta `c` y 			 						     luego incrementa la dirección de `c`, quedando `c` apuntando a la siguiente 			  						    dirección.

    `++*S;`								   **El valor obtenido es** `1`. Obtiene el valor luego de incrementar en uno el valor 									      del primer caracter en `s`.

    `!(!(*c));`							   **El valor obtenido es** `1`, es decir, `verdadero`. Obtiene el valor después de negar 									      dos veces el valor de `c`. (`*c` retorna el `ASCII` `53` del caracter `5`, con el 									      primer `!` se obtiene la negación del verdadero, es decir `0`, del segundo `!` se 									      obtiene verdadero, es decir, `1`).

    `~(*(c+1));`							 **El valor obtenido es** `-55`. Obtiene el valor luego de la operación `NOT` sobre el valor de la siguiente dirección de memoria de `c`. Incrementa la posición de `c` en uno. El `*` obtiene el valor `6`. El `~` realiza la operación binaria `not` sobre el `ASCII` de `6`, es decir sobre `54`.  Resultando el `-55`.

    ![exercise_51](https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_51.svg)

    

52. Dibuje el árbol de derivación para las siguientes expresiones, luego según las declaraciones y asignaciones de valores. Indique los resultados considerando la secuencia en la que aparecen.

    `int a = 1, b = 2, c = 7, d = -4;` 

    `float x = 1, y = 2.5, z = 0.3;`

    `unsigned char m = 'B', p = 64, r = '1';`

    *<u>Analizar para</u>*: 

    `a > c && !(x != y) || m < -- p` 

    ```mermaid
    graph TD
    	or(("||"))-->and((&&));
    	or(("||"))-->less((<));
    	and((&&))-->greater((>));
    	and((&&))-->not1((!));
    	greater((>))-->a((a));
    	a((a))-->one((1));
    	greater((>))-->c((c));
    	c((c))-->seven((7));
    	not1((!))-->noteq((!=));
    	noteq((!=))-->x((x));
    	x((x))-->one1((1));
    	noteq((!=))-->y((y));
    	y((y))-->two((2.5));
    	less((<))-->m((m));
    	m((m))-->B(('B'));
    	less((<))-->minus(("--"));
    	minus(("--"))-->p((p));
    	p((p))-->sixtyfour((64));
    ```

    

    `(c++ * --b)` 

    ```mermaid
    graph TD
    	asteric((*))-->c((c));
    	c((c))-->seven((7));
    	seven((7))-->plus((++));
    	asteric((*))-->minus(("--"));
    	minus(("--"))-->b((b));
    	b((b))-->two((2));
    ```

    `m += b + 5` 

    ```mermaid
    graph TD
    
    
    pluseq((+=))-->m((m));
    m((m))-->B(('B'))
    pluseq((+=))-->plus((+));
    plus((+))-->b((b));
    b((b))-->two((2));
    plus((+))-->five((5));
    ```

    `(!p && m) + r`

    ```mermaid
    graph TD
    plus((+))-->and((&&));
    plus((+))-->r((r));
    r((r))-->ONE(('1'));
    and((&&))-->not((!));
    not((!))-->p((p));
    p((p))-->sixtyfour((64));
    and((&&))-->m((m));
    m((m))-->B(('B'));
    ```

    `x / c * y + 3.5 - d % 3` 

    ```mermaid
    graph TD
    	minus(("-"))-->plus((+));
    	minus(("-"))-->resto((%));
    	plus((+))-->div((/));
    	div((/))-->x((x));
    	x((x))-->one((1));
    	div((/))-->mult((*));
    	mult((*))-->c((c));
    	c((c))-->seven((7));
    	mult((*))-->y((y));
    	y((y))-->two((2.5));
    	plus((+))-->three((3.5));
    	resto((%))-->d((d));
    	d((d))-->minus_four(("-4"));
    	resto((%))-->three1((3));
    ```

    `b > c > d `

    ```mermaid
    graph TD
    	greater((>))-->greater1((>));
    	greater((>))-->d((d));
    	d((>))-->minus_four(("-4"))
    	greater1((>))-->b((b));
    	b((b))-->two((2));
    	greater1((>))-->c((c));
    	c((c))-->seven((7));
    ```

    `b = c ? 2 : 4`

    ```mermaid
    graph TD
    	eq((=))-->b((b));
    	b((b))-->two((2))
    	eq((=))-->if((?));
    	if((?))-->c1((c));
    	c1((c))-->seven1((7));
    	if((?))-->opt((:));
    	opt((:))-->two1((2));
    	opt((:))-->four((4));
    ```

53. Dibujar el árbol para la expresión (x+y*z)+y luego eliminar la recursividad a izquierda y dibujar el nuevo árbol. 

    $E \rightarrow E + T$

    $E \rightarrow T$

    $T \rightarrow T * F$ 

    $T \rightarrow F$

    $F \rightarrow (E)$

    $F \rightarrow Id$

    $Id \rightarrow x|y|z$​

    ```mermaid
    graph TD;
    	E((E))-->E1((E));
    	E1((E))-->T((T));
    	T((T))-->F((F));
    	F((F))-->o_par(("("));
    	F((F))-->E2((E));
    	E2((E))-->E3((E));
    	E3((E))-->T3((T));
    	T3((T))-->F2((F));
    	F2((F))-->Id1((Id));
    	Id1((Id))-->x((x));
    	E2((E))-->plus1((+));
    	E2((E))-->T2((T));
    	T2((T))-->T4((T));
    	T4((T))-->F4((F));
    	F4((F))-->Id2((Id));
    	Id2((Id))-->y1((y));
    	T2((T))-->mult((*));
    	T2((T))-->F3((F));
    	F3((F))-->Id3((Id));
    	Id3((Id))-->z((z));
    	F((F))-->c_par((")"));
    	E((E))-->plus((+));
    	E((E))-->T1((T));
    	T1((T))-->F1((F));
    	F1((F))-->Id((Id));
    	Id((Id))-->y((y));
    ```

    **Eliminar recursividad**

54. Haciendo uso de las herramientas Flex/Bison, desarrollar un analizador léxico (scanner) y un analizador sintáctico (parser) para la gramática que se muestra. Obtener el programa ejecutable que tome como ‘input’ un archivo de texto con un ejemplo de código fuente que corresponda al lenguaje y lo someta a las dos primeras fases del proceso de traducción. Como resultado el analizador debe mostrar la tabla de lexemas-tokens obtenida por el scanner y el árbol de derivación generado por el parser, o el error en caso de producirse alguno de orden léxico o sintáctico durante el proceso de análisis. 

    **<u>GRAMÁTICA DEL LENGUAJE</u>**

    `````` 
    rutina ::= identifierparameter_list 
    parameter_list ::= "(" defparameter {"," defparameter}* | ("&" identifier { "," "&" identifier}* 
    defparameter ::= parameter ["=" expression] 
    identifier ::= letter {letter | digit | "_"}* 
    parameter ::= identifier | "(" sublist ")" 
    expression ::= conditional_expression | lambda_form 
    letter ::= lowercase | uppercase 
    digit ::= "0"|"1"|...|"9" 
    identifier ::= (letter) {letter | digit | "_"}* 
    sublist ::= parameter ("," parameter)* 
    conditional_expression ::= "or_test"| "and_test" 
    lambda_form ::= "lambda" 
    lowercase ::= "a"|"b"|...|"z" 
    uppercase ::= "A"|"B"|...|"Z" 
    ``````

    **<u>EJEMPLOS</u>**

    ```
    algo_1(alfa = or_test, Beta = lambda)        // válido
    algo_1(alfa = or_test, &Beta)                // inválido
    algo_1(alfa = or_test, _Beta = lambda)       // inválido
    ```

    > Los errores que aparecen en algunos de los siguientes programas pueden ocurrir durante el proceso de compilación o interpretación según el lenguaje, algunos no se detectan hasta la etapa de ejecución y otros nunca se detectan, pero los programas muestran resultados erróneos.

55. Verifique si compilan y ejecutan correctamente los siguientes programas, luego corrija el error y pruebe de nuevo el programa (verifique que el resultado que muestran es el correcto). Califique los errores en de tipo léxico, sintáctico o semántico.

    ```c++
    #include<iostream>
    using namespace std;
    #define uno 1
    #define dos 2
    int a;
    a = uno;
    int main() {
    	a = dos;
    }
    ```

    Realizado por: ***Julio Monetti*** 

    Los siguientes ejercicios los vamos a probar en un *IDE* para *C*, como zinjai, devC, o cualquier otro que nos permita crear un programa *C/C++*

    La línea `1` incluye la librería *iostream* que permite utilizar funciones de entrada-salida en el código fuente siguiente.

    Las líneas `3` y `4`  definen dos constantes `uno`, y `dos` que valen `1` y `2` respectivamente.

    En la línea `5`  se declara una variable `a` del tipo entera; y en la línea `6` se asigna la constante `uno` a la variable `a`.

    Entre las líneas `7` y `9` se encuentra la función/programa principal `main()`. En el mismo, en la línea `8` se asigna a la variable `a`, la constante `dos` (valor `2`).

    El problema de este código es que en la línea `6`, al no encontrarse dentro de un bloque de código ejecutable o función, no es posible realizar la asignación (que corresponde a una instrucción ejecutable).

    Al intentar compilar vemos que se presenta un  error de tipo **sintáctico** y el programa no compilará hasta corregirlo.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-a1.png" alt="image-20240525155302542" style="zoom:70%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-a2.png" alt="image-20240525155336735" style="zoom:49%;" />

    Corrección realizada por: ***Guastavo Arauz***

    Para realizar la corrección del error se procede a inicializar a la variable `a` con el valor `1` en el momento de la declaración en la línea `7`.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-a1-fix.png" alt="exercise_55-a1-fix" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-a2-fix.png" alt="exercise_55-a2-fix" style="zoom:42%;" />

    ---

    ```c++
    #include <iostream>
    using namespace std;
    void foo(){
    	int i;
    	cout<< i++<<endl;
    }
    int main() {
    	int j;
    	for (j = 0; j < 10; j++) foo();
    } 
    ```

    La línea `1` incluye la librería *iostream* que permite utilizar funciones de entrada-salida en el código fuente siguiente.

    Entre las líneas `3` y `6` se encuentra la función `foo()` (que es llamada por la función principal en la línea `9`). En `foo()` se declara una variable entera `i` (línea `4`).

    En la línea `5` se utiliza el operador `cout` para imprimir la variable `i` por pantalla, y a continuación se concatena a través del operador  `<<` la constante `endl`, la cual imprime un retorno de línea en la salida. En la misma instrucción, también se incrementa al final la variable `i` en 1, a través del operador de post-incremento `++`.

    En este caso está presente un error de tipo semántico, ya que la variable `i` no está inicializada  y la misma se declara dentro de la función que es llamada 10 veces por `foo()`. En este caso no se puede predecir el comportamiento del programa, con lo cual se concluye en un error del tipo **semántico**.

    *Nota*: compilando el archivo en el programa Clion, y en el [Online_c_compiler](https://www.onlinegdb.com/online_c_compiler#) (Online GBD) el programa se ejecuta con algunas advertencias de la falta de inicialización de la variable `i` y mostrando los números del `0` al `9`. Lo cual es incorrecto para la ejecución.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-b1_error00.png" alt="exercise_55-b1_error00" style="zoom:50%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-b1_error.png" alt="exercise_55-b1_error" style="zoom:50%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-b1_error02.png" alt="exercise_55-b1_error02" style="zoom:50%;" />

    Sólo en el programa *Zinjai* se ve que el funcionamiento es erróneo debido a la basura que imprime la consola.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-b1_error03.png" style="zoom:50%;" />

    Corrección de error.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-b1_fix00.png" style="zoom:50%;" />

    La ejecución correcta del código se da inicializando la variable `i` con el valor `0`. Lo cual produce que cada vez que la función `foo()` es llamada por el bucle `for` desde el `main` se imprima `0` en la consola.

    Si la ejecución esperada es que se muestren los números del `0` al `9` por consola cada vez que la función `foo()` es llamada, se debe hacer la declaración de la variable y su inicialización de manera global.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_55-b1_fix01.png" style="zoom:50%;" />

56. Verifique si compilan y ejecutan correctamente los siguientes programas, luego corrija el error y pruebe de nuevo el programa (verifique que el resultado que muestran es el correcto). Califique los errores en de tipo léxico, sintáctico o semántico. 

    ```c++
    #define VERSIÓN 1
    #include <iostream>
    using namespace std;
    char *ss( char *s ) {
    	return s;
    }
    int main(){
    	if (VERSIÓN > 0)
    		cout<<"Hello "<<ss("world")<<endl;
    } 
    ```

    Resuelto por: **Gustavo Arauz**

    En la línea `1` se define una macro llamada `VERSIÓN` con el valor `1`. 

    En la línea `2` se incluye la cabecera `<iostream>` que permite la entrada y salida en *C++*.

    En la línea `3` se introduce el espacio de nombres `std` que permite usar elementos del estándar de la biblioteca *C++*  sin la necesidad de prefijarlos con `std::`.

    En la línea `4` se declara una función puntero `*ss` que toma un puntero a  `char *s` como argumento y devuelve el mismo puntero a la cadena.

    En la línea `7` se declara la función `main`, dentro de ella se comprueba con una estructura condicional `if` si el valor de la macro `VERSIÓN` es mayor que `0`. Esta condición siempre es verdadera y se ejecutará el código de la línea `9`. El cual imprime `"Hello "`, luego llama a la función `ss` con el literal `"world"` que se imprime después de `"Hello "`.

    ***Zinjai***

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_error-Zinjai.png" alt="exercise_56-a_error-Zinjai" style="zoom:50%;" />

    **OnlineGBD**

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_warning_GBD.png" alt="exercise_56-a_warning_GBD" style="zoom:50%;" />

    **CLion**

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_warning-Clion00.png" style="zoom:50%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_warning-Clion01.png" alt="exercise_56-a_warning-Clion01" style="zoom:50%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_warning-Clion02.png" alt="exercise_56-a_warning-Clion02" style="zoom:49%;" />

    Tanto en el programa *CLion* como en [Online_c_compiler](https://www.onlinegdb.com/online_c_compiler#) (Online GBD) sólo se obtiene warning de `C++ prohíbe la conversión de literal de cadena a puntero no-const de tipo 'char*'`, pero el programa funciona correctamente al ser un warning. Sólo en *Zinjai* se visualizan como errores:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_error-Zinjai.png" style="zoom:50%;" />

    Los problemas con el programa son que en la declaración de la macro en la línea `1` se utiliza un caracter inválido `Ó`, lo cual genera un error de tipo ***léxico***.

    En la línea `9` se emite el error `C++ prohíbe la conversión de literal de cadena a puntero no-const de tipo 'char*'`

    que es un error ***semático***, en *C++* los literales de cadena son de tipo `const char[]` y se está pasando a una función que acepta `char*`, un literal de cadena debe ser inmodificable y el tipo `char*` implica que el contenido puede ser modificado.

    La solución a estos errores son:

    - Redefinir la macro sólo con caracteres válidos, `VERSION`
    - Redefinir la función como `const char` así como el argumento como `const char*`

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_fixed_GBD.png" style="zoom:50%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_fixed_Clion00.png" style="zoom:50%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_fixed_CLion01.png" alt="exercise_56-a_fixed_CLion01" style="zoom:50%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-a_fixed_Zinjai.PNG" alt="exercise_56-a_fixed_Zinjai" style="zoom:50%;" />

    ----

    ```C++
    #include <iostream>
    using namespace std;
    int an[4] = { 1, 2, 3, 4 };
    int sum( int a[4] ) {
    	int limit = sizeof(int)*4 / sizeof(int); 
        result = 0;
    	for( int i = 0; i < limit; i++ )
    		result += a[i];
    	return result;
    }
    int main(){
    	cout<< sum( an ) <<endl;
    } 
    ```

    El programa en la línea `1` incluye la librería *iostream* que permite utilizar funciones de entrada-salida en el código fuente siguiente. En siguiente línea, la número `2`, se introduce el espacio de nombres `std` que permite usar elementos del estándar de la biblioteca *C++*  sin la necesidad de prefijarlos con `std::`.

    Posteriormente, declara un array global `an` del tipo `int` de 4 valores y se inicializa con los valores `{1, 2, 3, 4}`.

    A continuación, en la línea `4` declara la función  `sum`, recibe como argumento un array de 4 enteros. En este función se declara la variable entera `limit` con la operación `sizeof(int)*4 / sizeof(int)`, que siempre su resultado será 4. También, se inicializa la variable `result` a `0`. Luego, se declara un bucle `for` para recorrer el todos los elementos del array, y proceder a la suma de ellos, obteniendo el resultado en la variable `result`. Para, posteriormente, retornarla.

    En la línea `11` se declara la función `main` del programa, dentro de la cual se llama a la función `sum` pasando el array `an` como argumento.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-b_error.png" style="zoom:50%;" />

    De la compilación del programa se obtiene un error del tipo ***sintáctico*** debido a que falta la declaración de la variable `result`, esta variable sólo está inicializado.

    Para realizar la corrección de debe declarar e inicializar la variable como `int result = 0`.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_56-b_fixed.png" style="zoom:50%;" />

57. Analice el siguiente programa, corrija el error que tiene y verifique su funcionamiento.

    ```c++
    #include <iostream>
    using namespace std;
    #include <malloc.h>
    Typedef const char* PtrChar;
    typedef PtrChar* PtrPtrChar;
    PtrPtrCharcopia(PtrChar a, PtrChar b) {
    	PtrPtrChar p = (PtrPtrChar) malloc(sizeof(PtrChar) * 2);
    	p[0] = a;
    	p[1] = b;
    	return p;
    }
    intmain() {
    	PtrPtrChar mc = copia( "Novedades", "Mayormente" );
    	PtrPtrCharhny = copia( "Similaridad", "Algunas veces" );
    	cout<< mc[0]<< mc[1]<<endl;
    	cout<<hny[0], hny[1] <<endl;
    }
    ```

    Realizado por ***Gustavo Arauz***

    El programa en la línea `1` incluye la librería `iostream` que permite utilizar funciones de entrada-salida en el código fuente siguiente. En siguiente línea, la número `2`, se introduce el espacio de nombres `std` que permite usar elementos del estándar de la biblioteca *C++*  sin la necesidad de prefijarlos con `std::`. En la línea siguiente se incluye `<malloc.h>` para la asignación de memoria.

    En la línea `4` se define a `PtrChar` como un alias para `const char*` y en la siguiente línea, la `5`, se definen a `PtrPtrChar` como un alias a `PtrChar*`.

    Posteriormente, en la línea `6` se declara la función copia del tipo `PtrPtrChar`, que recibe como argumento dos elementos del tipo `PtrChar`. Luego se reserva la memoria utilizando `malloc` para el array `p`. En las líneas siguientes, se asigna a cada una de las posiciones del array `p[0]` y `p[1]` los valores de `a` y `b` y se retorna el puntero al array `p`.

    En la línea `12` se declara la función `main` del programa, dentro de la cual se llama a la función `copia` con dos pares de cadenas literales, almacenando los resultados en `mc` y en `hny`. Luego se imprimen los valores almacenado en `mc[0]`, `mc[1]`, `hny[0]` y `hny[1]`.

    **Errores**

    En la línea `4`  existe un error *léxico* que deriva en un error *sintáctico* `Typedef` en vez de `typedef`

    En línea `6`  un error *sintáctico* `PtrPtrCharcopia` sin espacio entre declaración y nombre de función

    En la línea `12` hay error *sintáctico* `intmain` sin espacio entre declaración de tipo y nombre de la función  `int main`

    En la línea `14` un error *sintáctico* `PtrPtrCharhny` sin espacio entre declaración de tipo y nombre de la variable. `PrtPtrChar hny`

    En la línea `16` existe un error *sintáctico* `cout<<hny[0], hny[1] <<endl;` `,` en vez de `<<`.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_57_error.png" style="zoom:49%;" />

    Corrección de errores:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_57_fixed.png" style="zoom:49%;" />

58. Analice lo que ocurre en cada caso, observando los mensajes desde la consola de errores, en cada caso corrija el error y pruebe de nuevo (F5 recarga la página en el navegador luego de ser modificada).

    ```html
    <HTML>
    	<HEAD>
    		<TITLE>Pruebas JS</TITLE>
    		<SCRIPT LANGUAGE="JAVASCRIPT">
    			Nombre = "La salida es: ";
    			alert("Hola, este es un programa de prueba");
    			x = 10;
    			y = x * x;
    			alert(nombre + y);
    		</SCRIPT>
    	</HEAD>
    	<BODY>
    		<p>Pruebas</p>
    	</BODY>
    </HTML>
    ```

    ***línea 9 error sintáctico*** El nombre de la variable debería ser `Nombre` en vez de `nombre`

    Desde el navegador en la consola de las herramientas de desarrollador se ve el error anteriormente citado.

    ![image-20240428164038973](D:\UTN\ssl\07.lenguajes_y_proceso_de_traducción\04.TP PT&AA\img/image-20240428164038973.png)

    La vista de los errores usando VisualStudio Code o WebSterm es la siguiente:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58_error_VSC.png" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58_error_js.png" alt="exercise_58_error_js" style="zoom:49%;" />

    

    La solución a este error es cambiar en la línea modificar el llamado a la variable `nombre` por `Nombre`.

    ```html
    <html lang="en">
    <head>
        <title>Prueba JS</title>
        <script language="javascript">
            Nombre = "La salida es: "
            alert("Hola, este es un programa de prueba");
            x = 10;
            y = x * x;
            alert(Nombre + y); // alert(nombre + y); ReferenceError nombre is not defined Se modifica variable nombre por variable Nombre
        </script>
    </head>
    
    <body>
    
    </body>
    
    </html>
    ```

    En navegador:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58_fixed_html00.png" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58_fixed_html01.png" alt="exercise_58_fixed_html01" style="zoom:49%;" />

    En VSC y js:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58_fixed_VSC.png" style="zoom:49%;" />

    

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58_fixed_js.png" alt="exercise_58_fixed_js" style="zoom:49%;" />

    ---

    ```html
    <HTML>
    	<HEAD>
    		<TITLE>Pruebas JS</TITLE>
    			<SCRIPT LANGUAGE="JAVASCRIPT">
    			function EscribeTitulo(t){
    				alert(t)
    			}
    	</SCRIPT>
    	</HEAD>
    	<BODY onLoad="EscribeTitulo(Título de la
    página)">
    	<p>Pruebas</p>
    	</BODY>
    </HTML>
    ```

    El error que se va a obtener proviene de que invocación de la función se realiza con un parámetro, el cual debería ser un *string*. 

    El error obtenido en la consola del navegador es :

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58-b_error_html.png" style="zoom:72%;" />

    Mientras que en js:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58-b_error_js.png" style="zoom:49%;" />

    La  solución es: 

    -  Si se hace en el `.html` se soluciona envolviendo con comillas simples ' '  templetes string \`` el argumento de la función en el método `onload` en el body.
    - Si se hace en el archivo `.js` se soluciona envolviendo con comillas simples '' o dobles  " \" o templetes string \`` el argumento de la función.

    ```html
    <!DOCTYPE html>
    <html lang="en">
    
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Prueba JS</title>
        <script language="javascript">
            function EscribeTitulo(t) {
                alert(t);
            }
        </script>
    </head>
    <!-- <body onload="EscribeTitulo(Título de la página)"> -->
    <!-- SyntaxError : missing ) after argument list -->
    <!-- Se soluciona envolviendo con comillas simples '' o dobles escapadas \" \" o templetes string `` el argumento de la función en el método `onload` en el body -->
    
    <body onload="EscribeTitulo('Título de la página')">
    
    </body>
    
    </html>
    ```

    En el navegador se obtiene:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58-b_fixed_html.png" style="zoom:49%;" />

    Y en js:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_58-b_fixed_js.png" style="zoom:49%;" />

59. Analice lo que ocurre en cada caso, observando los mensajes desde la consola de errores, en cada caso corrija el error y pruebe de nuevo (F5 recarga la página en el navegador luego de ser modificada).

    ```html
    <HTML>
    <HEAD>
    <TITLE>Pruebas JS</TITLE>
    	<SCRIPT LANGUAGE="JAVASCRIPT">
    		function multiplicar(x, y){
    			var w;
    			while (x =< y) x++;
    			return w
    		}
    		function ver(){
    			alert(multiplicar(2, 9));
    		}
    	</SCRIPT>
    </HEAD>
    <BODY onLoad='ver()'>
    </BODY>
    </HTML> 
    ```

    El error se encuentra en la línea `7`, el operador `=<`utilizado en el bucle `while` para comparar las variables `x` e `y` es inexistente en las especificaciones de *Javascript*. Se debería usar el operador menor o igual `<=` . Además, a la variable de retorno `w` falta inicializarla, por lo cual la función `multiplicar(x, y)` devolverá `undefined`. Para la corrección se la inicializa con el valor `0` y se le asigna el resultado de cada de la variable `x` en cada recorrido, posteriormente se post-incremento el valor de la misma.  También se debe considerar el nombre de la función, si bien no es un error el nombre es inapropiado para la funcionalidad. Se cambia a `sumaRango`.

    ```html
    ![exercise_59-a_error_html](https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_59-a_error_html.png)<!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Prueba JS</title>
        <script language="javascript">
            function sumaRango(x, y) {
                var w = 0; // se inicializa en 0
    			while (x <= y){ // while (x =< y) x++;  El símbolo de comparación menor o igual es <=
    				w += x++; // se le asigna a la variable w el valor de la variable x en ese loop además se post-incrementa en 1 a la variable x
    		    }
            }
            function ver() {
                alert(sumaRango(2, 9));
            }
        </script>
    </head>
    <body onload="ver()">
    </body>
    </html>
    ```

    En el navegador se muestra el error:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_59-a_error_html.png" style="zoom:70%;" />

    En js:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_59-a_error_js.png" style="zoom:49%;" />

    Después de las correciones:

    En html:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_59-a_fixed_html.png" style="zoom:49%;" />

    En js:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_59-a_fixed_js.png" style="zoom:49%;" />

    ¿Por qué no muestra 15?

    ```html
    
    <html>
    <head>
    	<title>Un ejemplo</title>
    	<script language="JavaScript">
    		function llamar(){
    			var x, y;
    			y = 3;
    			x = 12;
    			y =+ x; //La operación =+ solo asigna el valor de la variable `x` la variable `y`, la operación correcta para suma y asignación es +=
    			alert(y);
    		}
    </script>
    </head>
    <body onLoad="llamar()">
    <p>Llamador</p>
    </body>
    </html>
    ```

    El operador `=+` es desconocido por el compilador de *JavaScript*, sólo reconoce el operador `=`, en el línea `10` se asigna el valor de la variable `x` a `y`, sin realizar la suma y luego la asignación.

    Por lo que el código emite el `alert()` con un valor de `12`.

    En el navegador se muestra el `alert()` 

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_59-b_error_html.png" style="zoom:49%;" />

    En la consola de *js* se muestra el valor de `12`.

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_59-b_error_js.png" alt="exercise_59-b_error_js" style="zoom:49%;" />

    Para realizar la corrección se cambia el operador inexistente `=+` por el operador de suma-asignación `+=`. 

60. Las expresiones regulares son patrones que permiten expresar coincidencias con combinaciones de caracteres dentro de cadenas de texto. Muchos lenguajes modernos incluyen evaluadores de expresiones regulares, como por ejemplo JS o Java. Verifique el funcionamiento del siguiente programa JS, asignando a la variable la_expre (reemplace la línea punteada), una de las siguientes expresiones, y determine cuáles son los patrones de cadenas que son válidos como entrada para cada caso: 

    `/^(.+\@.+\..+)$/` 

    Patrones válidos:  uno o más [caracter] seguida/s de un @ seguido de uno o más [caracter]  seguida/s de un . seguido de uno o más [caracter] .

    `/^([0-9\s\+\-])+$/ `

    Patrones válidos: [caracter] numérico del 0 al 9 | signo + | signo - que se repite una o más veces.

    ```html
    <html>
    <head>
    	<title>Un ejemplo</title>
    	<script language="JavaScript">
    		function expresion(){
    			var la_expre = ……………………… ;
    			var texto = prompt("Valor: ");
    			if ( la_expre.test(texto) )
    				alert('La cadena es válida');
    			else
    			alert('La cadena NO es correcta');
    		}
    </script>
    </head>
    <body onLoad="expresion()">
    <p>Validador de expresiones regulares</p>
    </body>
    </html>
    ```

    ***Expresión Regular***: `/^(.+\@.+\..+)$/`

    *Cadenas inválidas*:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_01.png" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_02.png" alt="exercise_60_regex01_02" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_03.png" alt="exercise_60_regex01_03" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_04.png" alt="exercise_60_regex01_04" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_05.png" alt="exercise_60_regex01_05" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_06.png" alt="exercise_60_regex01_06" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_07.png" alt="exercise_60_regex01_07" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_08.png" alt="exercise_60_regex01_08" style="zoom:49%;" />

    Cadena válida:

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_09.png" style="zoom:49%;" />

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex01_10.png" alt="exercise_60_regex01_10" style="zoom:49%;" />

    <img src="D:\UTN\ssl\07.lenguajes_y_proceso_de_traducción\04.TP PT&AA\TP48571\img/exercise_60_regex01_js.png" alt="image-20240527221008628" style="zoom:49%;" />

    ***Expresión regular:*** `/^([0-9\s\+\-])+$/ `

    *Cadenas inválidas  y Cadenas válidas:*

    <img src="https://github.com/3dl3rw0lf/ssl/blob/main/t_p/img/exercise_60_regex02_js.png" style="zoom:49%;" />

61. Analice la siguiente versión del programa, en la cual se quieren copiar las cadenas de caracteres que se pasan como argumento a la función ‘copia’, corrija el error semántico que tiene y verifique su funcionamiento. Explique por qué la versión anterior del programa sí funcionaba y qué habría que corregir para que el programa funcione correctamente. 

    ```c++
    #include <iostream>
    using namespace std;
    #include <malloc.h>
    #include <string.h>
    typedef char *PtrChar;
    typedefPtrChar *PtrPtrChar;
    PtrPtrCharcopia(PtrChar a, PtrChar b) {
    	PtrPtrChar p = (PtrPtrChar) malloc(sizeof(PtrChar) * 2);
    	strcpy(p[0], a);
    	strcpy(p[1], b);
    	return p;
    }
    intmain() {
    	PtrPtrChar mc = copia( "Novedades", "Mayormente" );
    	PtrPtrCharhny = copia( "Similaridad", "Algunas veces" );
    	cout<<mc[0], mc[1] <<endl;
    	cout<<hny[0], hny[1] <<endl;
    	return 0;
    } 
    ```

    La versión anteriro funcionaba por que se realiza una asignación de memoria para los punteros a las cadenas de caracteres y se realiza la copia de los mismos.