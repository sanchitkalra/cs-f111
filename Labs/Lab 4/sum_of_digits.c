#include <stdio.h>

int main() {

    int n, sum = 0, k = 1;

    printf("Enter number whose digits are to be added: ");
    scanf("%d", &n);

    while (n != 0){
        k = n % 10;
        sum = sum + k;
        k = n = n / 10;
    }

    printf("Sum of digits: %d \n", sum);

    return 0;
}