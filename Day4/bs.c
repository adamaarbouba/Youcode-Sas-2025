
#include <stdio.h>

int rechercheDichotomique(int tableau[], int taille, int valeur) {
    int debut = 0, fin = taille - 1;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;

        if (tableau[milieu] == valeur) {
            return milieu; // Retourne l'indice si trouvé
        } else if (tableau[milieu] < valeur) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }
    return -1; // Retourne -1 si non trouvé
}

int main() {
    int tableau[] = {10, 20, 30, 40, 50};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int valeur = 40;

    int resultat = rechercheDichotomique(tableau, taille, valeur);
    if (resultat != -1) {
        printf("Valeur trouvée à l'indice %d\n", resultat);
    } else {
        printf("Valeur non trouvée\n");
    }
    return 0;
}
