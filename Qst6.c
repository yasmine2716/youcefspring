#include<stdio.h>

int main(){

//Écrivez un programme qui trouve le plus grand nombre dans un tableau d'entiers.
int k,max,entier[5]={20,12,26,16,48};
max=0;
for(k=0;k<5;k++){
if(max<entier[k]){max=entier[k];}
}
printf("Le plus grand nombre est %d",max);
return 0;
}

