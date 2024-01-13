#include "../include/initmenu.h"


void initmenu() {
    printf("> WELCOME TO THE OD&D MANAGER.\n> PLEASE ENTER A COMMAND.");
    interface();
}

int interface() {
    char input[50];
    
    printf("\n> ");
    
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if(strcmp(input, "roll") == 0) {
        diceRoller();

    } else if(strcmp(input, "quit") == 0) {
        return 0;

    } else if(strcmp(input, "rollsim") == 0) {
        diceRollerSimultaneous();

    } else if(strcmp(input, "newchar") == 0) {
        createCharacter();
    
    } else {
        printf("> INVALID. PLEASE TRY AGAIN");
    }
    
    return interface();

}
