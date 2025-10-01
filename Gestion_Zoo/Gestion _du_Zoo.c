#include <stdio.h>
#include <string.h>

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
    char Diet[50];
};

struct Swap
{
    char espece[50];
    int count;
};

int n_id = 21;
int nb_animal = 20;
int loop = 1;
int user_input;

struct zoo Zoon[200] = {
    {1, "Simba", "Lion", 5, "Savane", 190.5, "Carnivore"},
    {2, "Nala", "Lion", 4, "Savane", 175.0, "Carnivore"},
    {3, "ShereKhan", "Tigre", 8, "Jungle", 220.3, "Carnivore"},
    {4, "Baloo", "Ours", 12, "Forêt", 310.0, "Omnivore"},
    {5, "Raja", "Éléphant", 15, "Savane", 540.7, "Herbivore"},
    {6, "Marty", "Zèbre", 6, "Savane", 300.2, "Herbivore"},
    {7, "Gloria", "Hippopotame", 10, "Rivière", 450.0, "Herbivore"},
    {8, "Alex", "Lion", 7, "Savane", 200.0, "Carnivore"},
    {9, "Julien", "Lémurien", 2, "Jungle", 12.5, "Herbivore"},
    {10, "Melman", "Girafe", 9, "Savane", 390.8, "Herbivore"},
    {11, "Timon", "Suricate", 2, "Désert", 1.2, "Omnivore"},
    {12, "Pumbaa", "Phacochère", 5, "Savane", 120.0, "Omnivore"},
    {13, "Scar", "Lion", 11, "Savane", 210.4, "Carnivore"},
    {14, "Kaa", "Serpent", 6, "Jungle", 45.0, "Carnivore"},
    {15, "Iko", "Perroquet", 4, "Jungle", 2.1, "Herbivore"},
    {16, "Dumbo", "Éléphant", 3, "Savane", 320.0, "Herbivore"},
    {17, "Kiki", "Chien sauvage", 7, "Savane", 25.0, "Carnivore"},
    {18, "Donatello", "Tortue", 40, "Rivière", 90.5, "Herbivore"},
    {19, "Polly", "Oiseau", 5, "Jungle", 1.5, "Herbivore"},
    {20, "Kong", "Gorille", 13, "Jungle", 180.0, "Omnivore"}};

int Clear()
{
    int user;
    char newline;
    if (scanf("%d%c", &user, &newline) == 2 && newline == '\n')
    {
        return user;
    }
    else
    {
        while (getchar() != '\n')
            ;
        return -1;
    }
}

void Nline()
{
    while (getchar() != '\n')
        ;
}

int Menu()
{
    printf("\n_____________________/Zooo\\______________________\n");
    printf("|                                               |\n");
    printf("|____________________|Menu|_____________________|\n");
    printf("|                                               |\n");
    printf("|[1]-Ajouter un animal                          |\n");
    printf("|                                               |\n");
    printf("|[2]-Afficher les animaux                       |\n");
    printf("|                                               |\n");
    printf("|[3]-Modifier un animal                         |\n");
    printf("|                                               |\n");
    printf("|[4]-Supprimer un animal                        |\n");
    printf("|                                               |\n");
    printf("|[5]-Rechercher un animal                       |\n");
    printf("|                                               |\n");
    printf("|[6]-Statistiques.                              |\n");
    printf("|                                               |\n");
    printf("|[7]-Save In a CVS File.                        |\n");
    printf("|                                               |\n");
    printf("|[8]-Quit.                                      |\n");
    printf("|_______________________________________________|\n");
    printf("\nEntre un choix: ");

    user_input = Clear();

    if (user_input == -1)
    {
        return 0;
    }
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

void Sorting(int choix)
{
    struct zoo temp;
    for (int i = 0; i < nb_animal - 1; i++)
    {
        for (int j = 0; j < nb_animal - i - 1; j++)
        {
            int swap = 0;

            if (choix == 0)
                swap = strcmp(Zoon[j].nom, Zoon[j + 1].nom) > 0;
            else if (choix == 1)
                swap = Zoon[j].ID > Zoon[j + 1].ID;
            else if (choix == 2)
                swap = Zoon[j].age > Zoon[j + 1].age;
            else if (choix == 3)
                swap = strcmp(Zoon[j].habitat, Zoon[j + 1].habitat) > 0;
            else if (choix == 4)
                swap = strcmp(Zoon[j].Diet, Zoon[j + 1].Diet) > 0; // NEW

            if (swap)
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
    printf("|                                               |\n");
    printf("|[1]-Ajouter Simple                             |\n");
    printf("|                                               |\n");
    printf("|[2]-Ajouter multiplue                          |\n");
    printf("|                                               |\n");
    printf("|[3]-Back To the Main Menu                      |\n");
    printf("|_______________________________________________|\n");
    printf("\nEntre un choix:");

    chose = Clear();
    if (chose == -1)
    {
    }

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
    printf("============== Animal Number [%d] ==============\n", i + 1);
    printf(RED "Name:      %-15s\n" RESET, Zoon[i].nom);
    printf(YELLOW "Species:   %-18s | Habitat: %-12s\n" RESET, Zoon[i].espece, Zoon[i].habitat);
    printf(GREEN "Weight:    %-7.2f | Age: %-3d | ID: %-3d\n" RESET, Zoon[i].poids, Zoon[i].age, Zoon[i].ID);
    printf(GREEN "Diet:      %-15s\n" RESET, Zoon[i].Diet);
    if (Zoon[i].age > 10)
    {
        printf(RED "Warning\nOld Age\n" RESET);
    }
    printf("===============================================\n");
}

void Aff()
{
    int chose;
    printf("\n_____________________/Zooo\\______________________\n");
    printf("|                                               |\n");
    printf("|____________________| Menu |___________________|\n");
    printf("|                                               |\n");
    printf("|[1]- Display by Name                           |\n");
    printf("|                                               |\n");
    printf("|[2]- Display by ID                             |\n");
    printf("|                                               |\n");
    printf("|[3]- Display by Age                            |\n");
    printf("|                                               |\n");
    printf("|[4]- Display by Habitat                        |\n");
    printf("|                                               |\n");
    printf("|[5]- Display by Diet                           |\n");
    printf("|                                               |\n");
    printf("|[6]- Back To the Main Menu                     |\n");
    printf("|_______________________________________________|\n");
    printf("\nEnter your choice: ");
    chose = Clear();
    if (chose == -1)
    {
    }
    if (chose >= 1 && chose <= 4)
    {
        if (nb_animal == 0)
        {
            printf(RED "No animals in the zoo.\n" RESET);
            return;
        }

        Sorting(chose - 1);
        for (int i = 0; i < nb_animal; i++)
            aff(i);
    }
    else if (chose == 5)
    {
        if (nb_animal == 0)
        {
            printf(RED "No animals in the zoo.\n" RESET);
            return;
        }
        char looking_for[50];
        printf("\nWhat Habitat you looking for : ");
        scanf("%s", looking_for);
        Nline();
        printf("\n");
        for (int i = 0; i < nb_animal; i++)
        {
            if (strcmp(Zoon[i].habitat, looking_for) == 0)
                aff(i);
        }
    }
    else if (chose == 6)
    {
        return;
    }
    else
    {
        printf(RED "Invalid choice!\n" RESET);
    }

    printf("\n<================================\n");
}

void Search()
{
    int choice;
    printf("\n____________________|Search Menu|_________________\n");
    printf("|                                                 |\n");
    printf("|[1]-Search by ID                                 |\n");
    printf("|                                                 |\n");
    printf("|[2]-Search by Name                               |\n");
    printf("|                                                 |\n");
    printf("|[3]-Search by Species                            |\n");
    printf("|                                                 |\n");
    printf("|[4]-Back to Main Menu                            |\n");
    printf("|_________________________________________________|\n");
    printf("Enter a choice: ");
    choice = Clear();
    if (choice == -1)
    {
    }
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
            printf(RED "No animal found with ID %d\n" RESET, id);
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
            printf(RED "No animal found with name %s\n" RESET, name);
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
            printf(RED "No animal found with species %s\n" RESET, species);
    }
    printf("\n<================================\n");
}

void Supprimer()
{
    if (nb_animal == 0)
    {
        printf(RED "There are no animals to delete.\n" RESET);
        return;
    }

    int id;
    printf("Enter the ID of the animal to delete: ");
    id = Clear();
    if (id == -1)
    {
    }
    int found;
    int is_found = 0;

    for (int i = 0; i < nb_animal; i++)
    {
        if (Zoon[i].ID == id)
        {
            found = i;
            is_found = 1;
            break;
        }
    }

    if (!is_found)
    {
        printf(RED "No animal found with This ID \n" RESET);
        return;
    }

    printf("Animal to be deleted:\n");
    aff(found);

    char confirm;
    printf("Are you sure you want to delete this animal? (y/n): ");
    scanf(" %c", &confirm);

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
        printf(RED "\nDeletion cancelled.\n" RESET);
    }
    printf("\n<================================\n");
}

void CountHabitat()
{
    struct Swap temp;

    int flag = 0;
    int count = 0;

    for (int i = 0; i < nb_animal; i++)
    {
        count = 1;
        for (int j = i + 1; j < nb_animal; j++)
        {

            if (strcmp(Zoon[i].espece, Zoon[j].espece) == 0)
            {
                count++;
            }
        }
        if (count > flag)
        {
            flag = count;
            strcpy(temp.espece, Zoon[i].espece);
            temp.count = flag;
        }
    }
    printf("===============================================\n");
    printf(YELLOW "Species:   %-18d | Habitat: %-12s\n" RESET, flag, temp.espece);
    printf("===============================================\n");

    for (int i = 0; i < nb_animal; i++)
    {
        if (strcmp(temp.espece, Zoon[i].espece) == 0)
        {
            aff(i);
        }
    }
}

void Modifier()
{
    int id;
    printf("Enter the ID of the animal to modify: ");
    id = Clear();
    if (id == -1)
    {
    }
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
        printf(RED "No animal found with ID %d\n" RESET, id);
        return;
    }

    printf("Modifying animal:\n");
    aff(found);

    printf("Enter new name: ");
    scanf("%s", Zoon[found].nom);
    Nline();
    printf("Enter new age: ");
    scanf("%d", &Zoon[found].age);
    Nline();
    printf("Enter new habitat: ");
    scanf("%s", Zoon[found].habitat);
    Nline();

    printf("\nAnimal modified successfully.\n");
    printf("\n<================================\n");
}

void Stats()
{
    if (nb_animal == 0)
    {
        printf(RED "No animals in the zoo.\n" RESET);
        return;
    }

    float total_age = 0;
    int min_age = Zoon[0].age;
    int max_age = Zoon[0].age;

    for (int i = 0; i < nb_animal; i++)
    {
        total_age += Zoon[i].age;

        if (Zoon[i].age < min_age)
            min_age = Zoon[i].age;

        if (Zoon[i].age > max_age)
            max_age = Zoon[i].age;
    }

    float Avg_age = total_age / nb_animal;

    printf(" _______________________________________________\n");
    printf("|                                               |\n");
    printf("|               Zoo Statistics                  |\n");
    printf("|_______________________________________________|\n");
    printf("| Total animals   : %-27d|\n", nb_animal);
    printf("| Average age     : %-27.2f|\n", Avg_age);
    printf("|_______________________________________________|\n\n");

    printf(" _______________________________________________\n");
    printf("|                                               |\n");
    printf("|              Youngest Animals                 |\n");
    printf("|_______________________________________________|\n");
    for (int i = 0; i < nb_animal; i++)
    {
        if (Zoon[i].age == min_age)
        {
            aff(i);
        }
    }

    printf(" _______________________________________________\n");
    printf("|                                               |\n");
    printf("|               Oldest Animals                  |\n");
    printf("|_______________________________________________|\n");
    for (int i = 0; i < nb_animal; i++)
    {
        if (Zoon[i].age == max_age)
        {
            aff(i);
        }
    }

    printf(" _______________________________________________\n");
    printf("|                                               |\n");
    printf("|             Habitat Statistics                |\n");
    printf("|_______________________________________________|\n");
    CountHabitat();
}

void File()
{
    FILE *file = fopen("Gestion_Zoo.csv", "w");
    if (file == NULL)
    {
        printf("The file didnt get created\n");
    }
    else
        printf("The file was created successfully\n");
    for (int i = 0; i < nb_animal; i++)
    {
        fprintf(file, "Name:      %s\n", Zoon[i].nom);
        fprintf(file, "Species:   %s | Habitat: %s\n", Zoon[i].espece, Zoon[i].habitat);
        fprintf(file, "Weight:    %.2f | Age: %d | ID: %d\n", Zoon[i].poids, Zoon[i].age, Zoon[i].ID);
        fprintf(file, "Diet:      %s\n", Zoon[i].Diet);
    }

    fclose(file);
}

int main()
{

    while (loop)
    {
        if (nb_animal == 199)
        {
            return 0;
        }
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
            File();
            break;
        case 8:
            loop = 0;
            printf(MAGENTA "\033[1m~Good Bey~!\033[0m\n" RESET);
            break;

        default:
            printf(RED "\ninvalide input...\n" RESET);
            break;
        }
    }
}
