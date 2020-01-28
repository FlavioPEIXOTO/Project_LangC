#include <stdio.h>
#include <stdlib.h>
#include "map.h"
//Taille du tableau
int height = 10;
int width = 10;

void main() //Creation du menu
{
    printf("\n \n \n \nMAIN MENU\n \n1. Create New Game \n2. Load Saved Game \n3. About \n4. Exit\n");
    printf("Type 1, 2, 3, or 4\n");

    /*SDL_Event event;
    printf("help type h");
    if (SDKL_h)
    {
        printf("help");
    }*/

    int choix;
    char name[20];
    scanf("%d", &choix);

    if (choix == 1)
    {
        printf("Please enter your name\n");
        scanf("%s", &name);
        printf("You are in a forest surronded by trees %s\n ", name);
        map(height, width);
        player();
    }

    else if (choix == 2)
    {
        printf("Chargement de votre sauvegarde\n");
    }

    else if (choix == 3)
    {
        printf("Les règles\n");
    }

    else if (choix == 4)
    {
        system("exit");
    }
    else{
        printf("Please type 1, 2, 3, or 4");
        main();
    }
    return 0;
}

void player (int tableau[height][width]) //joueur et sa position
{
    int x = 0;
    int y = 0;
    for (x ; x < height ; x++)
    {
        for (y ; y < width ; y++)
        {
            printf("toto");
            if (tableau[height][width] == 1)
            {
                int move;
                scanf("%d", &move);
                printf("un nombre inferieur ou egal a 4");
                if (move == 1)
                {
                    printf("test");
                    tableau[x][y] = 0;
                    tableau[x][y+1] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

                if (move == 2)
                {
                    printf("test2");
                    tableau[x][y] = 0;
                    tableau [x+1][y] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

                if (move == 3)
                {
                    printf("test3");
                    tableau[x][y] = 0;
                    tableau [x-1][y] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

                if (move == 4)
                {
                    printf("test4");
                    tableau[x][y] = 0;
                    tableau[x][y-1] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

            }

        }
    }
    printf("test_final");
    printf ("%d | ", tableau[x][y]);
}

void monster () //Si case ennemi , combat lancé (+parametre ennemi)
{

}

void attack () //Si combat, commandes d'attaque (+parametre attaque)
{

}

void coffre () //Si case coffre, objet dans coffre
{

}

void boss () // SI case boss , déclenchement combat (+parametre boss)
{

}

void help ()
{

}

void regle()
{

}
