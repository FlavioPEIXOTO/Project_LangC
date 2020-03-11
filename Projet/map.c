#include <stdio.h>
int i; // Lignes
int j; // Colones
void map(int tableau[10][10], int height, int width) //Création de la liste bidimensionnel
{
    for (i = 0 ; i < height ; i++)
    {
        for (j = 0 ; j < width ; j++)
        {
            tableau[i][j] = 0;
            // Player = 1
            tableau [9][0] = 1;
            //Monstres = 2
            tableau [2][1] = 2; tableau[8][1] = 2; tableau [4][3] = 2;tableau [1][8] = 2; tableau [2][8] = 2; tableau [7][7] = 2;tableau [6][4] = 2; tableau [1][1] = 2; tableau [3][8] = 2;
            // Coffres = 3
            tableau [1][2] = 3; tableau [5][3] = 3; tableau [0][6] = 3; tableau [6][7] = 3;
            /*// Enigmes = 4
            tableau [6][7] = 4;*/
            // BOSS = 5
            tableau [5][9] = 5;
            // Mur = 9
            tableau [5][8] = 9; tableau [6][1] = 9; tableau [8][3] = 9; tableau [4][9] = 9; tableau [1][1] = 9; tableau [0][0] = 9; tableau [1][6] = 9; tableau [2][8] = 9; tableau [3][5] = 9; tableau [3][6] = 9; tableau [5][5] = 9;
            printf(" %d  | ", tableau[i][j]);
        }
        printf("\n");
    }
    //return *tableau[10];//, height, width;
}

    //Afiche la map
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
