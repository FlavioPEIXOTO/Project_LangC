#include <stdio.h>
#include <stdlib.h>
#include "player.h" // là se trouve la structure personneage
#include <time.h> // pour rand
# include <string.h>

//l'affichage du mode combat
int affichageMonstre1(Personnage personnage1, Personnage personnage2){//Personnage=struct obj;
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
	printf("Point de vie ennemie %d \n Point de vie Player %d : %s, &personnage1.pv, personnage2.pv, personnage2.name");// print
}

// Je créer les valeurs ennemis (je ne sais pas si c'est necessaire de les mettre dans une fonction ou non ou les mettre dans la fonction combat
int fonctionPersonnage (Personnage Player, Personnage Ennemi1, Personnage Ennemi2){

    // Pour les attaques il se peut que dans la fonction combat, l'ennemi puisse tirer aleatoirement une attaque
    //remplissage des valeurs
    // Ennemi1
    Ennemi1.pv = 50;
    Ennemi1.attaque1 = 10;
    Ennemi1.attaque2 = 15;
    Ennemi1.attaque3 = 20;
    Ennemi1.defense = 25;
    strcpy(Ennemi1.name,"Chat_masque");//Ennemi1.name = "Chat_masque";
    // Ennemi2
    Ennemi2.pv = 150;
    Ennemi2.attaque1 = 15;
    Ennemi2.attaque2 = 30;
    Ennemi2.attaque3 = 35;
    Ennemi2.defense = Ennemi2.pv + 20;//Une sorte de regeneration de vie
    strcpy(Ennemi2.name,"Omar_Simps");//Ennemi2.name = "Omar_Simps";
    //Player
    Player.pv = 200 ;
    Player.attaque1 = 5;
    Player.attaque2 = 8;
    Player.attaque3 = 9;
    Player.defense = 10;
    scanf("%s",&Player.name);//le joueur va entrer le nom de son player
}

// je vais aussi appeler un struct phrase pour augmenter l'interaction des ennemis durant les combats
void Phrase (){
    Conversations Ennemi1;
    Conversations Ennemi2;
    //Conversations Ennemi3; si jamais il ny a un ennemi 3
    //Conversations Player; //Pour le player il se peut qu'apres une phrase ennemi, il puisse avoir un scanf de chaque proprietes ennemi
    // J'appelle les phrases
    //Ennemi1
    Ennemi1.phrase1 = "Prepare toi à mourir";// quand on entre dans le mode combat avec l'ennemi 1
	Ennemi1.phrase2 = "Ta fin est proche";// quand Ennemi1.pv > Player.pv/2
	Ennemi1.phrase3 = "C'est pas encore terminé";// quand Ennemi1.pv > Player.pv/2
	Ennemi1.phrase4 = "Game Over"; // quand Player.pv == 0; fin du combat
	Ennemi1.phrase5 = "Tu n'iras pas loin"; // quand Ennemi.pv == 0; fin du combat
    //Ennemi2
    Ennemi2.phrase1 = "Un ennemmi mais pas deux";// quand on entre dans le mode combat avec l'ennemi 1
	Ennemi2.phrase2 = "Ta fin est proche";// quand Ennemi1.pv > Player.pv/2
	Ennemi2.phrase3 = "C'est pas encore terminé";// quand Ennemi1.pv > Player.pv/2
	Ennemi2.phrase4 = "Game Over"; // quand Player.pv == 0; fin du combat
	Ennemi2.phrase5 = "Tu n'iras pas loin"; // quand Ennemi.pv == 0; fin du combat


}

// Generer un nombre entre 1 et 5 et en fonction du nombre nous pourrons permettre une attaque aleatoire apres attaque Player
int aleatoireNumber(){
    int retour;
    for (int i = 0; i<=4; i++){
        retour = rand()%4;
    }
    return retour;
    /*
    srand(time(NULL));
    int nbgen=rand()%4+1;    //entre 1-4
    printf("%d\n",nbgen);    //teste affichage
    return nbgen;*/
}
int randomAttaque(int aleatoireNumber(), Personnage personnage){

    if (aleatoireNumber == 1){
        printf("attaque de l'ennemi"); //apres on diminue dans les pvplayer le nombre de vie à diminuer et on reaffiche le mode combat
        return 1;
    } else if (aleatoireNumber == 2){
        printf("attaque de l'ennemi"); //apres on diminue dans les pvplayer le nombre de vie à diminuer et on reaffiche le mode combat
        return 2;
    } else if(aleatoireNumber == 3){
        printf("attaque de l'ennemi"); //apres on diminue dans les pvplayer le nombre de vie à diminuer et on reaffiche le mode combat
        return 3;
    } else if (aleatoireNumber == 4){
        printf("attaque de l'ennemi"); //apres on diminue dans les pvplayer le nombre de vie à diminuer et on reaffiche le mode combat
        return 4;
    }
}

//Mode combat ennemi1
void Combat (Personnage *Player, Personnage *Ennemi1, int alternative){
    int answerPlayer = scanf("%d",Player);

    do
    {
       // Le joueur attaque en premier donc on lui demande d'entrer le numero de son attaque
       while(answerPlayer == 1 || answerPlayer == 2 || answerPlayer == 3 || answerPlayer == 4){
           printf("A vous d'attaquer, (fuire == 9)");
           answerPlayer;
       }
       if (answerPlayer == 1){
           (*Ennemi1).pv -= (*Player).attaque1;
       }else if(answerPlayer == 2){
            (*Ennemi1).pv -= (*Player).attaque2;
       }else if(answerPlayer == 3){
            (*Ennemi1).pv -= (*Player).attaque3;
       }

       // Puis apres son attaque si vie ennemi = 0 on returne à la Map
       if ((*Ennemi1).pv <= 0){
            printf((*Ennemi1).phrase4);
        }
        if (answerPlayer == 9)
        {
            return map();// fin jeu
        }
        //Sinon l'ennemi attaque avec une attaque aleatoire et si son attaque retranche dans la vie de l'heros
       (*Player).pv -= Ennemi1.randomAttaque(aleatoireNumber(), (*Ennemi1)); //on retranche dans les points de vie joueur, la force du monstre en gros j'appelle la valeur de player et de cette valeur je vais utiliser les points de vie
       //Si Vie Ennemi <=0, on met game over sinon on continue le combat
       if ((*Player).pv <= 0)
       {
            printf("Ennemi Destroy");
            return map();//retourner à la map avec les pv actuels du joueur
       }
    } while((*Player).pv == 0 || (*Ennemi1).pv == 0);

    /*
    scanf("%s",&alternative);//pour fuire touche f

    // Tant les points de vie ne sont pas à 0 ou joeur n'a pas fuit, on continue le combat
    while((*Player).pv != 0 || (*Ennemi1).pv!=0 ){
        // l'utilisateur attaque, scanf touche utilisateur, si f alors fuire sinon si autre touche d'attaque alors la faire valoir
        //Puis l'ennei attaque à son tour
        // si point de vie == 0 pour les deux, sortir ou si utilisateur a invoqué alternatif
        (*Player).pv -= Ennemi1.randomAttaque(rand(), (*Ennemi1)); //on retranche dans les points de vie joueur, la force du monstre en gros j'appelle la valeur de player et de cette valeur je vais utiliser les points de vie
        (*Ennemi1).pv -= player.randomAttaque(rand(), (*Player));
        /*if (touchejoueur = alternative){
            break;
            return Map;
        }
    }*/

}
//Mode combat ennemi2
/*
void Combat (*Player, *Ennemi2){
    char alternative = "f"; //pour fuire
    while((*Player).pv == 0 || (*Ennemi2).pv)==0 ||){
        (*Player).pv -= (*Ennemi2).randomAttaque(rand(), *Ennemi2); //on retranche dans les points de vie joueur, la force du monstre en gros j'appelle la valeur de player et de cette valeur je vais utiliser les points de vie
        (*Ennemi2).pv -= (*player).randomAttaque(rand(), *Player);
        /*if (touchejoueur = alternative){
            break;
            return Map;
        }*/
/*    }

}*/


// Avec la methode struct, il advient de créer une nouvelle fonction ou un fichier combat

