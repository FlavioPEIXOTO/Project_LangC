#include <stdio.h>
int i; // Lignes
int j;
int map(int (*tableau)[10], int height, int width) //Création de la liste bidimensionnel
{

    for (i = 0 ; i < 10 ; i++)
    {
         // Colonnes
        for (j = 0 ; j < 10 ; j++)
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
    return *tableau[10], height, width;
}

