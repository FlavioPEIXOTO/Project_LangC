#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "map.h"
#include "ennemi.h"

//#include "player.h"

//int height = 10;
//int width = 10;
//int move;

void player (int tableau[10][10], int height, int width, int move) //joueur et sa position
{
    int x = 0;
    int y = 0;
    int i,j;

    for (i=0 ; i < height ; i++)
    {
        for (j=0 ; j < width ; j++)
        {
           // printf("toto\n");
            if (tableau[i][j] == 1)
            //printf("essaie\n");
            {
                //printf("essaie\n");
                x = i;
                y = j;

                /*
                if (move <=0 || move >4)
                {
                    printf("nombre entre 1 et 4");
                    player((*tableau)[10],  height,  width);
                }*/
            }
        //y++;
        }
    //x++;
    }

    printf("un nombre inferieur ou egal a 4\n");
    printf("1 pour aller a l'Est\n");
    printf("2 pour aller au Sud\n");
    printf("3 pour aller au Nord\n");
    printf("4 pour aller a l'Ouest\n");
    scanf("%d", &move);

    if (move == 1)
    {
        printf("test\n");
        if (tableau[x][y+1] == 2)
        {
            printf("lancement du combat\n");
        }
        tableau[x][y] = 0;
        tableau[x][y+1] = 1;
        affiche(tableau, height, width);
        //printf("%ld", strlen(*tableau)[10]);
    }
    else if (move == 2)
    {
        printf("test2\n");
        if(tableau[x+1][y] == 2 )
        {
            printf("lancement du combat\n");
        }
        tableau[x][y] = 0;
        tableau[x+1][y] = 1;
        affiche(tableau, height, width);
    }
    else if (move == 3)
    {
        printf("test3\n");
        if(tableau[x-1][y] == 2 )
        {
            printf("lancement du combat\n");
        }
        tableau[x][y] = 0;
        tableau [x-1][y] = 1;
        affiche(tableau, height, width);
    }
    else if (move == 4)
    {
        printf("test4\n");
        if(tableau[x][y-1] == 2 )
        {
            printf("lancement du combat\n");
        }
        tableau[x][y] = 0;
        tableau[x][y-1] = 1;
        affiche(tableau, height, width);
    }
    else if (move == 7)
    {
        printf("Ouverture de l'inventaire : \n");
        //inventory();
    }
    else {
            printf("test_final\n");
    //printf ("%d | ", tableau[x][y]);
    }

}

