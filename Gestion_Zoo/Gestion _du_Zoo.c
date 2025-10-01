#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

struct zoo
{
    int ID;
    char nom[50];
    char espece[50];
    int age;
    char habitat[50];
    float poids;
};

int n_id = 21;
int nb_animal = 20;
int loop = 1;
int user_input;

struct zoo Zoon[200] = {
    {1, "Simba", "Lion", 5, "Savane", 190.5},
    {2, "Nala", "Lion", 4, "Savane", 175.0},
    {3, "ShereKhan", "Tigre", 8, "Jungle", 220.3},
    {4, "Baloo", "Ours", 12, "Forêt", 310.0},
    {5, "Raja", "Éléphant", 15, "Savane", 540.7},
    {6, "Marty", "Zèbre", 6, "Savane", 300.2},
    {7, "Gloria", "Hippopotame", 10, "Rivière", 450.0},
    {8, "Alex", "Lion", 7, "Savane", 200.0},
    {9, "Julien", "Lémurien", 3, "Jungle", 12.5},
    {10, "Melman", "Girafe", 9, "Savane", 390.8},
    {11, "Timon", "Suricate", 2, "Désert", 1.2},
    {12, "Pumbaa", "Phacochère", 5, "Savane", 120.0},
    {13, "Scar", "Lion", 11, "Savane", 210.4},
    {14, "Kaa", "Serpent", 6, "Jungle", 45.0},
    {15, "Iko", "Perroquet", 4, "Jungle", 2.1},
    {16, "Dumbo", "Éléphant", 3, "Savane", 320.0},
    {17, "Kiki", "Chien sauvage", 7, "Savane", 25.0},
    {18, "Donatello", "Tortue", 40, "Rivière", 90.5},
    {19, "Polly", "Oiseau", 5, "Jungle", 1.5},
    {20, "Kong", "Gorille", 13, "Jungle", 180.0}};

void Nline()
{
    while ((getchar() != '\n'))
        ;
}

int Menu()
{
    printf("\n_____________________/Zooo\\______________________\n");
    printf("\n____________________|Menu|______________________\n");
    printf("|[1]-Ajouter un animal                          |\n");
    printf("|[2]-Afficher les animaux                       |\n");
    printf("|[3]-Modifier un animal                         |\n");
    printf("|[4]-Supprimer un animal                        |\n");
    printf("|[5]-Rechercher un animal                       |\n");
    printf("|[6]-Statistiques.                              |\n");
    printf("|[7]-Quite.                                     |\n");
    printf("|_______________________________________________|\n");
    printf("Entre un choix:");
    scanf("%d", &user_input);
    Nline();
    return user_input;
}

void Ajout()
{
    printf("Entrez le nom :");
    scanf("%s", Zoon[nb_animal].nom);
    Nline();
    printf("Entrez le espece :");
    scanf("%s", Zoon[nb_animal].espece);
    Nline();
    printf("Entrez le age :");
    scanf("%d", &Zoon[nb_animal].age);
    Nline();
    printf("Entrez le habitat :");
    scanf("%s", Zoon[nb_animal].habitat);
    Nline();
    printf("Entrez le poids :");
    scanf("%f", &Zoon[nb_animal].poids);
    Nline();

    Zoon[nb_animal].ID = n_id++;
    nb_animal++;
}

void SortingName()
{
    struct zoo temp;
    for (int i = 0; i < nb_animal - 1; i++)
    {
        for (int j = 0; j < nb_animal - i - 1; j++)
        {
            if (strcmp(Zoon[j].nom, Zoon[j + 1].nom) > 0)
            {
                temp = Zoon[j];
                Zoon[j] = Zoon[j + 1];
                Zoon[j + 1] = temp;
            }
        }
    }
}
void SortingID()
{
    struct zoo temp;
    for (int i = 0; i < nb_animal - 1; i++)
    {
        for (int j = 0; j < nb_animal - i - 1; j++)
        {
            if (Zoon[j].ID > Zoon[j + 1].ID)
            {
                temp = Zoon[j];
                Zoon[j] = Zoon[j + 1];
                Zoon[j + 1] = temp;
            }
        }
    }
}
void SortingAge()
{
    struct zoo temp;
    for (int i = 0; i < nb_animal - 1; i++)
    {
        for (int j = 0; j < nb_animal - i - 1; j++)
        {
            if (Zoon[j].age > Zoon[j + 1].age)
            {
                temp = Zoon[j];
                Zoon[j] = Zoon[j + 1];
                Zoon[j + 1] = temp;
            }
        }
    }
}
void SortingHabitat()
{
    struct zoo temp;
    for (int i = 0; i < nb_animal - 1; i++)
    {
        for (int j = 0; j < nb_animal - i - 1; j++)
        {
            if (strcmp(Zoon[j].habitat, Zoon[j + 1].habitat) > 0)
            {
                temp = Zoon[j];
                Zoon[j] = Zoon[j + 1];
                Zoon[j + 1] = temp;
            }
        }
    }
}

void AjoutPlus()
{
    int chose;
    printf("\n_______________|Adding_Animals|_________________\n");
    printf("|[1]-Ajouter Simple                             |\n");
    printf("|[2]-Ajouter multiplue                          |\n");
    printf("|[3]-Back To the Main Menu                      |\n");
    printf("|_______________________________________________|\n");
    printf("Entre un choix:");
    scanf("%d", &chose);
    Nline();

    if (chose == 1)
    {
        Ajout();
    }
    else if (chose == 2)
    {
        int adds;
        printf("How many do you want to add ===> ");
        scanf("%d", &adds);
        Nline();
        for (int i = 0; i < adds; i++)
        {
            Ajout();
            printf("_______________________________________________\n");
        }
    }
    printf("\n<================================||n");
}

void aff(int i)
{
    printf("__________________[%d]____________________\n", i);
    printf("The Animal's name " RED " %s\n" RESET, Zoon[i].nom);
    printf("The species" YELLOW " %s | " RESET, Zoon[i].espece);
    printf("The habitat " YELLOW "%s\n" RESET, Zoon[i].habitat);
    printf("The weight " GREEN "%.2f | " RESET, Zoon[i].poids);
    printf("The age " GREEN "%d | " RESET, Zoon[i].age);
    printf("The id " GREEN "%d\n" RESET, Zoon[i].ID);
}
void Aff()
{
    int chose;
    printf("\n_____________________/Zooo\\______________________\n");
    printf("|____________________|Menu|_____________________|\n");
    printf("|[1]-Display by Name                            |\n");
    printf("|[2]-Display by ID                              |\n");
    printf("|[3]-Display by Age                             |\n");
    printf("|[4]-Display by Habitat                         |\n");
    printf("|[5]-Back To the Main Menu                      |\n");
    printf("|_______________________________________________|\n");
    printf("Entre un choix:");
    scanf("%d", &chose);
    Nline();

    if (chose == 1)
    {
        if (nb_animal == 0)
        {
            printf("There is no animals in the Zoo\n");
            return;
        }
        SortingName();
        for (int i = 0; i < nb_animal; i++)
            aff(i);
    }
    else if (chose == 2)
    {
        if (nb_animal == 0)
        {
            printf("There is no animals in the Zoo\n");
            return;
        }
        SortingID();
        for (int i = 0; i < nb_animal; i++)
            aff(i);
    }
    else if (chose == 3)
    {
        if (nb_animal == 0)
        {
            printf("There is no animals in the Zoo\n");
            return;
        }
        SortingAge();
        for (int i = 0; i < nb_animal; i++)
            aff(i);
    }
    else if (chose == 4)
    {
        if (nb_animal == 0)
        {
            printf("There is no animals in the Zoo\n");
            return;
        }
        SortingHabitat();
        for (int i = 0; i < nb_animal; i++)
            aff(i);
    }

    printf("\n<================================||n");
}

void Search()
{
    int choice;
    printf("\n____________________|Search Menu|_________________\n");
    printf("|[1]-Search by ID                                 |\n");
    printf("|[2]-Search by Name                               |\n");
    printf("|[3]-Search by Species                            |\n");
    printf("|[4]-Back to Main Menu                            |\n");
    printf("|_________________________________________________|\n");
    printf("Enter a choice: ");
    scanf("%d", &choice);
    Nline();

    if (choice == 1)
    {
        int id;
        printf("Enter the ID: ");
        scanf("%d", &id);
        Nline();
        int found = 0;
        for (int i = 0; i < nb_animal; i++)
        {
            if (Zoon[i].ID == id)
            {
                aff(i);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("No animal found with ID %d\n", id);
    }
    else if (choice == 2)
    {
        char name[50];
        printf("Enter the name: ");
        scanf("%s", name);
        Nline();
        int found = 0;
        for (int i = 0; i < nb_animal; i++)
        {
            if (strcmp(Zoon[i].nom, name) == 0)
            {
                aff(i);
                found = 1;
            }
        }
        if (!found)
            printf("No animal found with name %s\n", name);
    }
    else if (choice == 3)
    {
        char species[50];
        printf("Enter the species: ");
        scanf("%s", species);
        Nline();
        int found = 0;
        for (int i = 0; i < nb_animal; i++)
        {
            if (strcmp(Zoon[i].espece, species) == 0)
            {
                aff(i);
                found = 1;
            }
        }
        if (!found)
            printf("No animal found with species %s\n", species);
    }
}

void Supprimer()
{
    if (nb_animal == 0)
    {
        printf("There are no animals to delete.\n");
        return;
    }

    int id;
    printf("Enter the ID of the animal to delete: ");
    scanf("%d", &id);
    Nline();

    int found = 0;
    for (int i = 0; i < nb_animal; i++)
    {
        if (Zoon[i].ID == id)
        {
            found = i;
            break;
        }
    }

    if (found == 0)
    {
        printf("No animal found with ID %d\n", id);
        return;
    }

    printf("Animal to be deleted:\n");
    aff(found);

    char confirm;
    printf("Are you sure you want to delete this animal? (y/n): ");
    scanf(" %c", &confirm);
    Nline();

    if (confirm == 'y')
    {
        for (int i = found; i < nb_animal - 1; i++)
        {
            Zoon[i] = Zoon[i + 1];
        }
        nb_animal--;
        printf("Animal with ID %d has been deleted.\n", id);
    }
    else
    {
        printf("Deletion cancelled.\n");
    }
}

void Modifier()
{
    int id;
    printf("Enter the ID of the animal to modify: ");
    scanf("%d", &id);
    Nline();

    int found = -1;
    for (int i = 0; i < nb_animal; i++)
    {
        if (Zoon[i].ID == id)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("No animal found with ID %d\n", id);
        return;
    }

    printf("Modifying animal:\n");
    aff(found);

    printf("Enter new name: ");
    scanf("%s", Zoon[found].nom);
    Nline();
    printf("Enter new species: ");
    scanf("%s", Zoon[found].espece);
    Nline();
    printf("Enter new age: ");
    scanf("%d", &Zoon[found].age);
    Nline();
    printf("Enter new habitat: ");
    scanf("%s", Zoon[found].habitat);
    Nline();
    printf("Enter new weight: ");
    scanf("%f", &Zoon[found].poids);
    Nline();

    printf("Animal modified successfully.\n");
}

void Stats()
{
    if (nb_animal == 0)
    {
        printf("No animals in the zoo.\n");
        return;
    }

    int total_age = 0;
    float total_weight = 0;

    for (int i = 0; i < nb_animal; i++)
    {
        total_age += Zoon[i].age;
        total_weight += Zoon[i].poids;
    }
    float Min_age = total_age / nb_animal;
    float Min_weight = total_weight / nb_animal;
    printf("Total animals: %d\n", nb_animal);
    printf("Average age: %.2f\n", Min_age);
    printf("Average weight: %.2f\n", Min_weight);
}

int main()
{

    while (loop)
    {
        /* code */
        user_input = Menu();
        switch (user_input)
        {
        case 1:
            AjoutPlus();
            break;
        case 2:
            Aff();
            break;
        case 3:
            Modifier();
            break;
        case 4:
            Supprimer();
            break;
        case 5:
            Search();
            break;
        case 6:
            Stats();
            break;
        case 7:
            loop = 0;
            break;

        default:
            printf("invalide input...\n");
            break;
        }
    }
}
