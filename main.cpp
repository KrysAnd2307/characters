#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void menu(){
    printf("1 - Enter Text\n");
    printf("2 - Display Text\n");
    printf("3 - Count the characters\n");
    printf("4 - End the program\n");
}



int main() {
    char text[SIZE] = "";
    int choice = 0;

    do{
        menu();
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                break;
        }

    }while(choice != 4);


    return 0;
}
