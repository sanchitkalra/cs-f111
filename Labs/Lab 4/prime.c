#include <stdio.h>

int main() {

    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("The series is \n", n);

    for (int x = 2; x <= n; x++){
        int step = 0;
        for (int y = 2; y <= x-1; y++){
            if (x%y==0){
                step++;
                break;
            }
        }
        if (step == 0){
            printf("%d ", x);
        }
    }

    return 0;
}