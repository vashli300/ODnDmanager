#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/character.h"
#include "../include/dice.h"

struct Character newCharacter;

Character createCharacter() { 
    
    newCharacter.EXPERIENCE = 0;

    newCharacter.ABILITY_STRENGTH     = roll(3,6);
    newCharacter.ABILITY_CONSTITUTION = roll(3,6);
    newCharacter.ABILITY_INTELLIGENCE = roll(3,6);
    newCharacter.ABILITY_WISDOM       = roll(3,6);
    newCharacter.ABILITY_DEXTERITY    = roll(3,6);
    newCharacter.ABILITY_CHARISMA     = roll(3,6);

    printf("> YOUR CHARACTER STARTS WITH:\n> STR %d\n> CON %d\n> INT %d\n> WIS %d\n> DEX %d\n> CHA %d\n", 
    newCharacter.ABILITY_STRENGTH,  newCharacter.ABILITY_CONSTITUTION, newCharacter.ABILITY_INTELLIGENCE, newCharacter.ABILITY_WISDOM, newCharacter.ABILITY_DEXTERITY,  newCharacter.ABILITY_CHARISMA);

    printf("> PLEASE CHOOSE A CLASS\n> ");
    
    chooseClass();
    
    printf("> YOUR CHARACTER'S CLASS IS %s. GOOD CHOICE!", newCharacter.CLASS);

    newCharacter.GOLD          = roll(3,6) * 10;
    
    return newCharacter;
}

void chooseClass() {
    char input[50];

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if(strcmp(input, "fighter") == 0) {
       strcpy(newCharacter.CLASS,"Fighter");

    } else if(strcmp(input, "cleric") == 0) {
        strcpy(newCharacter.CLASS,"Cleric");

    } else if(strcmp(input, "magicuser") == 0) {
       strcpy(newCharacter.CLASS,"Magic-User");

    } else {
        printf("> INVALID CLASS. PLEASE TRY AGAIN\n> ");
        chooseClass();
        return;
    }
}
