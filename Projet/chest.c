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

int printRandomsChest(int lower_chest, int upper_chest, int count_chest, int num)
{
    int i;
    for (i = 0; i < count_chest; i++) {
        num = (rand() %
           (upper_chest - lower_chest + 1)) + lower_chest;
           printf("%d\n",num);
    }
    return num;
}

int test()
{
    int lower_chest = 1, upper_chest = 7, count_chest = 1;

    // Use current time as
    // seed for random generator
    srand(time(0));

    printRandomsChest(lower_chest, upper_chest, count_chest, num);

    return 0;
}

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

void Chest(int num){

    if (num == 1)
    {
        /*ChestPotionDeSoin(nbr_life_pot);*/
        MorePotiondeSoin(PotVie);
    }
    if (num == 2)
    {
        printf("toto");
    }
}


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

void Enigme()
{
    printf("Enigmes à venir");
}

void Enigme1()
{
    printf("Vous rencontrez un arbre, en faisant le tour vous observez une gravure \n Gravure : N-E");
}

void Enigme2()
{
    printf("Là où se rassemblent les habitants du ciel, se cache un être de puissance au Nord de leurs positions");
}

void Enigme3()
{
    printf("_");
}
