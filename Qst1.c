#include <stdio.h>

int main() {
    char nom[50]; // Déclarer un tableau de caractères pour stocker le nom

    // Demander à l'utilisateur son nom
    printf("Entrez votre nom : ");
    scanf("%s", nom);

    // Afficher un message de bienvenue avec le nom
    printf("Bienvenue, %s !\n", nom);

    return 0;
}


