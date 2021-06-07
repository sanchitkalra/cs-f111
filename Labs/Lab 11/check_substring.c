#include<stdio.h>
#include<string.h>
int main() {

    char s[30], t[20];
    char *found;
    
    /* Entering the main string */
    puts("Enter the first string: ");
    gets(s);
    
    /* Entering the string whose position or index to be displayed */
    puts("Enter the string to be searched: ");
    gets(t);
    
    /*Searching string t in string s */
    found=strstr(s, t);
    if(found)
        printf("Second String is found in the First String at %d position.\n", found-s);
    else
        printf("-1");

    return 0;
}
