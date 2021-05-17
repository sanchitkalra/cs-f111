// Task1
#include <stdio.h>

int main() {

    long long n;
    printf("Enter a decimal number: ");
    scanf("%lld",&n);
    int rem;
    printf("\n");
    int org=n,c1;
    int count=0;

    while(n!=0) {
        rem=n%16;
        n/=16;
        count++;
    }

    for(int i=count;i>0;i--) {
        c1=i;
        n=org;
        while(c1>0) {
            rem=n%16;
            n/=16;
            c1--;
        }
    
        if(rem<10) {
            printf("%d",rem);
        } else if(rem==10) {
            printf("A"); 
        } else if(rem==11) {
            printf("B"); 
        } else if(rem==12) {
            printf("C");
        } else if(rem==13) {
            printf("D");
        } else if(rem==14) {
            printf("E");
        } else if(rem==15) {
            printf("F");
        }
               
    }

    return 0;
}