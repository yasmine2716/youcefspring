#include<stdio.h>

//Écrivez un programme qui demande à l'utilisateur de saisir un nombre entre 1 et 7, puis affiche le jour de la semaine correspondant.

int main(){
int nombre;
printf("Saisir un nombre entre 1 et 7 : ");
scanf("%d",&nombre);

//affiche le jour de la semaine 
if(nombre<1||nombre>7){printf("Erreur");}
 else 
  if(nombre==1){printf("Le jour correspondant est Samedi");}
   else
    if(nombre==2){printf("Le jour correspondant est Dimanche");}
     else
      if(nombre==3){printf("Le jour correspondant est Lundi");}
       else
        if(nombre==4){printf("Le jour correspondant est Mardi");}
         else
          if(nombre==5){printf("Le jour correspondant est Mercredi");}
           else
            if(nombre==6){printf("Le jour correspondant est Jeudi");}
             else {printf("Le jour correspondant est Vendredi");}
return 0;
}
