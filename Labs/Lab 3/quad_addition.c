// Addition of 4 numbers
#include <stdio.h>

int main() {

    int n1, n2, n3, n4, sum;
    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    sum = n1 + n2 + n3 + n4;
    printf("The sum of the 4 numbers is %d \n", sum);

    return 0;
}