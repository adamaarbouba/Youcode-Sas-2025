#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct todolist
{
    /* data */
    int ID;
    char Description[100];
    char Titre[100];
    bool Status;
};

struct todolist Tach[100];
int user;
int nb;
int menu = 1;
int task_count = 0;
char tache_statut[30];



void Menu()
{

    printf("\n____________________|Menu|_____________________\n");
    printf("|[1]-Ajouter une nouvelle tâche.              |\n");
    printf("|[2]-Afficher la liste de toutes les tâche.   |\n");
    printf("|[3]-Modifier une tâche.                      |\n");
    printf("|[4]-Supprimer une tâche par identifiant.     |\n");
    printf("|[5]-Rechercher les Tâches.                   |\n");
    printf("|[6]-Statistiques.                            |\n");
    printf("|[7]-Quite.                                   |\n");
    printf("|_____________________________________________|\n");
}

void ajout()
{
    printf("The number of tasks you want to enter ? : ");
    scanf("%d", &nb);
    Nline();

    for (int i = task_count; i < task_count + nb; i++)
    {
        printf("\nEntrez la tache : ");
        scanf(" %[^\n]", Tach[i].Titre);

        printf("Entrez la description : ");
        scanf(" %[^\n]", Tach[i].Description);

        printf("Entrez le statut de la tache (On Going / Done): ");
        scanf(" %[^\n]", tache_statut);

        if (strcmp(tache_statut, "On Going") == 0)
            Tach[i].Status = 1;
        else
            Tach[i].Status = 0;

        Tach[i].ID = task_count + 1;
        task_count++;
    }
}
void Display()
{
    for (int i = 0; i < task_count; i++)
    {
        printf("ID: %d\nTitle: %s\nDescription: %s\nStatus: %s\n\n",
               Tach[i].ID,
               Tach[i].Titre,
               Tach[i].Description);
    }
}

void Edit()
{
    int choice;
    char looking_for[50];
    printf("The name of the task you want to modify: ");
    fgets(looking_for, 50, stdin);
    looking_for[strcspn(looking_for, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < task_count; i++)
    {
        if (strcmp(Tach[i].Titre, looking_for) == 0)
        {
            found = 1;
            printf("Task found!\n");
            printf("Titre: %s\nDescription: %s\nID: %d\n", Tach[i].Titre, Tach[i].Description, Tach[i].ID);

            printf("Do you want to modify this task? (1-yes/0-no): ");
            int cho;
            scanf("%d", &cho);
            Nline();
            if (cho)
            {
                printf("What do you want to change?\n[1] Title\n[2] Description\nChoice: ");
                scanf("%d", &choice);
                Nline();
                if (choice == 1)
                {
                    printf("Enter new title: ");
                    fgets(Tach[i].Titre, 100, stdin);
                    Tach[i].Titre[strcspn(Tach[i].Titre, "\n")] = '\0';
                }
                else if (choice == 2)
                {
                    printf("Enter new description: ");
                    fgets(Tach[i].Description, 100, stdin);
                    Tach[i].Description[strcspn(Tach[i].Description, "\n")] = '\0';
                }
            }
            break;
        }
    }
    if (!found)
    {
        printf("Task not found.\n");
    }
}

void Search()
{
    // ##############################################
    // Search.
    Nline();
    int found = 0;
    char looking_for[50];
    printf("The Name of the Task you Looking for : ");
    fgets(looking_for, 50, stdin);
    looking_for[strlen(looking_for) - 1] = '\0';
    for (int i = 0; i < task_count; i++)
    {
        if (strcmp(Tach[i].Titre, looking_for) == 0)
        {
            printf("Titre : %s\n", Tach[i].Titre);
            printf("Decription : %s\n", Tach[i].Description);
            printf("ID : %d\n", Tach[i].ID);
            found = 1;
        }
    }
    if (found)
    {
    }
    else
    {
        printf("No Match was found.");
    }
}

int main()
{
    while (menu)
    {
        /* code */

        Menu();
        scanf("%d", &user);
        Nline();
        switch (user)
        {
        case 1:
            ajout();
            break;
        case 2:

            break;
        case 3:
            Edit();
            break;
        case 4:

            break;
        case 5:
            Search();
            break;
        case 6:

            break;
        case 7:
            menu = 0;
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
}