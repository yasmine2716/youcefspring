#include<stdio.h>

// Demander à l'utilisateur de saisir un nombre

void main(){
int nombre,resultat;
printf("Donner le nombre : ");
scanf("%d",&nombre);
// Vérifier si le troisième nombre est pair ou impair
resultat=nombre%2;
if(resultat==0){printf("%d est pair",nombre);}
else{printf("%d est impair",nombre);}
}
