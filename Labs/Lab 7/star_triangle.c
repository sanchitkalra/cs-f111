#include <stdio.h>

int main() {

    int x = 0, y = 0;
    unsigned int rows = 0;

    printf("Enter number of rows: ");
    scanf("%u", &rows);

    for (x = 1; x <= rows; ++x) {
        for (y = x; y <= rows; ++y) {
            printf(" ");
        }
        for (y = 1; y <= ((2*x) - 1); ++y) {
            printf("*");
        }
        for (y = x; y <= (2*rows -x); ++y) {
            printf(" ");
        }
        for (y = 1; y <= ((2*x) - 1); ++y) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}