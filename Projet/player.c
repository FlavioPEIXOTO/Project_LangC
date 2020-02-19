#include <string.h>

int height = 10;
int width = 10;

/*int inventory ()
{
    int inv[2][3];
    int i; // Lignes
    int j; //colonnes
    char inv1 = "Arme principale";
    char inv2 = "Arme secondaire";
    char inv3 = "Potion de Heal";
    char inv4 = "Potion de force";
    for (i = 0 ; i < 3 ; i++)
    {
         // Colonnes
        for (j = 0 ; j < 2 ; j++)
        {
            inv[0][0] = inv1;
            inv[0][1] = inv2;
            inv[0][2] = inv3;
            inv[0][3] = inv4;
            printf(" %d  | ", inv[i][j]);
        }
        printf("\n");
    }
    return inv;
}*/


void player (int (*tableau)[10]) //joueur et sa position
{
    int x = 0;
    int y = 0;
    for (x ; x < height ; x++)
    {
        for (y ; y < width ; y++)
        {
            printf("toto");
            if (tableau[height][width] == 1)
            {
                int move;
                scanf("%d", &move);
                printf("un nombre inferieur ou egal a 4");
                if (move == 1)
                {
                    printf("test");
                    tableau[x][y] = 0;
                    tableau[x][y+1] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

                if (move == 2)
                {
                    printf("test2");
                    tableau[x][y] = 0;
                    tableau [x+1][y] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

                if (move == 3)
                {
                    printf("test3");
                    tableau[x][y] = 0;
                    tableau [x-1][y] = 1;
                    printf ("%d | ", tableau[x][y]);
                }

                if (move == 4)
                {
                    printf("test4");
                    tableau[x][y] = 0;
                    tableau[x][y-1] = 1;
                    printf ("%d | ", tableau[x][y]);
                }
                if (move == "I")
                {
                    printf("Ouverture de l'inventaire : ");
                    //inventory();
                }

            }

        }
    }
    printf("test_final");
    printf ("%d | ", tableau[x][y]);
}
