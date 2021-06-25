# CS-F111
CS F111 Course taught at BITS Pilani, Hyderabad Campus (1-2)

I'll periodically put all classwork and assignments here as and when I complete them.

A list of algorithms covered in the class is present [here](/Classwork)

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
12. Float formatters are not allowed inside scanf, use raw data indentifiers only. Example `scanf("5.2f");` does not work, while `scanf("%f");` works.
13. Getchar function accepts string input unlike scanf which can accept any data type. getchar stop at a new line or EOF, while scanf terminates input at a white space along with new line and EOF. Example `c = getchar();`. Reads string character by character.
14. While using an `if-else` block, a ladder can be constructed in the following way:
    ```c
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
    ```c
        if (x != 10)
            if (y > 3)
                z = z/2;
        else 
            z = z*2;
    ```
    is the same as:
    ```c
        if (x != 10) {
            if (y > 3) 
                z = z/2
            else 
                z = z*2
        }
    ```
18. Use braces everywhere. Do not depend on C or a future reader to infer accurately the meaning of certain expressions. Safer and sure-shot option.
19. Switch: A switch is used when a lot of values are to be compared against a given expression. Usage: 
    ```c
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
20. There are three kinds of loops, namely, the `while`, `do-while` and the `for` loop. `while` and `for` loops check for the condition to be true before the first iteration while the `do-while` loops performs the first iteration without checking for the validity of the expression. Each successive iteration is preceded by a condition check and the evaluation of the increment expression.
21. When a certain condition is met and we need to skip the remaining of a specific iteration, we use the `continue` statement and `break` when we need to break out or exit the entirely preventing any further iterations.
22. Multiple variables can be initialised in a single for loop (they could be expressions themselves) and test condition could be any compound condition that evaluates to a boolean expression. To create an infinite loop, use a null test condition.
23. An array is a sequenced indexed-addressible collection of elements. It stores homogenoues data only. Following are ways to init an array:
    ```c
        int arr[] = {3, 2, 1, 5, 6} // creates an array of size 5 with these values
        int arr[10] = {3, 2, 1, 5, 6} // creates an array of size 10 with the first five values the one as mentioned and the rest are zeros
        int arr[10] = {0} // create an array of size 10 and all values zero, optimal way to init arrays
        int arr[10]; // empty array of 10 elements, each index has a garbage value unless init, not recommended
    ```
    The number of elements being initialised cannot be greater than the size of the array or it could result in a segmentation fault. C does not check for array bounds, it is your responsibility to make sure everything is correct.
24. Any element of an array is addressible by it's index. Example `arr[i]` where arr is an array of length L and i lies between 0(inclusive) and the length of the array(exclusive).
25. Since an array is a sequential store of memory, each element's address can be represented as `element-address = base-address + (sizeof(element)*index)`, where base-address is the address of the first element which so happens to be the address of the array.
26. Values from an array can be passed by value and passed by reference. An example call by value: `function(arr[i])` and a call by reference would be like `function(&arr[i])` where i is any valid index of the array. A value passed by reference may be dereferenced with the dereference(`*`) operator.
27. Since an array is a reference to the address of the first element, `function(&marks[0])` and `function(marks)` is the same. The receiving variable in the `function` must be pointer of the same datatype and each element can be accessed by incrementing the pointer to the requisite index.
28. Individual elements of an array can also be accessed in the following manner: `*(arr + i)` where i is the requisite index. This can also be written in this way `i[arr]`. Essentially `arr[i]`, `*(arr + i)`, `*(i + arr)` and `i[arr]` are equivalent.
29. When init a 2D array, the first size specifier may be omitted provided the second has been specified when fully init the array at compile time. When init an empty or partially init an array, both sizes must be specified.
30. Any element of a 2D array may be accessed in the following manner: `arr[row-index][col-index]`.
31. Strings can be declared in the following ways: 
    ```c
        char city[7]; // empty string of size 7
        char city[7] = "Pilani"; // need not specify the null character
        char city[7] = {'B', 'I', 'T', 'S', '\0'}; // need to specify the null character; if unspecified, the null character isn't auto appeneded
        char *str = "BITS Pilani"; // init as a string pointer
    ```
    Strings init as arrays are mutable and string init as pointers are immutable
32. Like arrays, strings are also an array of characters, hence, C does not check for size and bounds, it is your responsiblity.
33. The null character(`\0`) is important it marks the end of a string and multiple libraries depend on it.
34. String input can be taken in the following ways
    ```c
        char text[80]; // a varible to hold the string
        
        scanf("%[^\n]", text); // using scanf to take input that includes whitespace and terminates at the new line character; any terminator can be used instead of the new line character by replacing \n with that character.

        // using getchar()
        while (ch != '\n') {
            ch = getchar();
            text[c] = ch;
            c++;
        }
        text[c] = '\0'; // must add the null character at the end of the string

        // using gets
        gets(text); // this is an unsafe way to get input since it does not check for bounds; reads until end of line.
    ```
35. Strings can be printed character by character using putchar, and the entire string at once using puts
    ```c
        char ch = 'A';
        putchar(ch); // prints a single character

        char line[30] = "Hello World!";
        puts(line); // prints the entire string
    ```
36. Characters are internally represented as integers corresponding to their positions in the ASCII table, hence, char arithmetic is possible
    ```c
        char x = '7'; // ASCII - 55
        char y = '0'; // ASCII - 48
        printf("%d", x-y); // prints '7' as 7 is the difference between the ACSII values of x and y
    ```
37. String representation of integers can be converted back to integers using the atoi() function. Example `atoi(string)`.
38. String manipulation functions
    ```c
        strcpy(destination, source); // copies the contents of source into destination with no bound checking
        strncpy(destination, source, n); // copies the contents of source into destination upto n characters
        strcmp(s1, s2); // returns a number greater than, smaller than, or zero if s1>s2, s1<s2, s1 = s2 respectively
        strncmp(s1, s2); // returns a number greater than, smaller than, or zero if s1>s2, s1<s2, s1 = s2 respectively upto n characters
        strlen(string); // returns the number of characters before the '\0' character
        strstr(s1, s2); // returns a pointer to the first character of s2 if found in s1 and a null pointer otherwise. s1 is the string to be examined and s2 the substring to be searched in s1.
    ```
39. When creating an array of strings, instead of using a 2D array, using a jagged array which an array of pointers to strings is preferred because strings can be any length and this is more memory efficient.
40. Functions can return values, have side effects, or both. If a function has both side effects and return values, the side effect happens before the value is returned.
41. Functions can either be declared and be fully defined before their usage or declared before they usage but defined elsewhere in the program. Example
    ```c
        void someFunction(int arg1, int arg2) { // data types of parameters must be defined here because the function is being declared and defined together
            // do something
        }
        int main() {

            someFunction(arg1, arg2);

            return 0;
        }
    ```
    is the same as
    ```c
        void someFunction(arg1, arg2); // the function is only being declared here, hence the data types may be omitted
        
        int main() {

            someFunction(arg1, arg2);

            return 0;
        }

        void someFunction(int arg1, int arg2) { // data types of parameters need to be defined where the function is being defined
            // do something
        }
    ```
    is the same as
    ```c
        void someFunction(); // the function is only being declared here, hence the parameters themselves may be omitted
        
        int main() {

            someFunction(arg1, arg2);

            return 0;
        }

        void someFunction(int arg1, int arg2) { // data types of parameters need to be defined where the function is being defined
            // do something
        }
    ```
    is the same as
    ```c
        void someFunction(int, int); // the function is only being declared here, hence specifying only the data types of the parameters is sufficient too
        
        int main() {

            someFunction(arg1, arg2);

            return 0;
        }

        void someFunction(int arg1, int arg2) { // data types of parameters need to be defined where the function is being defined
            // do something
        }
    ```
42. There are two ways of passing data to a function:
    1. Call by value. In this method the value is explicitly passed to a function and a copy in the memory is created.
    2. Call by reference. In this method a value is passed as a pointer to it's variable and hence no copies are created. This is the more memory efficient approach and allows the passed values to be changed.
43. Types of constant pointers
    ```c
        // const int *ptr
        // can change the variable a pointer points to, cannot change the value of a pointer
        int a = 56, b = 89;
        const int *ptr = &a;
        *ptr = 67 // this operation will fail
        ptr = &b; // this operation will succeed
    ```
    ```c
        // int *const ptr
        // can change the value of the variable a pointer points to, cannot change the pointer to point at a different variable
        int a = 56, b = 89;
        int *const ptr = &a;
        *ptr = 78; // this operation will succeed
        ptr = &b; // this operation will fail
    ```
    ```c
        // const int *const ptr
        // cannot change the variable a pointer points to, cannot change the value of a pointer
        int a = 56, b = 89;
        int *const ptr = &a;
        *ptr = 78; // this operation will fail
        ptr = &b; // this operation will fail too
    ```
44. Functions can also return pointers. Example
    ```c
        int* larger(int *px, int *py) {
            if (*px > *py) {
                return *px;
            } else {
                return *py
            }
        }
    ```
    This does not create multiple copies of variables and is much more memory efficient
45. To use a function as pointer, the syntax is `function-return-type (*pointer-name)(argument-list)`. Example
    ```c
        int sum(int x, int y){
            return x + y;
        }

        int main() {

            int (*ptr) (int, int);
            ptr = sum;

            printf("%d", ptr(25, 50));

            return 0;
        }
    ```
46. Size of all pointers is the same which is 8. A pointer is specific to a specific data type determined during its decleration.
47. Pointers can be derefernced to the same level, ie, double pointers to double poiters, single pointers to single pointers and so on.
48. Elements of 2D arrays can also be accessed using pointers. The pointer to the array stores the address of the first element of the 2D array, which itself, is an array. `*(arr + i) + j` will point to the address of the jth element of the ith 1D array inside a 2D array. `*(*(arr + i) + j)` will point to the jth value inside the ith array in the 2D array.

Note: Obvious inferences have been omitted, they can always be looked up in the lecture slides if needed.

## Resources

1. [Print modifiers](https://www.codingunit.com/printf-format-specifiers-format-conversions-and-formatted-output)