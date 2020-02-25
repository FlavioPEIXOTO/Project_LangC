#include <stdio.h>
#include <stdlib.h>

void affichageMonstre(*pvEnnemi)
{
    printf("            /\---/\ \n");
	printf("           (       ) \n");
	printf("           ( @---@ ) \n");
	printf("           (  ___  ) \n");
	printf("             (   ) \n");
	printf("  ""======(         )=====""      \n");
	printf("  ##      (         )     ##      \n");
	printf("          (  """""" )           \n");
	printf("          (    #    )    / /   \n");
	printf("          (  """""" )   / /   \n");
	printf("          (         )  / /   /n");
	printf("          (         ) / /   /n");
	printf("          ~~~~~~~~~~~ /n");
	printf("           | |   | | /n");
	printf("           | |   | | /n");
	printf("           | |   | | /n");
	printf("           / |   | \ /n");
	printf("         /___|   |___\ /n");
	printf(" /n");
	printf(" /n");
	printf("Point de vie ennemie %d, &pvEnnemi");
}

void phraseEnnemie1()
{
	printf(" Te voilà %s",PlayerName);
}
void phraseEnnemie2()
{
	printf(" Te voilà fini %s",PlayerName);
}
void phraseEnnemie3()//si pvPlayer <= 1/3 pvPlayer debut alors
{
	printf(" Exterminé %s",PlayerName); // if pvPlayer == 0
	printf("GAME OVER !!! ");
}
void phraseEnnemie4()
{
	if (pvEnnemi == 0) {
		printf(" Tu ne passeras pas %s on t'auras ",PlayerName);
		// on supprime l'ennemi de la map
		// Map[][]=0;
		// on appelle map grace à la fonction de la map
		// return Map;
	}

}

int attaqueMonstre(numberAttaque)// Number Attaque pourrait etre aleatoire pour qu'on ait pas choisir l'attaque de l'enemi
{
	if (numberAttaque == 1)
	{
		printf("le monstre attaque avec morsure qui enleve 20 pv au brave \n");
		printf("pv hero est maintenant de %d", *pvPlayer-20);
		return affichageMonstre(*pvEnnemi);
	}
	else if (numberAttaque == 2)
	{
		printf("le monstre attaque avec griffe qui enleve 30 pv au brave \n");
		printf("pv hero est maintenant de %d", *pvPlayer-30);
		return affichageMonstre(*pvEnnemi);
	}
	else if (numberAttaque == 3)
	{
		printf("le monstre utilise regeneration point de vie qui ajoute 25 pv à son account \n");
		printf("pv Moonstre est maintenant de %d", *pvEnnemi+25);
		return affichageMonstre(*pvEnnemi);
	}
	else if (numberAttaque == 4)
	{
		printf("le monstre a raté son attaque \n");
		printf("pv hero est maintenant de %d", *pvPlayer);
		return affichageMonstre(*pvEnnemi);
	}

}

void Combat()// pour une attaque aleatoire ennemi
{
	affichageMonstre(*pvEnnemi);// on affiche l'enneli pour le mode combat
	printf("à vous d'attaquer \n");
}









