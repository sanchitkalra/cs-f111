#include <stdio.h>

int main() {

    int n1 = 0, n2 = 1, n, fab;
    printf("Enter length of series: ");
    scanf("%d", &n);

    printf("Series: \n");
    printf("%d %d", n1, n2);

    for (int counter = 1; counter <= n - 2; counter++){
        fab = n1 + n2;
        printf(" %d", fab);
        n1 = n2;
        n2 = fab;
    } 

    printf("\n");

    return 0;
}