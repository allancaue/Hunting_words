#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void display(char letter_list[10][20])
{
    for (int i = 0; i < 10; i++)
    {
        for (int l = 0; l < 20; l++)
        {
            printf(" %c ", letter_list[i][l]);
        }
        printf("\n");
    }
    
}

