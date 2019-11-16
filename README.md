# isa-1

Custom ISA for custom CPU architecture.

# BNF 

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

# ISA

Current instruction set

```
LDA [n]
ADD [n]
SUB [n]
JMP [address]
JE [address
OUTA
```
