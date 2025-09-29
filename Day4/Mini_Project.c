#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Deadline
{
    /* data */
    int Y;
    int M;
    int D;
};

struct todolist
{
    /* data */
    int ID;
    char Description[100];
    char Titre[100];
    bool Status;
    struct Deadline DL;
};

int main()
{
    int index = 0;
    struct todolist T[100];
    T[index].ID = 0;

    while (true)
    {
        int user_input;
        char tache_statut[30];
        int nombres_of_taches = 0;
        /* Menu */
        printf("-------- To Do List --------\n");
        printf("1 - Ajouter");
        printf("2 - Affichage");
        printf("3 - ");
        printf("4 - \n");

        // user input
        printf("Entrez un nombre:");
        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
            /* code */
            for (int i = 0; i <= index; i++)
            {
                /* code */
                printf("\nEntrez la tache :");
                scanf(" %[^\n]", &T[i].Titre);
                printf("Entrez le description :");
                scanf(" %[^\n]", &T[i].Description);

                printf("Entrez la statut de la tache (On Going / Done):");
                scanf(" %[^\n]", &tache_statut);
                if (strcmp(tache_statut, "On Going") == 0)
                {
                    /* code */
                    T[i].Status = 1;
                }
                else
                {
                    T[i].Status = 0;
                }
                printf("Entrez l'annee :");
                scanf("%d", &T[i].DL.Y);
                printf("Entrez l'mois :");
                scanf("%d", &T[i].DL.M);
                printf("Entrez l'jour :");
                scanf("%d", &T[i].DL.D);
            }
            T[index].ID++;
            index++;

            break;
        case 2:
            printf("Entrez le nombres des Taches :");
            scanf("%d", &nombres_of_taches);
            for (int i = index; i < nombres_of_taches; i++)
            {
                /* code */
                printf("\nEntrez la tache %d :",i + 1);
                scanf(" %[^\n]", &T[i].Titre);
                printf("Entrez le description :");
                scanf(" %[^\n]", &T[i].Description);

                printf("Entrez la statut de la tache (On Going / Done):");
                scanf(" %[^\n]", &tache_statut);
                if (strcmp(tache_statut, "On Going") == 0)
                {
                    /* code */
                    T[i].Status = 1;
                }
                else
                {
                    T[i].Status = 0;
                }
                printf("Entrez l'annee :");
                scanf("%d", &T[i].DL.Y);
                printf("Entrez l'mois :");
                scanf("%d", &T[i].DL.M);
                printf("Entrez l'jour :");
                scanf("%d", &T[i].DL.D);
            }
            index++;

            break;
        case 3:
            for (int i = 0; i < index; i++)
            {
                /* code */
                printf("\n----------------\n");
                printf("la Tache ID : %d\n", T[i].ID);
                printf("la Tache Titre : %s\n", T[i].Titre);
                printf("la Tache Description : %s\n", T[i].Description);
                if (T[i].Status == 1)
                {
                    /* code */
                    printf("Status : On Going...\n");
                }
                else
                {
                    printf("Status : Done\n");
                }

                printf("la Date : ");
                printf("%d/%d/%d \n", T[i].DL.Y, T[i].DL.D, T[i].DL.M);

                printf("\n----------------\n");
            }

            break;
        default:
            break;
        }
    }

    return 0;
}