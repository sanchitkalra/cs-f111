#include <stdio.h>

int main(){
    int n;
    printf("Enter number \n");
    scanf("%d",&n);
    (n%2==0) ? printf("%d",--n):printf("%d",++n);
    return 0;
}
