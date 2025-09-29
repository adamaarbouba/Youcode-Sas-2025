#include <stdio.h>
#include <string.h>

struct First_Struct
{
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct First_Struct person;

    strcpy(person.nom, "Adam");

    printf("My string: %s\n", person.nom);

    return 0;
}   