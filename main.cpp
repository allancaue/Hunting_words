#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void display(char letter_list[200]);


int main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");

    int generator[200], z = 0;
    char random_letters[200];
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
     'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int option;
    bool repetition = true;
    
    for (int i = 0; i < 200; i++)
    {
        generator[i] = rand() % 26 + 0;
    }

    for (int i = 0; i < 200; i++)
    {
        random_letters[i] = alphabet[generator[i]];
    }

    do
    {
        system("cls");
        printf("===Caça palavars===\n\n");
        printf("1 - Caça palavras\n2 - Sair\n\n");
        scanf("%d", &option);

        switch (option){
            case 1:
                display(random_letters);
                system("pause");
                break;
            case 2:
                repetition = false;
                return 0;
                break;
            default:
                system("cls");
                printf("###Opicao ERRADA###\n");
                system("pause");
                break;
        }
    }while(repetition == true);
}
