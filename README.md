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
9. Sizeof operator: A special operator that returns the size of a specific variable's datatype. Usage `sizeof(x)`.
10. C performs implicit type conversions to calculate results but the final result is according to the data type where the result in being sent. Ref L14.
11. Explicit type conversions can be performed on variables. Usage `(target-datatype)var`. Example: converting a int to a float `(float)some_int_var`.
12. Formatters are not allowed inside scanf, use raw data indentifiers only. Example `scanf("5.2f");` does not work, while `scanf("%f");` works.
13. Getchar function accepts string input unlike scanf which accept any. getchar stop at a new line or EOF, while scanf terminates input at a white space along with new line and EOF. Example `c = getchar();`. Reads string character by character.
14. While using an `if-else` block, a ladder can be constructed in the following way:
    ```
        if (some-condition-1) {
            // do something if some-condition-1 evaluates to true
        } else if (some-condition-2) {
            // do something if some-condition-2 evaluates to true
        } else {
            // do something if both some-condition-1 and some-condition-2 evaluate to false
        }
    ```
15. `if-else` statements can be nested to produce more complex logic.
16. Char values are internally stored as their ASCII respresentations and as such can be compared like integer values. Position of decimals (0-9) < Upper case alphabets (A-Z) < Lower case alphabets (a-z). Refer a complete table [here](http://www.asciitable.com/)
17. Dangling else: When not using braces(`{}`) with `if-else` expressions, an else is always associated with the closest if statement. For example:
    ```
        if (x != 10)
            if (y > 3)
                z = z/2;
        else 
            z = z*2;
    ```
    is the same as:
    ```
        if (x != 10) {
            if (y > 3) 
                z = z/2
            else 
                z = z*2
        }
    ```
18. Use braces everywhere. Do not depend on C or a future reader to infer accurately the meaning of certain expressions. Safer and sure-shot option.
19. Switch: A switch is used when a lot of values are to be compared against a given expression. Usage: 
    ```
        switch (expression) {
            case const_1:
                // do something if expression evaluates to const_1
                break;
            case const_2:
                // do something if expression evaluates to const_2
                break;
            case const_3:
                // do something if expression evaluates to const_3
                break;
            default:
                // do something if expression does not evaluate to any constants; fallback case.
                break;
        } 
    ```
    Having a default case is recommended, although not necessary. 
    The first expression that matches is executed and any subsequent expressions if the `break` keyword isn't specified. It should almost always never be omitted. 

Note: Obvious inferences have been omitted, they can always be looked up in the lecture slides if needed.

## Resources

1. [Print modifiers](https://www.codingunit.com/printf-format-specifiers-format-conversions-and-formatted-output)