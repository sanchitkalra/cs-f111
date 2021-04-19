#include <stdio.h>
int main () {
    int num;
    int lineCount;
    printf("Enter an integer between 1 and 50:");
    scanf("%d",&num);
    if (num > 50)
        num=50;
    lineCount = 0;
    while (num > 0) {
        if (lineCount < 10) {
            lineCount++;
        } else {
            printf("\n");
            lineCount = 1;
        }
        printf ("%3d", num--);
    }
    return 0;
}
