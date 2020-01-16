#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    printf("\n \n \n \nMAIN MENU\n \n1. Create New Game \n2. Load Saved Game \n3. About \n4. Exit\n");

    int choix;
    char name[20];
    scanf("%d", &choix);

    if (choix == 1)
    {
        printf("Please enter your name\n");
        scanf("%s", &name);
        printf("You are in a forest surronded by trees %s\n ", name);
        map();
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
    int i;
    for (i = 0 ; i < 10 ; i++)
    {
        int j;
        for (j = 0 ; j < 10 ; j++)
        {
            tableau[i][j] = 0;
            printf("%d | ", tableau[i][j]);
        }
        printf("\n");
    }
}

void player () //joueur et sa position
{

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
