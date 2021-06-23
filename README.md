# CS-F111
CS F111 Course taught at BITS Pilani, Hyderabad Campus (1-2)

I'll periodically put all classwork and assignments here as and when I complete them.

## Notes

1. The escape character `\ooo` is used to print Octal Numbers and `\xxh` to print Hexadecimal Numbers. (Ref Lec 10). 
2. Storage Classes:
    1. auto: local var known only in scope (default); needs explicit init
    2. static: retains it's value even after control is transferred to parent; automatically init to 0
    3. extern: global var accessible to all functions; automatically init to 0; lives even after control is transferred to parent
    4. register: var stored in the register; scope is within the block only
3. `typedef`: used as a name for a certain datatype for semantic reasons. An integer representing prices could be referred as `typedef int price` and used as `price wheat = 100;`. A use of a qualifier without a datatype makes the var an int by default.
4. `#define` can be used to define static values for the entire program. The value being defined is generally written in upper case to denote it is a constant (sematic rule, not mandated by C itself). Usage: `#define PI 3.14`
5. When an integer is divided by another integer and the value is not a whole number, the numbe is not automatically converted to a float, the decimal part is truncated. See [this](/Classwork/division_typecasting.c)
6. Use of logical operators:
    1. Logical AND: When using logical AND with the symbol `&&`, the expression on the left is evaluated first and the second is evaluated if and only if the first is true, or else the second expression is ignored completely. The result is true only if both the expression evaluate to true.
    2. Logical OR: When using logical OR with the symbol `||`, the expression on the left is evaluated first and the second is evaluated if and only if the first is false, or else the second expression is ignored completely. The result is false only if both the expression evaluate to false.
    3. Logical NOT: The logical NOT operator denoted by the symbol `!` is used to negate the value of an expression. This is a single value operator.
7. Conditional operator: This operator is used to execute specific functions based on a binary expression. Each evaluation may correspond to only one function call. Usage `(expression) ? functionIfTrue(args) : functionIfFalse(args)`
8. Comma operator: It is a special operator used within a set of parentheses. The expressions are evaluated from left to right sequentially and the final value of the final expression is the output of such a evaluation. Usage `(exp1, exp2, exp3, .... expN)`. See more [here](https://www.geeksforgeeks.org/comna-in-c-and-c/)
9. 