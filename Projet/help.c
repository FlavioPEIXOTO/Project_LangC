void help ()
{
    int help_choice;
    printf("1~How to move \n 2~Inventory \n 3~Rage quit\n");
    scanf("%d", &help_choice);
    if (help_choice == 1)
    {
        printf("Moves: \n ""east"" --> go to east \n ""north"" --> go to north \n ""west"" --> go to west \n ""south"" --> go to south \n \n ");
    }

    else if (help_choice == 2)
    {
        printf("Inventory : \n ""inv"" --> open your inventory\n");
    }
    else if (help_choice == 3)
    {
        printf("Rage quit : ""exit"" --> Please don't do it, don't leave our game :(\n");
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
