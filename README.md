# isa-1

Custom ISA for custom CPU architecture.

## ISA

Current instruction set for target achitecture.

```
LDA [n]
ADD [n]
SUB [n]
JMP [address]
JE [address
OUTA
```

## Grammar

BNF Notation for grammar.

```
<expression> ::=
    <expression> & <arith_op> |
    <expression> | <arith_op> |
    [ not ] <arith_op>

<declaration> ::=
    [ global ] <procedure_declaration>
    [ global ] <variable_declaration>

<variable_declaration> ::=
    int <identifier>

<statement> ::=
    <assignment_statement> |
    <if_statement> |
    <loop_statement> |
    <return_statement>

<assignment_statement> ::=
    <destination> := <expression>

<if_statement> ::=
    if ( <expression> ) then ( <statement> ; )+
    [ else ( <statement> ; )+ ]
    end if

<loop_statement> ::=
    for ( <assignment_statement> ; <expression> )
        ( <statement> ; )*
    end for

<arith_op> ::=
    <arith_op> + <relation> |
    <arith_op> - <relation> |
    <relation>

<factor> ::=
    ( <expression> ) |
    [ - ] <name> |
    [ - ] <number> |
    <string> |
    true |
    false |

<name> ::=
    <identifier> [ [ <expression> ] ]

<identifier> ::=
    [a-zA-Z][a-zA-Z0-9_]*

<number> ::=
    [0-9][0-9_]*[.[0-9_]*]?
```


```
.
├── README.md
├── src
│   └── parser.c
└── tests
    ├── target.asm
    └── test.c

2 directories, 4 files
```


## License 

  * This project is licensed under a BSD 3-Clause License
