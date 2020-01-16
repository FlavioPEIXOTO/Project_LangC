#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
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

int map()
{

}

int player ()
{

}

int monster()
{

}

