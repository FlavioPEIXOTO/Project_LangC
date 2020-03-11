#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "map.h"
#include "player.h"
#include "inventaire.h"
#include "chest.h"
#include "monster.h"
//#include <SDL/SDL.h>
//#include <SDL/SDL_image.h>
//#include <fmodex/fmod.h>
#include <windows.h>
#include<MMsystem.h>
//#include<iostream>
//#include<mplayer>
//#include<Shellapi.h>
//#include<Shell32.lib>

    //Fonciton Couleur
void color(int t, int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

int main()
{
    printf("\t\t\t\t\tBienvenue sur ANEMAVIOM");
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
    //declareObject(tbl_obj);
    scanf("%d", &choix);
    if (choix == 1)
    {
        printf("Please enter your name\n");
        //PlaySound(TEXT("..\\..\\music\\musique1_test.mp3"),NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
        //PlaySound(TEXT("musique1_test.mp3"),NULL,SND_SYNC | SND_FILENAME);
        //PlaySound(TEXT("fmodex\\fmod.h\\musique1_test.mp3"),NULL,SND_SYNC | SND_FILENAME);

        //PlaySound(TEXT("musique1_test.wav"),NULL,SND_SYNC | SND_FILENAME);

        //PlaySound("C:\\SOUNDS\\musique1_test.mp3",NULL,SND_SYNC);
        //PlaySound( MAKEINTRESOURCE("musique1_test.mp3"), ghMonHandleDeResources, SND_ASYNC | SND_RESOURCE );
        //ShellExecute(HANDLE,"open",musique1_test.mp3,NULL,NULL,SW_SHOWNORMAL);

        color(9,0);
        scanf("%s", &name);
        color(7,0);
        //int pv_player = 100;
        int player_health = 100;
        //test();
        printf("You are in a forest surronded by trees %s\n ", name);
        int m[10][10];
        map(m,10,10);
        //Object test[10];
        while (player_health>0)
        {
            //init_inventory(test);
           // show_inventory(test);
            player(m);
        }
    }
    else if (choix == 2)
    {
        printf("Chargement de votre sauvegarde\n");
    }

    else if (choix == 3)
    {
        printf("\n\tFut un temps les Dieux regnaient en maitres sur nos terres. Tous veneraient ces etres de \n lumieres qui creerent notre monde ainsi que toutes les espèces qui la peuplent encore actuellement. \n Gobelins, Dragons, Harpies, Humains et bien d’autres encore ne portaient en leurs ame et conscience \n que bienveillance et partage.\n C’est par cette etat de pensee que les diverses civilisations se \n developpaient main dans la main et cela des milliers d’annees durant.\n Afin de maintenir en un morceaux le monde, les Dieux façonnerent une sainte foret qu’ils nommerent ANEMAVIOM \n , provenant de l’alliance du nom des createurs.  \n Les Dieux, considerant avoir fini leurs roles, finirent par remettre aux mains d’une famille \n le pouvoir de diriger ce monde. \nLes generations passerent et la reputation de cette famille ne faiblissait point. Malgre cela, toute bonne histoire \nconnaît une tragique fin. En effet, il y a 10 ans de cela, une force encore plus puissante apparu et fit de ce monde, un lieu rempli de terreur et de pleurs. Afin  d’arriver \n leurs fin, \nles forces du mal prirent d’assaut Anemaviom détruisant ainsi le monde en \n plusieurs parties.\n");
        printf("\nLes regles\n");
        printf("\nPresentation de l'equipe\n\n PEIXOTO Flavio\n BODJE Shadrack Emmanuel\n GERNAC-ALEIXO Antonio\n COUSDIKIAN Tom\n");
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
