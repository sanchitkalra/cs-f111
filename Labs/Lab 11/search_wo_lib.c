#include <stdio.h>
#include <string.h>
 
int main() {
    char f[30], s[20];
    
    printf("Enter first string: ");
    gets(f);
    
    printf("Enter second string: ");
    gets(s);
    
    int n1 = strlen(f);
    int n2 = strlen(s);
    
    int index = -1;
    
    for(int i = 0; i < n1 - n2 + 1; i++) {
        char c[20];
        
        for(int j = 0; j < n2; j++) c[j] = f[i + j];
        c[n2] = '\0';
        
        if(strcmp(s, c) == 0){
            index = i;
            break;
        } 
    }
    
    if(index != -1) printf("String found at index %d", index);
    else printf("Not found");
    
    return 0;
}