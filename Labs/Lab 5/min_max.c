#include <stdio.h>
#include <limits.h>

int main() {

    int i = INT_MAX*INT_MAX;

    printf("%d ",i);
    printf("%d ",INT_MAX);
    printf("%d ",INT_MIN*INT_MAX);
    printf("%li ",(long)INT_MIN*(long)INT_MAX);
    return 0;
}
