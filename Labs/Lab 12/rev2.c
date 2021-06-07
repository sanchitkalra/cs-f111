#include <stdio.h>
#include <string.h>

int main() {

    char str[3000];
    char temp, *left, *right;

    printf("Enter the string: \n");
    scanf("%s", &str);
    left = str;
    right = str + strlen(str) - 1;

    while (right > left) {
        
        *left = *left + *right;
        *right = *left - *right;
        *left = *left - *right;
        left++;
        right--;

    }

    printf("The reversed string is: \n%s", str);
    

    return 0;
}