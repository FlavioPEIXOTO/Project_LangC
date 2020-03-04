#include <stdio.h>
int i; // Lignes
int j;
void map(int tableau[10][10], int height, int width) //Création de la liste bidimensionnel
{

    for (i = 0 ; i < height ; i++)
    {
         // Colonnes
        for (j = 0 ; j < width ; j++)
        {
            tableau[i][j] = 0;
            // Player = 1
            tableau [0][0] = 1;
            //Monstres = 2
            tableau [2][1] = 2; tableau [4][3] = 2;
            // Coffres = 3
            tableau [1][2] = 3;
            // Enigmes = 4
            tableau [6][7] = 4;
            // BOSS = 5
            tableau [5][9] = 5;
            printf(" %d  | ", tableau[i][j]);
        }
        printf("\n");
    }
    //return *tableau[10];//, height, width;
}

void affiche (int tableau[10][10], int height, int width)
{
    //printf(" %d  | ", tableau[height][width]);
   // printf(" %d  | ", tableau[i][j]);
    for (i = 0 ; i < height ; i++)
    {
         // Colonnes
        for (j = 0 ; j < width ; j++)
        {
            printf(" %d  | ", tableau[i][j]);
        }
        printf("\n");
    }
}
