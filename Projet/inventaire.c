#include <string.h>

typedef struct Object Object;
struct Object
{
    char name[255];
    int value;
    int Nbr;
};

    //Declaration des objets
Object* declareObject(Object* tbl)
{
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
    strcpy(Sword.name,"Epee");
    tbl[2] = Sword;

}
int init_inventory(Object* tbl){
    Object vide;
    strcpy(vide.name,"vide");
    vide.value = 0;
    for (int i = 0;i<10;i++){
        tbl[i] = vide;
    }
}
//ajout d'un objet dans l'inventaire
void add_inventory(Object *inventory,Object objet){
    for (int i=0;i<20;i++){
        if (inventory[i].value == 0){
            inventory[i] = objet;
            return 0;
        }
    }
}

void delete_inventory(Object *inventory,int x){
    strcpy(inventory[x].name,"Coucou");
    inventory[x].value=0;
}

//montrer les objet de l'inventaire
void show_inventory(Object *inventory){
    for(int i=0;i<20;i++)
    {
        if (inventory[i].value > -100 && inventory[i].value <100 && inventory[i].value !=0)
        {
        printf("\n Nom :%s  Valeur:%d \n",inventory[i].name,inventory[i].value);
        }
    }
}
