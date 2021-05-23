#include <stdio.h>

int main() {
    
    char str[200];
    int line, word, ch;
    line = word = ch = 0;

    printf("Enter a string terminated with ~: \n");
    scanf("%[^~]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            line++;
            word++;
        } else {
            if (str[i] == ' ' || str[i] == '\t') {
                word++;
                ch++;
            } else {
                ch++;
            }
        }
    }

    printf("Characters: %d \n", ch);
    printf("Words: %d \n", word);
    printf("Lines: %d \n", line);

    return 0;
}