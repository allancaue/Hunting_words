#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


bool menu(char random_letters[10][20], char word_slected[5][10]);

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");

    char random_letters[10][20];
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
                         'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char word_right[30][10] = {"abacaxi", "banana", "cachorro", "danca", "espelho", "frutas", "girassol", "historia", "inverno", "jacare", "arvore","praia","avenida","mercado","prassa","igreja","esquina","televisao","coruja","braco","oito","salada","macarao","suco","farinha","lasanha","porta","fruta","aroiz","almofada"};
    int selected[5] = {-1, -1, -1, -1, -1};
    int word_indices[30] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
    char word_slected[5][10];
    int aux[5] = {0,0,0,0,0};

    do
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                random_letters[i][j] = alphabet[rand() % 26];
            }
        }
        
        for (int i = 0; i < 5; i++)
        {
            for (int l = 0; l < 10; l++)
            {
                word_slected[i][l] = '\0';
            }
            
        }
        
        

        for (int i = 0; i < 5; i++)
        {
            bool already_used = false;
            int word_index = word_indices[rand() % (30 - i)];
            selected[i] = word_index;

            int row;

            do{
                already_used =false;
                row = rand() % 10;
                for (int l = 0; l < 5; l++)
                {
                    if(row == aux[l])
                    {
                        already_used = true;
                    }
                }
            }while(already_used == true);

            aux[i] = row;

            int col = rand() % (20 - strlen(word_right[word_index]));

            for (int j = 0; j < strlen(word_right[word_index]); j++)
            {
                random_letters[row][col + j] = word_right[word_index][j];
                word_slected[i][j] = word_right[word_index][j];
            }

            word_indices[word_index] = word_indices[4 - i];

        }


    }while(menu(random_letters, word_slected) == true);
}
