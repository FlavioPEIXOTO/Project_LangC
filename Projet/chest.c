#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Premi�re �nigme : L� o� se rassemblent les habitants du ciel se trouve un ch�ne marqu� par les lettres "N-E"
  Deuxi�me �nigme : */

int nbr_life_pot = 0;
//int nbr_life_pot = 0; Test d'ajout de potions de soin

void Chest(){
    int random = 1;
    if (random == 1)
    {
        ChestPotionDeSoin(nbr_life_pot);
    }
}


int ChestPotionDeSoin(int nbr_life_pot)
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
}

//conservation des �nigmes

void Enigme1()
{
    printf("Vous rencontrez un arbre, en faisant le tour vous observez une gravure \n Gravure : N-E");
}

void Enigme2()
{
    printf("L� o� se rassemblent les habitants du ciel, se cache un �tre de puissance au Nord de leurs positions");
}

void Enigme3()
{
    printf("_");
}
