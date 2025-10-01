#include <stdio.h>
#include <string.h>

struct Contact
{

    char Nom[50];
    char Tele[50];
    char Email[50];
};

int main()
{
    struct Contact Cont[100];
    int user;
    int nb;
    int menu = 1;
    int index = 0;
    while (menu)
    {

        printf("\n########## Systeme de Gestion de Contact ##########\n");

        printf("-------------- Menu ---------------\n");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("6. Exit.\n");
        printf("-----------------------------------\n");
        printf("Enter sont choice : ");

        char newline_check;
        while (1)
        {
            if (scanf("%d%c", &user, &newline_check) == 2 && newline_check == '\n')
            {
                break;
            }
            else
            {
                while (getchar() != '\n')
                {
                }
                user = -1;
                break;
            }
        }
        switch (user)
        {
        case 1:
        {

            printf("The numbre of contacts you want to enter ? : ");
            scanf("%d", &nb);
            getchar();
            // ##############################################
            // Scaning.

            for (int i = 0; i < nb; i++)
            {
                int yes = 1;
                ;
                while (yes)
                {

                    printf("Enter your Full Name : ");
                    fgets(Cont[index].Nom, 50, stdin);
                    Cont[index].Nom[strlen(Cont[index].Nom) - 1] = '\0';

                    printf("Enter your Telephone number : ");
                    fgets(Cont[index].Tele, 50, stdin);
                    Cont[index].Tele[strcspn(Cont[index].Tele, "\n")] = '\0';

                    printf("Enter your Email : ");
                    fgets(Cont[index].Email, 50, stdin);
                    Cont[index].Email[strcspn(Cont[index].Email, "\n")] = '\0';
                    index++;
                    break;
                }
            }
            break;
        }
        case 2:
        {
            // ##############################################
            // Edit a Contact.
            int choice;
            char looking_for[50];
            getchar();
            printf("The name of the Contact you looking for to modify : ");
            fgets(looking_for, 50, stdin);
            looking_for[strlen(looking_for) - 1] = '\0';
            for (int i = 0; i < index; i++)
            {
                if (strcmp(Cont[i].Nom, looking_for) == 0)
                {
                    printf(" your Full Name : %s\n", Cont[i].Nom);
                    printf(" your Telephone number : %s\n", Cont[i].Tele);
                    printf(" your Email : %s\n", Cont[i].Email);

                    printf("Do you want to chabge this Contact (1-yes/2-no)");
                    int cho;
                    scanf("%d", &cho);
                    getchar();
                    if (cho)
                    {

                        printf("What you want to change : \n");
                        printf("Email=====> 1 \nTelephone=====> 2 \nYour choice is (1 or 2 )==>");
                        scanf("%d", &choice);
                        getchar();
                        if (choice == 1)
                        {
                            printf("Enter Your New Email : \n");
                            fgets(Cont[i].Email, 50, stdin);
                            Cont[i].Email[strcspn(Cont[i].Email, "\n")] = '\0';
                        }
                        else if (choice == 2)
                        {
                            printf("Enter Your New Telephone : \n");
                            fgets(Cont[i].Tele, 50, stdin);
                            Cont[i].Tele[strcspn(Cont[i].Tele, "\n")] = '\0';
                        }
                    }
                }
                else
                    printf("not found.");
            }

            break;
        }
        case 3:
        {
            // ##############################################
            // Search For the Delete.
            getchar();
            int equal = 0;
            char looking_for[50];
            printf("The name of the Contact you looking for : ");
            fgets(looking_for, 50, stdin);
            looking_for[strlen(looking_for) - 1] = '\0';
            for (int i = 0; i < index; i++)
            {
                if (strcmp(Cont[i].Nom, looking_for) == 0)
                {
                    printf(" your Full Name : %s\n", Cont[i].Nom);
                    printf(" your Telephone number : %s\n", Cont[i].Tele);
                    printf(" your Email : %s\n", Cont[i].Email);
                    equal = 1;
                }
                if (equal)
                {
                    int cot;

                    printf("--------------------------\n");

                    printf("Do You want to remove it ? \n(Entre 1: yes /0: no) ===> ");
                    scanf("%d", &cot);
                    getchar();
                    if (cot)
                    {
                        for (int j = i; j < index - 1; j++)
                        {
                            Cont[j] = Cont[j + 1];
                        }
                        printf("Removed succefully.");
                        index--;
                    }
                    equal = 0;
                }
            }

            break;
        }
        case 4:
        {

            // ##############################################
            // Display.
            for (int i = 0; i < index; i++)
            {

                printf(" your Full Name : %s\n", Cont[i].Nom);
                printf(" your Telephone number : %s\n", Cont[i].Tele);
                printf(" your Email : %s\n", Cont[i].Email);
            }
            break;
        }
        case 5:
        {

            // ##############################################
            // Search.
            getchar();
            int found = 0;
            char looking_for[50];
            printf("The name of the Contact you looking for : ");
            fgets(looking_for, 50, stdin);
            looking_for[strlen(looking_for) - 1] = '\0';
            for (int i = 0; i < index; i++)
            {
                if (strcmp(Cont[i].Nom, looking_for) == 0)
                {
                    printf(" your Full Name : %s\n", Cont[i].Nom);
                    printf(" your Telephone number : %s\n", Cont[i].Tele);
                    printf(" your Email : %s\n", Cont[i].Email);
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
            break;
        }
        case 6:
        {
            // ##############################################
            // Exit.
            menu = 0;
            printf("Goodbye!\n");
        }
        break;
        }
    }
}