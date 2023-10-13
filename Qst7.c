 #include <stdio.h>

int main() {
int i,j;

 // Définir une matrice (tableau 2D) d'entiers
    int matrice[3][3];
    // remplir la matrice
    for (i=0;i<3; i++) {
        for(j=0; j<3; j++) {
            printf("entrez la valeur pour la matrice [%d][%d] :", i ,j);
            scanf("%d", &matrice[i][j]);
        }
    }
return 0;
}    
    
