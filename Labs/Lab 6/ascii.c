#include <stdio.h>

int main() {
    
    char ch;
    printf("Enter a character: ");
    scanf("%c ", &ch);

    switch (ch < 32) {
        case 1:
            printf("control\n");
            break;

        case 0:
            printf("printable \n");
            switch (ch) {
                case 32:
                    printf("space \n");
                    break;
                
                default:
                    printf("graphical \n");
                    switch ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) || (ch >= 48 && ch <= 57)) {
                        case 1:
                            printf("alphanumeric \n");
                            switch (ch >= 48 && ch <= 57) {
                                case 1:
                                    printf("digit \n");
                                    break;
                                case 0:
                                    printf("alphabetic \n");
                                    switch (ch >= 65 && ch <= 90) {
                                        case 0:
                                            printf("lower case \n");
                                            break;
                                        case 1:
                                            printf("upper case \n");
                                            break;
                                    }
                                    break;
                            }
                            break;
                        
                        case 0:
                            switch ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) {
                                case 1:
                                    printf("punctuation \n");
                                    break;
                                case 0:
                                    printf("unknow character printed \n");
                                    break;
                            }
                            break;
                    }
                    break;
            }
            break;
    }

    return 0;
}