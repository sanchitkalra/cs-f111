#include <stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n*fact(n-1);
    }
}

int main() {

    int n, factorial = 1;
    printf("Enter number whose factorial is to be calculated: ");
    scanf("%d", &n);

    factorial = fact(n);

    printf("The factorial is: %d \n", factorial);

    return 0;
}