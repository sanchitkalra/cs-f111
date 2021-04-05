#include <math.h>
#include <stdio.h>

int main() {

    int n, originalNum, remainder, size = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // store the number of digits of n in size
    for (originalNum = n; originalNum != 0; ++size) {
        originalNum /= 10;
    }

    for (originalNum = n; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        // store the sum of the power of individual digits in result
        result += pow(remainder, size);
    }

    //f n is equal to result, the number is an Armstrong number
    if ((int)result == n){
        printf("%d is an Armstrong number. \n", n);
    } else {
        printf("%d is not an Armstrong number. \n", n);
    }

    return 0;
}
