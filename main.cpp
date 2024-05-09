#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void menu(){
    printf("1 - Enter Text\n");
    printf("2 - Display Text\n");
    printf("3 - Count the characters\n");
    printf("4 - Upper case\n");
    printf("5 - Lower case\n");
    printf("0 - End the program\n");
}



int main() {
    char text[SIZE] = "";
    int choice = 0;

    do{
        menu();
        scanf("%d", &choice);
        clear();
        switch(choice) {
            case 1:
                enterText(text);
                break;
            case 2:
                displayText(text);
                break;
            case 3:
                printf("text lenght = %d\n",countCharacters(text));
                break;
            case 4:
                upperCase(text);
                break;
            case 5:
                lowerCase(text);
                break;
            default:
                printf("Select the correct program\n");
                break;
        }

    }while(choice != 0);


    return 0;
}
