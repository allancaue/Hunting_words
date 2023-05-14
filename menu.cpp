#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void display(char letter_list[10][20]);

bool menu(char random_letters[10][20])
{
    int option;

    system("cls");
    printf("===Caça palavars===\n\n");
    printf("1 - Caça palavras\n2 - Sair\n\n");
    scanf("%d", &option);

    switch (option){
        case 1:
            display(random_letters);
             system("pause");
             return true;
             break;
        case 2:
            return false;
            break;
        default:
            system("cls");
            printf("###Opicao ERRADA###\n");
            system("pause");
            return true;
            break;
    }
}