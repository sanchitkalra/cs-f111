#include <stdio.h>

int main() {

    int n;
    float temp, sqrt;

    printf("Number: ");
    scanf("%d", &n);

    sqrt = n/2;
    temp = 0;

    while (sqrt != temp) {
        temp = sqrt;
        sqrt = (n/temp + temp) / 2;
    }

    printf("The square root of %d is %f \n", n, sqrt);

    return 0;
}