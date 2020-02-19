#include <string.h>
typedef struct Object Object;
struct Object
{
    char name[255];
    int value;
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
//montre les objet de l'inventaire
void show_inventory(Object *inventory){
    for(int i=0;i<20;i++){
        printf("Nom :%s  Valeur:%d \n",inventory[i].name,inventory[i].value);
    }
}
