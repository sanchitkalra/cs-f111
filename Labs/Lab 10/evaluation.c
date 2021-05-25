#include <stdio.h>
#define STUDENTS 3
#define ITEMS 25

int main() {
    
    char keys[ITEMS + 1], responses[ITEMS + 1];
    int count, i, student, n, correct[ITEMS + 1];

    printf("Input key to the items \n");
    for (i = 0; i < ITEMS; i++) {
        scanf("%c", &keys[i]);
    }
    scanf("%c", &keys[i]);
    keys[i] = '\0';

    for (student = 1; student <= STUDENTS; student++) {
        
        count = 0;
        printf("\n");

        printf("Input responses of student %d \n", student);
        for (i = 0; i < ITEMS; i++) {
            scanf("%c", &responses[i]);
        }
        scanf("%c", &responses[i]);
        responses[i] = '\0';

        for (i = 0; i < ITEMS; i++) {
            correct[i] = 0;
        }

        for (i = 0; i < ITEMS; i++) {
            if (responses[i] == keys[i]) {
                count++;
                correct[i] = 1;
            }
        }

        printf("Student %d \n", student);
        printf("Score is %d out of %d \n", count, ITEMS);
        printf("Response to the following items are incorrect: \n");

        n = 0;
        for (i = 0; i < ITEMS; i++) {
            if (correct[i] == 0) {
                printf("%d", i+1);
                n++;
            }
        }

        if(n == 0) {
            printf("NIL \n");
        }

        printf("\n");

    }

    return 0;
}