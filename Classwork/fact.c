#include <stdio.h>

int main() {

    int n, fact = 1;
    printf("Enter number whose factorial is to be calculated: ");
    scanf("%d", &n);

    for (; n > 0; n--) {
        fact *= n;
    }

    printf("The factorial is: %d \n", fact);

    return 0;
}