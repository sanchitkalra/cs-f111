// Q 2(a)

#include <stdio.h>

int main() {

    int n, row, col;
    printf("Enter a number between 0 and 9: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            if (row <= col) {
                printf("%d", col);
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}