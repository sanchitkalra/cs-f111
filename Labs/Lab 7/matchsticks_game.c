#include <stdio.h>

int main() {

    int match_sticks = 21, computer_choice, user_choice;

    while (match_sticks >= 1) {
        
        printf("Total matchsticks remianing: %d\n", match_sticks);
        printf("Pick up matchsticks between 1 and 4: ");
        scanf("%d", &user_choice);

        if (user_choice > 4) {
            printf("Invalid entry, game ends ...");
            break;
        }

        computer_choice = 5 - user_choice;

        printf("Computer picks up %d matchsticks\n", computer_choice);
        match_sticks = match_sticks - user_choice - computer_choice;
        
        if (match_sticks == 1) {
            printf("You lost, computer won");
            break;
        }

    }
    

    return 0;
}