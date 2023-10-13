#include<stdio.h>

//Créez une fonction qui prend un tableau d'entiers et renvoie la somme de ses éléments
int main(){
int sum,i,taille,entier[100];
printf("Donner la taille du tableau : ");
scanf("%d",&taille);
for(i=1;i<=taille;i++){
printf("nombre%d = ",i);
scanf("%d",&entier[i]);
}
sum=0;
for(i=1;i<=taille;i++){
sum=sum+entier[i];
}
printf("La somme est : %d",sum);
return 0;
}
