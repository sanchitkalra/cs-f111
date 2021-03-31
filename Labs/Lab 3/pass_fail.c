#include <stdio.h>

int main() {
    double num1, num2, num3, num4, num5;
    
    printf("Enter marks of subject 1: ");
    scanf("%lf", &num1);
    printf("Enter marks of subject 2: ");
    scanf("%lf", &num2);
    printf("Enter marks of subject 3: ");
    scanf("%lf", &num3);
    printf("Enter marks of subject 4: ");
    scanf("%lf", &num4);
    printf("Enter marks of subject 5: ");
    scanf("%lf", &num5);

    double avg = (num1+num2+num3+num4+num5)/5;

    if (avg >= 75) {
        printf("Pass \n");
    } else {
        printf("Fail \n");
    }

    return 0;
}