// Print all Armstrong numbers between 1000 and 9999
#include <stdio.h>
#include <math.h>

void checkArmstrong(int x);

int main() {

    for (int i = 1000; i <= 999999; i++){
        checkArmstrong(i);
    }

    return 0;
}

void checkArmstrong(int x) {
    int n = x, originalNum, remainder, size = 0;
    float result = 0.0;

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
        printf("%d ", n);
    }
}