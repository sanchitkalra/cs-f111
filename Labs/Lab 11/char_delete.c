#include <stdio.h>
#include <string.h>

void delchar(char *x,int a, int b);

void main() {

    char string[10];
    int n,pos,P;
    
    puts("Enter the string ");
    gets(string);
    printf("Enter the position from where to delete: ");
    scanf("%d",&pos);
    printf("Enter the number of characters to be deleted: ");
    scanf("%d",&n);
    
    delchar(string, n,pos);

}
// Function to delete n characters
void delchar(char *x,int a, int b) {

    if ((a+b-1) <= strlen(x)) {
        strcpy(&x[b-1], &x[a+b-1]);
        puts (x);
    }

}
