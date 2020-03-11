//typedef struct Object Personnage;
/*
void affichageMonstre1(Personnage personnage);
void Combat (*Player, *Ennemi1);
void Phrase ();
*/
void affichageMonstre1();

typedef struct Personnage Personnage; // du coup Personnage == struct Personnage
typedef struct Conversations Conversations; // du coup Conversations == struct Conversations

int Combat1();

// structure de variable pour attributs personnages

/*
struct Personnage {
	int pv;
	int attaque1;
	int arme;
	char name[100]; // pour stocker son nom
};
*/

struct Conversations {
	char phrase1;
	char phrase2;
	char phrase3;
	char phrase4;
	char phrase5;
};
//typedef struct Object Personnage;
/*
void affichageMonstre1(Personnage personnage);
void Combat (*Player, *Ennemi1);
void Phrase ();
*/
