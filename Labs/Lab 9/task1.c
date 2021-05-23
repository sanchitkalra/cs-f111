#include <stdio.h>

int main() {

    int n, carry = 1;
    printf("Enter the number of bits: ");
    scanf("%d", &n);

    char binary[n+1];
    char ones[n+1];
    char twos[n+1];

    printf("Enter the binary number: ");
    scanf("%s", binary);

    printf("1's complement of the number is: \n");
    
    for (int i = 0; i < n; i++) {
        if (binary[i] == '0') {
            ones[i] = '1';
        } else if (binary[i] == '1') {
            ones[i] = '0';
        }
    }
    ones[n] = '\0';

    printf("%s \n", ones);

    printf("The two's complement of the number is: \n");

    for (int i = n-1; i >= 0; i--) {
        if (ones[i] == '1' && carry == 1) {
            twos[i] = '0';
        } else if (ones[i] == '0' && carry == 1) {
            twos[i] = '1';
            carry = 0;
        } else {
            twos[i] = ones[i];
        }
    }
    twos[n] = '\n';

    printf("%s\n", twos);

    return 0;
}