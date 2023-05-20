#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void display(char letter_list[10][20])
{
    printf(" ");
    for (int i = 0; i < 20; i++)
    {
        printf(" %d ", i);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d", i);
        for (int l = 0; l < 20; l++)
        {
            printf(" %c ", letter_list[i][l]);
            if(l > 9){
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
}

