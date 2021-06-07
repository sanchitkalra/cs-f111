// #include <stdio.h>
// #include <string.h>

// int main() {

//     char a[200], b[100];
//     int lenA, lenB, k;
    
//     printf("Enter first string: ");
//     gets(a);
//     printf("Enter second string: ");
//     gets(b);

//     lenA = strlen(a);
//     lenB = strlen(b);

//     for (k = 0; k < lenB; k++) {
//         a[lenA + k + 1] = b[k];
//     }

//     printf("The concatenated string is %s ", a);

//     return 0;
// }

#include <stdio.h>

int main() {

   char str1[100], str2[50], i, j;
   
   printf("Enter first string: \n");
   scanf("%s",str1);
   printf("Enter second string: \n");
   scanf("%s",str2);
  
   for(i=0; str1[i]!='\0'; ++i); 
 
   for(j=0; str2[j]!='\0'; ++j, ++i){
       str1[i]=str2[j];
   }
 
   str1[i]='\0';
   printf("Output: %s \n",str1);
   
   return 0;
}
