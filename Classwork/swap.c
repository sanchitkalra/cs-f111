#include <stdio.h>

int main() {

    int x = 10, y = 20, temp;

    printf("Initial state of variables: %d %d \n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("Final state of variables: %d %d \n", x, y);

    return 0;
}