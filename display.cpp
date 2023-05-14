#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void display(char letter_list[200])
{
    int l = 0;


    for (int i = 0; i < 200; i++)
    {
        printf(" %c ", letter_list[i]);
        l++;
        if(l == 20){
            printf("\n");
            l = 0;
        }
    }
    
}

