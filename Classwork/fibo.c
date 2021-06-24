#include <stdio.h>

int fib(int num) {
    if (num == 0 || num == 1) {
        return num;
    } else {
        return fib(num-1) + fib(num-2);
    }
}

int main() {

    int n, terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    for (n = 0; n < terms; n++) {
        printf("%d ", fib(n));
    }

    return 0;
}