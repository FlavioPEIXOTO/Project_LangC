void affichageMonstre(*pvEnnemi);
// Deplacement et Combats
void player (int (*tableau)[10]); //joueur et sa position
typedef struct Personnage Personnage; // du coup Personnage == struct Personnage
typedef struct Conversations Conversations; // du coup Conversations == struct Conversations
//int inventory()

// structure de variable pour attributs personnages
struct Personnage {
	int pv;
	int attaque1;
	int attaque2;
	int attaque3;
	int defense;
	char name[100]; // pour stocker son nom
};
struct Conversations {
	char phrase1;
	char phrase2;
	char phrase3;
	char phrase4;
	char phrase5;
};
