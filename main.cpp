#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void display(char letter_list[10][20]);
bool menu(char random_letters[10][20]);


int main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");

    int generator[200], z = 0;
    char random_letters[10][20];
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
     'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


    do
    {
    
        for (int i = 0; i < 200; i++)
        {
            generator[i] = rand() % 26 + 0;
        }

        for (int i = 0; i < 10; i++)
        {
            for (int l = 0; l < 20; l++)
            {
                random_letters[i][l] = alphabet[generator[z]];
                z++;
            }
            
        }
        z = 0;

    }while(menu(random_letters) == true);
}
