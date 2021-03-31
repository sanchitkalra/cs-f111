#include <stdio.h>

int main() {

    double n1, n2, n3, min, max;

    printf("Enter the three numbers in order: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2) {
        if (n1 >= n3) {
            max = n1;

            if (n2 >= n3) {
                min = n3;
            } else {
                min = n2;
            }
        } else {
            max = n3;
            min = n2;
        }
    } else if (n2 >= n3)
    {
        max = n2;
        if (n3 >= n1){
            min = n1;
        } else {
            min = n3;
        }
    } else {
        max = n3;
        min = n1;
    }
    
    printf("The diff between the max and the min is %.2lf \n", max-min);

    return 0;
}