#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void enterText(char *text){
    printf("Enter Text: \n");
    fgets(text, 79, stdin);  //SIZE - 1
}

void displayText(char *text){
    printf("%s\n", text);
}

int countCharacters(char *text){
    int counter = 0;
    while( *(text + counter) ){
        counter++;
    }
    return counter - 1;  //- 1 because without enter
}
void clear(void){
    while( getchar() != '\n' );
}