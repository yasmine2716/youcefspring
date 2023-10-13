#include<stdio.h>

//Écrivez une fonction qui calcule la factorielle d'un nombre.

int main(){
int nombre,resultat;
printf("Donner le nombre : ");
scanf("%d",&nombre);
resultat=nombre;
while(nombre>1){
 resultat=resultat*(nombre-1);
 nombre=nombre-1;
}
printf("Le factoriel est : %d",resultat);
return 0;
}
