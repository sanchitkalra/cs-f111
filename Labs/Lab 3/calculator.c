#include <stdio.h>

int main() {

    float n1, n2;
    char c;

    printf("Enter operation to perform: ");
    scanf("%c", &c);

    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    if (c == '+') {
        printf("The result is %f \n", n1+n2);
    } else if (c == '-') {
        printf("The result is %f \n", n1-n2);
    } else if (c == '*') {
        printf("The result is %f \n", n1*n2);
    } else if (c == '/') {
        printf("The result is %f \n", n1/n2);
    } else {
        printf("Undefined operation \n");
    }

    return 0;
}
