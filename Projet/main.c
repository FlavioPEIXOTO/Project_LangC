#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    printf("\n \n \n \nMAIN MENU\n \n1. Create New Game \n2. Load Saved Game \n3. About \n4. Exit\n");
    printf("Type 1, 2, 3, or 4\n");

    int choix;
    char name[20];
    scanf("%d", &choix);
    /*SDL_Event event;
    printf("help type h");
    if (SDKL_h)
    {
        printf("help");
    }*/
    if (choix == 1)
    {
        printf("Please enter your name\n");
        scanf("%s", &name);
        printf("You are in a forest surronded by trees, %s\n ", name);
        map();
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

void map() //Création de la liste bidimensionnel
{
    int tableau[10][10];
    int i; // Lignes
    for (i = 0 ; i < 10 ; i++)
    {
        int j; // Colonnes
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
            printf("%d | ", tableau[i][j]);
        }
        printf("\n");
    }
    return tableau;
}

void player () //joueur et sa position (deplacement)
{

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

void help () //Commande help
{

}

