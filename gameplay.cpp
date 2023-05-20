#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

void display(char letter_list[10][20]);

void gameplay(char letter_list[10][20], char word_list[5][10])
{
    int coordinate[2], coordinate2[2],victory[5] = {0,0,0,0,0},z = 0, win_counter = 0, aux = 0;
    char word_copier[10];
    bool abacaxi = false,chocolate = false,gato = false,amigo = false,banana = false,
    cachorro = false,danca = false,escola = false,futebol = false,guitarra = false,repetition = true,
    check_the_win = false;
    do
    {
        for (int i = 0; i < 10; i++)
        {
            word_copier[i] = '\0';
        }

        printf("Listas de palavars:\n");

        for (int i = 0; i < 5; i++)
        {
            for (int l = 0; l < 10; l++)
            {
                printf("%c",word_list[i][l]);
                if (l == 9)
                {
                    printf("\n");
                }
                
            }
            
        }
        printf("\n\nVoce achou %d de 5\n\n",win_counter);
        

        display(letter_list);

        printf("escerva a cordenada(linha coluna), da primeira letra: ");
        scanf("%d %d", &coordinate[0], &coordinate[1]);

        printf("\n\nescerva a cordenada(linha coluna), da utima letra: ");
        scanf("%d %d", &coordinate2[0], &coordinate2[1]);

        printf("essa foi a palavara que voce escolheu: ");
        int c = 0;
        for (int i = coordinate[0]; i <= coordinate2[0]; i++)
        {
            for (int l = coordinate[1]; l <= coordinate2[1]; l++)
            {
                printf("%c",letter_list[i][l]);
                fflush(stdin);
                word_copier[c] = letter_list[i][l];
                c++;
            }
            
        }
        sleep(3);
        printf("\n\ne voce ");
        for (int i = 0; i < 3; i++)
        {
            printf(".");
            sleep(1);
        }

        for (int i = 0; i < 5; i++)
        {
            if(strcmp( word_list[i], word_copier) == 0)
            {
                win_counter++;
                check_the_win = true;
                printf("ACERTOU\n\n");
                for (int i = coordinate[0]; i <= coordinate2[0]; i++)
                {
                    for (int l = coordinate[1]; l <= coordinate2[1]; l++)
                    {
                        letter_list[i][l] = '.';
                    }
                }
                aux = 1;
            }
        }
        if(aux == 0)
        {
            printf("ERROU");
        }

        sleep(3);
        
        
        if (check_the_win == true)
        {
            victory[z] = 1;
            z++;
            check_the_win = false;
        }
        if (victory[0] == 1 && victory[1] == 1 && victory[2] == 1 && victory[3] == 1 && victory[4] == 1)
        {
            printf("\n\nVoce cadertou todas a palavars PARABES");
            repetition = false;
        }
        

    sleep(3);
    system("cls");


    } while (repetition == true);
    return;
    
}