#include <stdio.h>
#include <math.h>

long long convert(long long int n) {

    long long bin = 0;
    long long int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n%2;
        n /= 2;
        bin += rem*i;
        i *= 10;
    }
    return bin;

}

int main() {

    long long int num1, num2 = 5, no, counter;
    long long fab = 1, count = 0;
    int power = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%lld", &no);
    num1 = convert(no);
    printf("Binary equivalent: %lld \n", num1);

    while (num1 != 0) {
        counter = num1%10;
        if (counter == 0) {
            num2 = num2*10 + 1;
        } else {
            num2 *= 10;
        }
        num1 /= 10;
    }

    while (num2%10 != 5) {
        rem = num2%10;
        num1 = num1*10 + rem;
        num2 /= 10;
    }

    printf("1's complement with leading 0s suppressed is %lld \n", num1);

    return 0;
}