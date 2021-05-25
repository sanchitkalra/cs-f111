#include <stdio.h>
#define STUDENTS 3
#define ITEMS 5
int main() {

    char key[ITEMS + 1], response[ITEMS + 1];
    int count, i, student, n, correct[ITEMS + 1];

    //Reading of Correct answers
    printf("Input key to the items\n");
    
    for (i = 0; i < ITEMS; i++)
        scanf("%c", &key[i]);
    scanf("%c", &key[i]);
    key[i] = '\0';

    /*Evaluation begins */
    for (student = 1; student <= STUDENTS; student++) {

        /**Reading student responses and counting correct ones**/
        count = 0;
        printf("\n");
        printf("Input responses of student-%d\n", student);
        
        for (i = 0; i < ITEMS; i++)
            scanf("%c", &response[i]);
        scanf("%c", &response[i]);
        response[i] = 0;
        
        for (i = 0; i < ITEMS; i++)
            correct[i] = 0;
        
        for (i = 0; i < ITEMS; i++)
            if (response[i] == key[i]) {
                count = count + 1;
                correct[i] = 1;
            }

        /* printing of results */ printf("\n");
        printf("Student-%d\n", student);
        printf("Score is %d out of %d\n", count, ITEMS);
        printf("Response to the items below are wrong\n");
        n = 0;
        
        for (i = 0; i < ITEMS; i++)
            if (correct[i] == 0) {
            printf("%d ", i + 1);
            n = n + 1;
            }
        if (n == 0)
            printf("NIL\n");
        
        printf("\n");
        
        printf("The key is: ");
        
        for(int k = 0; k< ITEMS ; k++) {
            printf("%c ",key[k]);
        }

        printf("\n ");
    }
}