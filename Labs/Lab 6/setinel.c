#include <stdio.h>

int main () {
    int x;
    int sum = 0;
    printf ("Enter your numbers: <EOF> to stop\n");
    while (scanf ("%d", &x) != EOF)
        sum += x;
    printf("The total is: %d\n", sum);
    return 0;
}
