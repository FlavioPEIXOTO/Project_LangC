#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "player.h"

//Taille du tableau


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
