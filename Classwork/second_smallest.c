#include <stdio.h>

int main() {

    int min, s_min, n, x = 1, buffer;
    printf("Enter number of numbers to compare \n");
    scanf("%d", &n);
    while (x <= n) {
        int c;
        printf("Enter %d number \n", x);
        scanf("%d", &c);
        printf("buffer1: %d \n", buffer);
        if (x == 1) {
            min = c;
            s_min = c;
        } else {
            if (c <= min && c <= s_min) {
                s_min = min;
                min = c;
            } else if (c <= s_min && c >= min) {
                s_min = c;
            } else if (c >= buffer && buffer <= s_min && buffer >= min){
                min = s_min;
                s_min = buffer;
            }
        }

        buffer = c;
        printf("buffer: %d \n", buffer);
        printf("min: %d \n", min);
        printf("s_min %d \n", s_min);
        x = x + 1;

    }

    printf("%d \n", s_min);

    return 0;
}