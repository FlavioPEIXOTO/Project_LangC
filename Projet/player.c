#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "map.h"
#include "chest.h"
#include "help.h"
#include "inventaire.h"
#include <windows.h>
#include "monster.h"
#include "ennemi.h"

//int height = 10;
//int width = 10;

    // Presentation du combat
void FightAppear()
{
    int fight_choice;
    color(4,0);
    printf("Un Monstre de level 1 apparait \n ");
    color(6,0);
    printf("Voulez-vous l'affronter ou fuire le combat ? \n 1 --> Affronter      2 --> Fuire le combat\n");
    scanf("%d", &fight_choice);
    //printf("%d\n",fight_choice);
    if (fight_choice == 1)
    {
        color(4,0);
        printf("Allons-y !\n\n ");
        color(7,0);
        //system("clear");
        affichageMonstre1();
        //Fight(int monster_attack, int monster_health, int player_attack_base, int player_health, int game_over, int arme);
        Fight();
        //Combat1();
    }
    else if (fight_choice == 2)
    {
        color(4,0);
        printf("Ce monstre est trop fort, la fuite est preferable\n\n");
        color(7,0);
    }
    else
    {
        FightAppear();
    }
}

void player (int tableau[10][10], int height, int width, int move, int PotForce, int PotVie) //joueur et sa position
{
    Object tbl_obj[20];
    Object inventory[10];
    //init_inventory(tbl_obj);
    declareObject(tbl_obj);
    //show_inventory(tbl_obj);
    int p = -1;
    int x = 0;
    int y = 0;
    int i,j;

    for (i=0 ; i < height ; i++)
    {
        for (j=0 ; j < width ; j++)
        {
            if (tableau[i][j] == 1)
            {
                if (i > 3 && j > 6)
                {
                    color(4,0);
                    printf("\nVous etes dans l'enceinte du chateau de Anemaviom");
                    color(7,0);
                }
                else
                {
                    color(2,0);
                    printf("\nVous etes dans la foret d'Anemaviom");
                    color(7,0);
                }
                if (i == 5 && j == 9)
                {
                    printf("\n\n\t Salle du BOSS");
                }
                x = i;
                y = j;
            }
        }
    }

    printf("\n \n");
    printf("1 pour aller a l'Est\n");
    printf("2 pour aller au Sud\n");
    printf("3 pour aller au Nord\n");
    printf("4 pour aller a l'Ouest\n");
    printf("6 pour voir l'aide\n");
    printf("7 pour voir l'inventaire\n");
    printf("8 pour afficher la map\n\n");

    scanf("%d", &move);

    if (move == 1)
    {
        //Detection ennemis
        if (tableau[x][y+1] == 2)
        {
            color(4,0);
            printf("Lancement du combat\n");
            color(7,0);
            FightAppear();
            //Combat1(Personnage* Player, Personnage* Ennemi1);
        }
        //Detection coffre
        if(tableau[x][y+1] == 3 )
        {
            color(2,0);
            printf("coffre trouver\n");
            //result();
            RndChest();
            color(7,0);
        }
        //Detection mur
        if (tableau [x][y+1] == 9)
        {
            //Le code a reconnu un mur
            p = 1;
        }
        tableau[x][y] = 0;
        tableau [x][y+1] = 1;
        //affiche(tableau, height, width);
        //Lorsque le programme reconnait un mur, remise du plateau comme avant la rencontre
        if (p == 1)
        {
            color(2,0);
            printf("droit dans le mur !!!\n");
            color(7,0);
            tableau[x][y+1] = 9;
            tableau[x][y] = 1;
            //Remise en fonction de la présence d'aucun mur
            p == -1;
        }
        affiche(tableau, height, width);
        //printf("%ld", strlen(*tableau)[10]);
    }
    else if (move == 2)
    {
        //Detection ennemis
        if(tableau[x+1][y] == 2 )
        {
            color(4,0);
            printf("Lancement du combat\n");
            color(7,0);
            FightAppear();
            //Combat1(Personnage* Player, Personnage* Ennemi1);
        }
        //Detection coffre
        if(tableau[x+1][y] == 3 )
        {
            color(2,0);
            printf("coffre trouver\n");
            //result();
            RndChest();
            color(7,0);
        }
        //Detection mur
        if (tableau [x+1][y] == 9)
        {
            //Le code a reconnu un mur
            p = 1;
        }
        tableau[x][y] = 0;
        tableau [x+1][y] = 1;
        //affiche(tableau, height, width);
        //Lorsque le programme reconnait un mur, remise du plateau comme avant la rencontre
        if (p == 1)
        {
            color(2,0);
            printf("droit dans le mur !!!\n");
            color(7,0);
            tableau[x+1][y] = 9;
            tableau[x][y] = 1;
            //Remise en fonction de la présence d'aucun mur
            p == -1;
        }
        affiche(tableau, height, width);
    }
    else if (move == 3)
    {
        //printf("test3\n");
        //Detection ennemis
        if(tableau[x-1][y] == 2 )
        {
            color(4,0);
            printf("Lancement du combat\n");
            color(7,0);
            FightAppear();
            //Combat1(Personnage* Player, Personnage* Ennemi1);
        }
        //Detection coffre
        if(tableau[x-1][y] == 3 )
        {
            color(2,0);
            printf("coffre trouver\n");
            //result();
            RndChest();
            color(7,0);
        }
        //Detection mur
        if (tableau [x-1][y] == 9)
        {
            //Le code a reconnu un mur
            p = 1;
        }
        tableau[x][y] = 0;
        tableau [x-1][y] = 1;
        //affiche(tableau, height, width);
        //Lorsque le programme reconnait un mur, remise du plateau comme avant la rencontre
        if (p == 1)
        {
            color(2,0);
            printf("droit dans le mur !!!\n");
            color(7,0);
            tableau[x-1][y] = 9;
            tableau[x][y] = 1;
            //Remise en fonction de la présence d'aucun mur
            p == -1;
        }
        affiche(tableau, height, width);
    }
    else if (move == 4)
    {
        //printf("test4\n");
        //Detection ennemis
        if(tableau[x][y-1] == 2 )
        {
            color(4,0);
            printf("Lancement du combat\n");
            color(7,0);
            FightAppear();
            //Combat1(Personnage* Player, Personnage* Ennemi1);
        }
        //Detection coffre
        if(tableau[x][y-1] == 3 )
        {
            color(2,0);
            printf("coffre trouver\n");
            //result();
            RndChest();
            color(7,0);
        }
        //detection des ennemis
        if (tableau [x][y-1] == 9)
        {
            //Le code a reconnu un mur
            p = 1;
        }
        tableau[x][y] = 0;
        tableau [x][y-1] = 1;
        //affiche(tableau, height, width);
        //Lorsque le programme reconnait un mur, remise du plateau comme avant la rencontre
        if (p == 1)
        {
            color(2,0);
            printf("droit dans le mur !!!\n");
            color(7,0);
            tableau[x][y-1] = 9;
            tableau[x][y] = 1;
            //Remise en fonction de la présence d'aucun mur
            p == -1;
        }
        affiche(tableau, height, width);
    }
    else if (move == 6)
    {
        help();
    }
    else if (move == 7)
    {
        printf("Ouverture de l'inventaire : \n");
        show_inventory(tbl_obj);
    }
    else if (move == 8)
    {
        affiche(tableau, height, width);
        printf("1 represente le joueur\n");
        printf("2 represente l'ennemi\n");
        printf("3 represente le coffre\n");
        printf("9 represente le mur\n");
        printf("5 represente le BOSS");
    }
    /*
    else if (move == 9) //Ajout de potion
    {
        MorePotiondeSoin(PotVie);
        //printf("%d\n", PotVie);
    }

    else if (move == 10) //consommation de potion
    {
        LessPotiondeSoin(PotVie);
    }
    */
    /*
    else if (move == 5)
    {
        exit();
    }*/
    else {
            printf("chiffre trop haut\n");
    //printf ("%d | ", tableau[x][y]);
    }
}
