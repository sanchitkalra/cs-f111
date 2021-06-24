#include <stdio.h>

int main() {

    int a[100], n, m, c = 0, x = -1;

    printf("Enter the size of the array ");
    scanf("%d", &n);

    printf("Enter the elements of the array ");
    for (int k = 0; k < n; k++) {
        scanf("%d", &a[k]);
    }

    printf("Enter number to be searched ");
    scanf("%d", &m);

    for (int k = 0; k < n; k++) {
        if (a[k] == m) {
            c = 1;
            x = k;
            break;
        }
    }

    if (c == 1) {
        printf("The element %d was found at index %d \n", m, x);
    } else {
        printf("Element not found \n");
    }

    return 0;
}