#include <string.h>
//structure Inventaire

//structure objet qui sera contenue dans inventaire
typedef struct Object Object;
struct Object
{
    char name[255];
    int value;
};
int init_inventory(Object* tbl);
//ajout d'un objet dans l'inventaire
int add_inventory(Object *inventory,Object objet);

int delete_inventory(Object *inventory,int x);
//montre les objet de l'inventaire
void show_inventory(Object *inventory);
