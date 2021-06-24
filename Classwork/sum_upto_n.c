#include <stdio.h>

int sum(int x) {
    if (x != 0) {
        return x + sum(x-1);
    } else {
        return x;
    }
}

int main() {

    int n;

    printf("Enter N upto which sum to be calculated ");
    scanf("%d", &n);

    printf("Sum is %d \n", sum(n));

    return 0;
}