#include <stdio.h>

int main() {

    int tableau[5];

    // remplir le tableau en utilisant une boucle
    for (int i = 0;i<5; i++) {
        printf("entrez la valeur pour l'element %d : ",i);
        scanf("%d", &tableau[i]);
    }

    printf("Les valeurs du tableau sont : \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", tableau[i]);
    }
return 0;
}
