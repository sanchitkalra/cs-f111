#include <stdio.h>
#include <math.h>

long long convert(int n);

int main() {

    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal is %lld in octal \n", n, convert(n));

    return 0;
}

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0){
        rem = n%8;
        n /= 8;
        bin += rem*i;
        i *= 10;
    }
    return bin;
}