#include <string.h>
#include "chest.h"

typedef struct Object Object;
struct Object
{
    char name[255];
    int value;
    int Nbr;
};

Object* declareObject()
{
    Object tbl[10];

    Object LifePotion;
    LifePotion.value = 10;
    strcpy(LifePotion.name,"Potion de vie");
    tbl[0] = LifePotion;

    Object Knife;
    Knife.value = -10;
    Knife.Nbr = 1;
    strcpy(Knife.name,"Couteau en bois");
    tbl[1] = Knife;

    Object Sword;
    Sword.value = -30;
    Sword.Nbr = 1;
    strcpy(Sword.name,"Épée");
    tbl[2] = Sword;

    return tbl;
};

//ajout d'un objet dans l'inventaire
int add_inventory(Object *inventory,Object objet){
    for (int i=0;i<20;i++){
        if (inventory[i].value == 0){
            inventory[i] = objet;
        }
    }
    return inventory;
}

int delete_inventory(Object *inventory,int x){
    strcpy(inventory[x].name,"Coucou");
    inventory[x].value=0;
    return inventory;
}
//montrer les objet de l'inventaire
void show_inventory(Object *inventory){
    for(int i=0;i<20;i++)
    {
        printf("Nom :%s  Valeur:%d \n",inventory[i].name,inventory[i].value);
    }
}
