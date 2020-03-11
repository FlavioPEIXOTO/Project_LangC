#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Première énigme : Là où se rassemblent les habitants du ciel se trouve un chêne marqué par les lettres "N-E"
  Deuxième énigme : */
int PotVie = 0;
int PotForce = 0;
int num;

int nbr_life_pot = 0;
//int nbr_life_pot = 0; Test d'ajout de potions de soin

    //Random
int printRandomsChest(int lower_chest, int upper_chest,
                             int count_chest, int num)
{
    int i;
    for (i = 0; i < count_chest; i++) {
        num = (rand() %
           (upper_chest - lower_chest + 1)) + lower_chest;
            //printf("%d \n",num);
            //result();
            if (num==1)
            {
                printf("potion de vie en +\n");
            }
            if (num==2)
            {
                printf("potion de force en +\n");
            }
            if (num==3)
            {
                printf("\n La ou se rassemblent les habitants du ciel, se cache un Etre de puissance a l Ouest de leurs positions \n");
            }
            if (num==4)
            {
                printf("armes en +\n");
            }
            if (num==5)
            {
                printf("\n Vous rencontrez un arbre, en faisant le tour vous observez une gravure \n Gravure : N-E \n");
            }
    }
    return num;
}

    //Borne Random
int RndChest()
{
    int lower_chest = 1, upper_chest = 5, count_chest = 1;

    // Use current time as
    // seed for random generator
    srand(time(0));

    printRandomsChest(lower_chest, upper_chest, count_chest, num);
    //result();
    return 0;
}


        //Ancien Code
/*
int printRandomsEnigme(int lower_enigme, int upper_enigme,
                             int count_enigme, int num)
{
    int i;
    for (i = 0; i < count_enigme; i++) {
        num = (rand() %
           (upper_enigme - lower_enigme + 1)) + lower_enigme;
    }

    return num;
}

int RndEnigme()
{
    int lower_enigme = 1, upper_enigme = 2, count_enigme = 1;

    // Use current time as
    // seed for random generator
    srand(time(0));

    printRandomsEnigme(lower_enigme, upper_enigme, count_enigme, num);

    return 0;
}

void Enigme1()
{
    printf("\n Vous rencontrez un arbre, en faisant le tour vous observez une gravure \n Gravure : N-E \n");
}

void Enigme2()
{
    printf("\n Là où se rassemblent les habitants du ciel, se cache un être de puissance au Nord de leurs positions \n");
}

void DropEnigme(num)
{
    if (num == 1)
    {
        Enigme1();
    }
    else if (num == 2)
    {
        Enigme2();
    }
}*/
/*
void DropChest(int num)
{
    RndChest();
    printf(num);
    if (num == 1)
    {
        printf("+Potion de vie");
    }
    else if (num == 2)
    {
        printf("+Enigme");
        RndEnigme(num);
        DropEnigme();
    }
    else if (num == 3)
    {
        printf("+Arme");
    }
}*/

/*
int MorePotiondeSoin(int PotVie)
{
    printf("%d",PotVie);
    PotVie++;
    return PotVie;
}

int MorePotiondeForce(int PotForce)
{
    PotForce++;
    return PotForce;
}

int LessPotiondeSoin(int PotVie)
{
    PotVie--;
    return PotVie;
}

int LessPotiondeForce(int PotForce)
{
    PotForce--;
    return PotForce;
}
*/
/*
void Chest(int num){

    if (num == 1)
    {
        //ChestPotionDeSoin(nbr_life_pot);
        MorePotiondeSoin(PotVie);
    }
    if (num == 2)
    {
        printf("toto");
    }
}
*/
/*
void result()
{
    RndChest();
    if (num==1)
    {
        printf("potion de vie en +\n");
    }
    if (num==2)
    {
        printf("potion de force en +\n");
    }
    if (num==3)
    {
        printf("enigme en +\n");
    }
    if (num==4)
    {
        printf("armes en +\n");
    }
    if (num==5)
    {
        printf("\n Vous rencontrez un arbre, en faisant le tour vous observez une gravure \n Gravure : N-E \n");
    }
}*/

/*int ChestPotionDeSoin(int nbr_life_pot)
{
    int testchoice;
    scanf("%d",&testchoice);
    if (testchoice == 1)
    {
        nbr_life_pot++;
        printf("%d", nbr_life_pot);
    }
    else
    {
        printf("Fallait choisir 1");
    }
    return nbr_life_pot;
}*/
//conservation des énigmes
