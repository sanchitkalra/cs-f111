#include <stdio.h>
#include <math.h>

long long convert(long long int n) {
    
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n%10;
        n /= 10;
        dec += rem*pow(2, i);
        ++i;
    }
    return dec;
    
}

long long convertB(long long int n) {
    
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

    long long int num1, num2, no, counter, fab = 1, count = 0;
    printf("Enter both the decimal numbers: \n");
    scanf("%lld %lld", &num1, &num2);

    num1 = convert(num1);
    num2 = convert(num2);
    no = num1 + num2;

    printf("The sum is %lld \n", convertB(no));

    return 0;

}