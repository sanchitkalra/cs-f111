#include <stdio.h>

int main() {
    
    float largest(float a[], int n);
    float value[4] = {-2.8, -4.75, 3.2, 3.67};

    printf("%f \n", largest(value, 4));

    return 0;
}

float largest(float a[], int n) {
    int i;
    float max;
    max = a[0];

    for (i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }

    return max;

}