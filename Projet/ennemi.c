#include <stdio.h>
#include <stdlib.h>
#include "player.h" // là se trouve la structure personneage
#include <time.h> // pour rand
# include <string.h>
struct Personnage {
	int pv;
	int attaque1;
	int arme;
	char name[100]; // pour stocker son nom
};
typedef struct Personnage Personnage; // du coup Personnage == struct Personnage



// Je créer les valeurs ennemis (je ne sais pas si c'est necessaire de les mettre dans une fonction ou non ou les mettre dans la fonction combat

//l'affichage du mode combat
void affichageMonstre1(){
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
}
//Affichage Monstre 2

void affichageMonstre2(){
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~");
    printf("             ______-==|                         | |  \\\\           _-~`");
    printf("       __--~~~  ,-/-==\\\\                       | |   `\\        ,'");
    printf("    _-~       /'    |  \\\\                      / /      \\      /");
    printf("  .'        /       |   \\\\                   /' /        \\   /'");
    printf(" /  ____  /         |    \\`\\.__/-~~ ~ \ _ _/'  /          \\/'");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`");
    printf("                  \\_|      /        _)   ;  ),   __--~~");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\");
    printf("                   {\\__--_/}    / \\\\_>- )<__\\      \\");
    printf("                   /'   (_/  _-~  | |__>--<__|      |");
    printf("                  |0  0 _/) )-~     | |__>--<__|     |");
    printf("                  / /~ ,_/       / /__>---<__/      |");
    printf("                 o o _//        /-~_>---<__-~      /");
    printf("                 (^(~          /~_>---<__-      _-~");
    printf("                ,/|           /__>--<__/     _-~");
    printf("             ,//('(          |__>--<__|     /                  .----_");
    printf("            ( ( ))          |__>--<__|    |                 /' _---_~\\");
    printf("         `-)) )) (           |__>--<__|    |               /'  /     ~\\`\\");
    printf("        ,/,'//( (             \__>--<__\    \            /'  //        ||");
    printf("      ,( ( ((, ))              ~-__>--<_~-_  ~--____---~' _/'/        /'");
    printf("    `~/  )` ) ,/|                 ~-_~>--<_/-__       __-~ _/");
    printf("  ._-~//( )/ )) `                    ~~-'_/_/ /~~~~~~~__--~");
    printf("   ;'( ')/ ,)(                              ~~~~~~~~~~");
    printf("  ' ') '( (/");
    printf("    '   '  `");
    printf("");
}

//Fonction de combat avec le monstre1

int Combat1 (Personnage *Player,Personnage*Ennemi1){
    //char alternative = "f"; //pour fuire
    //int tourEnnemi;
    Ennemi1->pv = 50;
    Ennemi1->attaque1 = 10;
    //Ennemi1->name = "Chat_masque";
    while (Player->pv == 0 || Ennemi1->pv == 0){
        affichageMonstre1();
        printf("L'ennemi attaque");
        Player->pv -= Ennemi1->attaque1; //on retranche dans les points de vie joueur, la force du monstre en gros j'appelle la valeur de player et de cette valeur je vais utiliser les points de vie
        printf("Au joueur d'attaquer");
        Ennemi1->pv -= Player->attaque1;
	}
	if (Ennemi1->pv==0){ //si vie ennemie ==0 alors on retourne à la map avec les points players
		printf("Ennemi1 mort");
	}
}
int Combat2 (Personnage *Player,Personnage *Ennemi2){
    //char alternative = "f"; //pour fuire
    //int tourEnnemi;
    Ennemi2->pv = 90;
    Ennemi2->attaque1 = 15;
    //Ennemi2->name = "Omar_Simps";
    while(Player->pv == 0 || Ennemi2->pv==0){
        affichageMonstre2();
        printf("L'ennemi attaque");
        Player->pv -= Ennemi2->attaque1; //on retranche dans les points de vie joueur, la force du monstre en gros j'appelle la valeur de player et de cette valeur je vais utiliser les points de vie
        printf("Au joueur d'attaquer");
        Ennemi2->pv -= Player->attaque1;
	}
	if (Ennemi2->pv==0){ //si vie ennemie ==0 alors on retourne à la map avec les points players
		printf("Ennemi2 mort");
	}
}

