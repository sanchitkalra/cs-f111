#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers \n");
    scanf("%d %d", &x, &y);
    if (x > y) {
        printf("%d is the largest \n", x);
    } else if (x == y){
        printf("%d and %d are equal \n", x, y);
    } else {
        printf("%d is the largest \n", y);
    }
    return 0;
}