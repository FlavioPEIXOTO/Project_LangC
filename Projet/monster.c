#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void color(int t, int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

int a=20;
int b=30;

//Game over est false lorsque -1 et true lorsque 1

int num;

int game_over = -1;
int monster_attack ;
int super_power;
int utilisation_super_power;
int player_health;
int player_attack;
int monster_health;

int arme = 0;

int Fight(int monster_attack,int monster_health, int player_health, int player_attack, int game_over, int arme, int super_power, int utilisation_super_power)
{

    printf("%d \n", player_attack);
    //RndHit(a, b, nombre_aleatoire);
    monster_health = 150;
    player_health = 80;
    player_attack = 30;
    utilisation_super_power = 0;
    super_power = player_attack * 2;
    monster_attack = 10;
    int round = 1;
    int attack_choice;


    while (monster_health > 0 && player_health > 0)
    {
        if (utilisation_super_power > 3)
        {
            utilisation_super_power==3;
        }
        printf("\n %d \n", utilisation_super_power);
        if (round % 2 !=0)
        {
            color(2,0);
            printf(" \n HP Monstre :%d \n HP Player : %d \n \n", monster_health, player_health);
            color(7,0);

            printf("Que faisons-nous ? \n 1 - Attaquer \n 2 - coup special (utilisable après 3 tours %d/3) \n 3 - Prendre une potion \n", utilisation_super_power);
            scanf("%d", &attack_choice);

            if (attack_choice == 1)
            {
                printf("Le monstre perd %d HP \n", player_attack);
                monster_health -= player_attack ;
            }
            else if (attack_choice == 2)
            {
                if (utilisation_super_power >= 3)
                {
                    printf("SSSSSHHHHHLLINNNGGG ! \(Une lumiere intense apparait) \n");
                    monster_health -= super_power;
                    utilisation_super_power = 0;
                }
                else
                {
                    printf("Pouvoir non opérationnel ! Vous vous écroulez à terre face au gobelin quelques secondes.");
                }
            }
            else if (attack_choice == 3)
            {
                printf("potion inventaire marche pas\n");
            }
            utilisation_super_power++;
        }
        if (round % 2 == 0)
        {
            printf("Le monstre vous inflige %d \n", monster_attack);
            player_health -= monster_attack;
        }
        round ++;
    }
    if (player_health <=0 )
    {
        printf("Game Over \n");
        system("exit");
    }
    else if (monster_health <=0)
    {
        printf("Monstre battu ! \n");
    }
    return player_health;
}
