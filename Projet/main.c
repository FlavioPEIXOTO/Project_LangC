#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "map.h"
#include "player.h"
#include "inventaire.h"


//Taille du tableau


int main() //Creation du menu
{
    printf("\n \n MAIN MENU\n \n \n1. Create New Game \n2. Load Saved Game \n3. About \n4. Exit\n");
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

        int m[10][10];
        map(m,10,10);
        player(m);
    }

    else if (choix == 2)
    {
        printf("Chargement de votre sauvegarde\n");
    }

    else if (choix == 3)
    {
        printf("Les regles\n");
        printf("Presentation de l'equipe");
    }

    else if (choix == 4)
    {
        system("exit");
        printf("bye");
    }
    else
    {
        printf("Please type 1, 2, 3, or 4");
        main();
    }

    return 0;
}



int monster () //Si case ennemi , combat lancé (+parametre ennemi)
{
    return 0;
}

int attack () //Si combat, commandes d'attaque (+parametre attaque)
{
    return 0;
}

int coffre () //Si case coffre, objet dans coffre
{
    return 0;
}

int boss () // SI case boss , déclenchement combat (+parametre boss)
{
    return 0;
}

int help ()
{
    printf("Type 'help' if you need help");
    return 0;
}
