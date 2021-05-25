#include <stdio.h>

void display (int j[], int n) {
    int i;
    for (i = 0; i <= n-1; i++) {
        printf("element = %d \n", *j);
        j++;
    }
}

int main() {

    int marks[] = {120, 34, 65, 45};
    display(marks, 4);

    return 0;
}