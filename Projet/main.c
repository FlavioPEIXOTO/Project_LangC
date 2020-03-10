#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "map.h"
#include "player.h"
#include "inventaire.h"
#include "chest.h"
//#include <SDL/SDL.h>
//#include <SDL/SDL_image.h>
//#include <fmodex/fmod.h>
#include <windows.h>
#include<MMsystem.h>

void color(int t, int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

int main() //Creation du menu
{
    printf("\t \n \n MAIN MENU\n \n1. Create New Game \n2. Load Saved Game \n3. About \n4. Exit\n");
    color(3,0);
    printf("Type 1, 2, 3, or 4\n");
    color(7,0);

    /*SDL_Event event;
    printf("help type h");
    if (SDKL_h)
    {
        printf("help");
    }*/

    int choix;
    char name[20];
    scanf("%d", &choix);
    Object tbl_obj[20];
    Object inventory[10];
    declareObject(tbl_obj);
    show_inventory(tbl_obj);
    if (choix == 1)
    {
        printf("Please enter your name\n");
        //PlaySound(TEXT("..\\..\\music\\musique1_test.mp3"),NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
        //PlaySound("C:\\SOUNDS\\musique1_test.mp3",NULL,SND_SYNC);
        color(9,0);
        scanf("%s", &name);
        color(7,0);
        int pv_player = 100;
        //test();
        printf("You are in a forest surronded by trees %s\n ", name);
        int m[10][10];
        map(m,10,10);
        while (pv_player!=0)
        {
            player(m);
        }
    }

    else if (choix == 2)
    {
        printf("Chargement de votre sauvegarde\n");
    }

    else if (choix == 3)
    {
        printf("Les regles\n");
        printf("Presentation de l'equipe\n");
        main();
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
