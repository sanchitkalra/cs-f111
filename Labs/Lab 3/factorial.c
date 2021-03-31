#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned int fact = 1;

    printf("Enter the number N: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Factorial of 0 is 1");
    } else if (n < 0) {
        printf("Factorial is not defined for negative numbers");
    } else {
        while (i <= n) {
            fact *= i;
            i++;
        }

        printf("Factorial of %d is %d \n", n, fact);
        
    }

    return 0;
}