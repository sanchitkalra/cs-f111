#include <stdio.h>

void swap(int *x, int *y) {

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

int main() {

    int x = 10, y = 20, temp;

    printf("Initial state of variables: %d %d \n", x, y);

    swap(&x, &y);

    printf("Final state of variables: %d %d \n", x, y);

    return 0;
}