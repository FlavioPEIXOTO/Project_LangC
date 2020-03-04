#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "map.h"
//#include "player.h"

//int height = 10;
//int width = 10;
//int move;
void player (int tableau[10][10], int height, int width, int move) //joueur et sa position
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
                //printf("essaie\n");

                printf("un nombre inferieur ou egal a 4\n");
                printf("1 pour aller a l'Est\n");
                printf("2 pour aller au Sud\n");
                printf("3 pour aller au Nord\n");
                printf("4 pour aller a l'Ouest\n");
                scanf("%d", &move);
                if (move == 1)
                {
                    printf("test\n");
                    tableau[x][y] = 0;
                    tableau[x][y+1] = 1;
                    affiche(tableau, height, width);
                    //printf("%ld", strlen(*tableau)[10]);
                }
                if (move == 2)
                {
                    printf("test2\n");
                    tableau[x][y] = 0;
                    tableau[x+1][y] = 1;
                    affiche(tableau, height, width);
                }
                if (move == 3)
                {
                    printf("test3\n");
                    tableau[x][y] = 0;
                    tableau [x-1][y] = 1;
                    affiche(tableau, height, width);
                }
                if (move == 4)
                {
                    printf("test4\n");
                    tableau[x][y] = 0;
                    tableau[x][y-1] = 1;
                    affiche(tableau, height, width);
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
        //y++;
        }
    //x++;
    }
    printf("test_final\n");
    //printf ("%d | ", tableau[x][y]);
}

/*
int figth(){
    //int pv = 500;
    int run;
    //scanf("%d", &run);
    struct perso player;
    player.pv = 100;
    player.force = 15;
    while (pv !=0 || run == 11);
    {
        printf("En combat");
    }
    return 0;
}*/
