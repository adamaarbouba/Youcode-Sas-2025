#include <stdio.h>

int main()
{
    char Titre[100][50], auteur[100][50];
    float Prix[100];
    int Quantite[100];
    int book_count = 0;
    int user;
    int menu = 1;
    while (menu)
    {

        printf("\n########## Systeme de Gestion de Stock dans une Librairie ##########\n");

        printf("-------------- Menu ---------------\n");
        printf("1. Ajouter un livre au stock.\n");
        printf("2. Afficher tous les livres disponibles.\n ");
        printf("3. Rechercher un livre par son titre.\n ");
        printf("4. Mettre a jour la quantite d'un livre.\n ");
        printf("5. Supprimer un livre du stock.\n ");
        printf("6. Afficher le nombre total de livres en stock.\n ");
        printf("7. Exit.\n");
        printf("-----------------------------------\n");
        printf("Enter sont choice : ");
        scanf("%d", &user);
        switch (user)
        {

        case 1:
        {
            

            printf("Entre the name of the book:");

            scanf("%s", &Titre[book_count]);

            printf("Entre the Author of the book:");

            scanf("%s", &auteur[book_count]);

            printf("Entre the price of the book (DH):");

            scanf("%f", &Prix[book_count]);

            printf("Entre the quantity of the book (Copys): ");

            scanf("%d", &Quantite[book_count]);

            book_count++;


            break;
        }
        case 2:
        {

            
            for (int i = 0; i < book_count; i++)
            {

                printf("Book -----[ %d ]-----\n", i + 1);
                printf("Titre -->  %s\n", Titre[i]);
                printf("Auteur -->  %s\n", auteur[i]);
                printf("Prix -->  %.2f DH\n", Prix[i]);
                printf("Quatite -->  %d Copy\n", Quantite[i]);
                printf("--------------------------\n");
            }
            break;
        }
        case 3:
        {
            char look_for[50];
            printf("Entre the book titre :");
            scanf("%s", &look_for);
            int equal = 1;

            for (int j = 0; j < book_count; j++)
            {
                
                int i = 0;

                while (look_for[i] != '\0' || Titre[j][i] != '\0')
                {
                    printf("look for %c\n", look_for[i]);
                    printf("Titere %c", Titre[j][i]);
                    if (look_for[i] != Titre[j][i])
                    {
                        equal = 0;
                        break;
                    }
                    else
                    {
                        equal = 1;
                    }
                    i++;
                }

                
                if (equal)
                {
                    
                    printf("Book -----[ %d ]-----\n", j + 1);
                    printf("Titre -->  %s\n", Titre[j]);
                    printf("Auteur -->  %s\n", auteur[j]);
                    printf("Prix -->  %.2f DH\n", Prix[j]);
                    printf("Quatite -->  %d Copy\n", Quantite[j]);
                    printf("--------------------------\n");

                    break;
                }
                else
                {
                    printf("%d Match not found", j);
                }
            }
            break;
        }
        case 4:
        {
            char looking_for[50];
            printf("Entre the book titre :");
            scanf("%s", &looking_for);
            int equal = 0;
            for (int j = 0; j < book_count; j++)
            {
                
                int i = 0;

                while (looking_for[i] != '\0' || Titre[j][i] != '\0')
                {
                    if (looking_for[i] == Titre[j][i])
                    {
                        equal = 1;
                        break;
                    }
                    i++;
                }

                
                if (equal)
                {
                    int cot;
                    
                    printf("Book -----[ %d ]-----\n", j + 1);
                    printf("Titre -->  %s\n", Titre[j]);
                    printf("Quatite -->  %d Copy\n", Quantite[j]);
                    printf("--------------------------\n");
                    printf("Do You to modify ? \n(Entre 1: yes /0: no)\n");
                    scanf("%d", &cot);
                    if (cot)
                    {
                        
                        printf("Entre the new quantity :");
                        scanf("%d", &Quantite[j]);
                        printf("Book -----[ %d ]-----\n", j + 1);
                        printf("Titre -->  %s\n", Titre[j]);
                        printf("Quatite -->  %d Copy\n", Quantite[j]);
                        printf("--------------------------\n");
                        break;
                    }

                }
                else
                {
                    printf("Match not found");
                }
            }
            break;
        }
        case 5:
        {
            int equal = 0;
            char removing_book[100];

            printf("what book do you want to remove:");
            scanf("%s", &removing_book);
            for (int j = 0; j < book_count; j++)
            {
                
                int i = 0;

                
                while (removing_book[i] != '\0' || Titre[j][i] != '\0')
                {
                    if (removing_book[i] == Titre[j][i])
                    {
                        equal = 1;
                        break;
                    }

                    i++;
                }

                if (equal)
                {
                    int cot;
                    

                    printf("Book -----[ %d ]-----\n", j + 1);
                    printf("Titre -->  %s\n", Titre[j]);
                    printf("Auteur -->  %s\n", auteur[j]);
                    printf("Prix -->  %.2f DH\n", Prix[j]);
                    printf("Quatite -->  %d Copy\n", Quantite[j]);
                    printf("--------------------------\n");

                    printf("Do You want to remove it ? \n(Entre 1: yes /0: no) ===>");
                    scanf("%d", &cot);
                    if (cot)
                    {
                        int i = 0;
                        

                        while (Titre[j + 1][i] != '\0')
                        {
                            Titre[j][i] = Titre[j + 1][i];
                            auteur[j][i] = auteur[j + 1][i];
                            Prix[j] = Prix[j + 1];
                            Quantite[j] = Quantite[j + 1];
                            i++;
                        }

                        printf("Removed succefully.");
                        book_count--;
                    }
                }
                else
                {
                    printf("Match not found");
                }
            }
            break;
        }
        case 6:
        {
            int total = 0;

            for (int i = 0; i < book_count; i++)
            {
                total = total + Quantite[i];
            }
            printf("Total Books in stock is : %d Copys\n", total);
            printf("--------------------------\n");
        }
        case 7:
        {
            menu = 0;
            printf("Goodbye!\n");
        }
        break;
        }
    }
}