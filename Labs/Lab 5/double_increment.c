#include <stdio.h>

int main() {
    
    int i = 100;
    for (int i = 0; i <= 10; i++) { // a local variable i is defined in this loop
        {
            i++;
            // i is incremented by 1, so each output is shifted by 1, the output series hence becomes, 1 3 5 7 9 11
            printf("%d ", i);
        }
    }
    // i in this printf statement refers to the variable outside the for loop, hence the value 100
    printf("%d ", i);

    return 0;

}

// output: 1 3 5 7 9 11 100