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
void lowerCase(char *text){
    while(*text){
        if('A' <= *text && *text <= 'Z'){
            *text += ('a' - 'A');
        }
        text++;
    }
}
void upperCase(char *text){
    while(*text){
        if('a' <= *text && *text <= 'z'){
            *text -= ('a' - 'A');
        }
        text++;
    }
}