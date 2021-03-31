#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, r1, r2;

    printf("Enter values for a, b, c in order \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if ((b*b) >= 4*a*c){
        r1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
        r2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
        printf("The roots are %f and %f \n", r1, r2);
    } else {
        printf("The roots are imaginary \n");
    }

}