#include <stdio.h>

int main() {
    double nombre1, nombre2, somme;

    // Demander à l'utilisateur de saisir le premier nombre
    printf("Entrez le premier nombre : ");
    scanf("%lf", &nombre1);

    // Demander à l'utilisateur de saisir le deuxième nombre
    printf("Entrez le deuxième nombre : ");
    scanf("%lf", &nombre2);

    // Calculer la somme des deux nombres
    somme = nombre1 + nombre2;

    // Afficher le résultat
    printf("La somme de %.2lf et %.2lf est égale à %.2lf\n", nombre1, nombre2, somme);

    return 0;
}
