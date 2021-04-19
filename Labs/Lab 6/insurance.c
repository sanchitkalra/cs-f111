#include <stdio.h>

int main() {

    int age, pre, max;
    char h, l, s;
    scanf("%c %d %c %c", &h, &age, &l, &s);

    if (h == 'e' && age >= 18 && age <= 30 && l == 'c' && s == 'm') {
        pre = 50;
        max = 3;
        printf("The payable premium is Rs.%d \n", pre);
        printf("The maximum policy amount is Rs. %d lakhs INR \n", max);
    } else if (h == 'e' && age >= 18 && age <= 30 && l == 'c' && s == 'f') {
        pre = 30;
        max = 2;
        printf("The payable premium is Rs.%d \n", pre);
        printf("The maximum policy amount is Rs. %d lakhs INR \n", max);
    } else if (h == 'p' && age >= 18 && age <= 30 && l == 'v' && s == 'm') {
        pre = 70;
        max = 1;
        printf("The payable premium is Rs.%d \n", pre);
        printf("The maximum policy amount is Rs. %d lakhs INR \n", max);
    } else {
        printf("The person is not insured");
    }

    return 0;
}