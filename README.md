# ISA-1

Custom ISA for custom CPU architecture.


## Instruction Set

Current instruction set for target achitecture:

- [LDA](#LDA)
- [ADD](#ADD)
- [SUB](#SUB)
- [JMP](#JMP)
- [JE](#JE)
- [OUTA](#OUTA)


### LDA
Load a value into the A register.
```
LDA [n]
```

### ADD
Store a value in the A register, add to a value in the B register.
```
ADD [n]
```

### SUB
Store a value in the A register, subtract from the value in the B register.
```
SUB [n]
```

### JMP
Unconditional jump instruction to a program address.
```
JMP [address]
```

### JE
Conditional jump instruction.
```
JE [address]
```

### OUTA
Output the value of the A register to the display device.
```
OUTA
```

# High Level Language

## Grammar

Backus-Naur Form notation for higher level grammar.

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

## Author
This project was written by John Musgrave.

## License 
This project is licensed under a BSD 3-Clause License
