#include <string.h>
#include "inventaire.h"

void help ()
{
    Object tbl_obj[20];
    Object inventory[10];
    init_inventory(tbl_obj);
    //declareObject(tbl_obj);

    int help_choice;
    printf("1~How to move \n 2~Inventory \n 3~Rage quit\n 4~Map\n");
    scanf("%d", &help_choice);
    if (help_choice == 1)
    {
        printf("Moves: \n ""1"" --> go to east \n ""3"" --> go to north \n ""4"" --> go to west \n ""2"" --> go to south \n \n ");
    }

    else if (help_choice == 2)
    {
        printf("Inventory : \n ""7"" --> open your inventory\n");
        show_inventory(tbl_obj);

    }
    else if (help_choice == 3)
    {
        printf("Rage quit : ""exit"" --> Please don't do it, don't leave our game :(\n");
        system("exit");
    }
    else if (help_choice == 4)
    {
        printf("Map : \n");
        printf("""7"" --> open your map\n");
    }
    else{
        help();
    }
}

void exit()
{
    char exit_choice[20];
    printf("Do you really want to leave us ? (yes or no)");
    scanf("%s", &exit_choice);
    if( exit_choice == "yes")
    {
        system("exit");
    }
    else if (exit_choice == "no")
    {
        printf("Thanks ! :)");
    }
    else
    {
        exit();
    }
}
