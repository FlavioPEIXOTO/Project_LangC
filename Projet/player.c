#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "map.h"
//int height = 10;
//int width = 10;

void player (int (*tableau)[10], int height, int width) //joueur et sa position
{
    int x = 0;
    int y = 0;
    for (x ; x < height ; x++)
    {
        for (y ; y < width ; y++)
        {
            printf("toto\n");
            if (tableau[x][y] == 1)
            printf("essaie\n");
            {
                int move;
                printf("un nombre inferieur ou egal a 4\n");
                scanf("%d", &move);
                if (move == 1)
                {
                    printf("test\n");
                    tableau[x][y] = 0;
                    tableau[x][y+1] = 1;
                    printf ("tab[%u][%u] = %d | ",x ,y, *tableau[10]);
                    //printf("%ld", strlen(*tableau)[10]);
                }

                if (move == 2)
                {
                    printf("test2\n");
                    tableau[x][y] = 0;
                    tableau [x+1][y] = 1;
                    printf ("tab[%u][%u] = %d | ",x ,y, tableau[x][y]);
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
                /*
                if (move <=0 || move >4)
                {
                    printf("nombre entre 1 et 4");
                    player((*tableau)[10],  height,  width);
                }*/
                //x++;
                //y++;
            }
        y++;
        }
    x++;
    }
    printf("test_final\n");
    //printf ("%d | ", tableau[x][y]);
}
