#include <stdio.h>
#include <stdlib.h>

//Taille du tableau
int height = 10;
int width = 10;

void main(int argc, char *argv[])
{
    printf("\n \n \n \nMAIN MENU\n \n1. Create New Game \n2. Load Saved Game \n3. About \n4. Exit\n");
    printf("Type 1, 2, 3, or 4\n");

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

    if (choix == 2)
    {
        printf("Chargement de votre sauvegarde\n");
    }

    if (choix == 3)
    {
        printf("Les règles\n");
    }

    if (choix == 4)
    {
        system("exit");
    }
    return 0;
}

void map(int height, int width) //Création de la liste bidimensionnel
{
    int tableau[height][width];
    int i; // Lignes
    int j;
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
            printf("%d | ", tableau[i][j]);
        }
        printf("\n");
    }
    return tableau;
}

void player (int tableau[height][width]) //joueur et sa position
{

    int x;
    int y;
    for (x = 0 ; x < height ; x++)
    {
        for (y = 0 ; y < width ; y++)
        {
            printf("toto");
            if (tableau[x][y] == 1)
            {
                int move;
                scanf("%d", &move);
                printf("testtoto");
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
    printf("toto");
    printf ("%d | ", tableau[x][y]);
}

void ennemi () //Si case ennemi , combat lancé (+parametre ennemi)
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
