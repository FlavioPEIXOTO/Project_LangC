#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int height = 10;
int width = 10;

void player (int (*tableau)[10]) //joueur et sa position
{

    int x = 0;
    int y = 0;
    for (x ; x < height ; x++)
    {
        for (y ; y < width ; y++)
        {
            printf("toto\n");
            if (tableau[height][width] == 1)
            printf("essaie\n");
            {
                int move;
                scanf("%d", &move);
                printf("un nombre inferieur ou egal a 4\n");
                if (move == 1)
                {
                    printf("test\n");
                    tableau[x][y] = 0;
                    tableau[x][y+1] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

                if (move == 2)
                {
                    printf("test2\n");
                    tableau[x][y] = 0;
                    tableau [x+1][y] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

                if (move == 3)
                {
                    printf("test3\n");
                    tableau[x][y] = 0;
                    tableau [x-1][y] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

                if (move == 4)
                {
                    printf("test4\n");
                    tableau[x][y] = 0;
                    tableau[x][y-1] = 1;
                    printf ("%d | ", tableau[x][y]);
                }
                if (move == 7)
                {
                    printf("Ouverture de l'inventaire : \n");
                    //inventory();
                }

            }

        }
    }
    printf("test_final\n");
    printf ("%d | ", tableau[x][y]);
}
