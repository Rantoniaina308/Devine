#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int nombre, c=0,nombremystere;

int main(){
printf("\n\n-------BIENVENUE--------\n\n");
printf("Ceci est une jeu sur lequel le joueur doit trouver un nombre mystere\n Bonne chance !!!!\n");
printf("Commencez maintenant \n"); 

srand(time(NULL));
nombremystere = rand()%101;
do{
printf("Entrez votre nombre : ");
scanf("%d",&nombre);
if(nombre < nombremystere){
printf("c'est trop petit!\n");
c++;}
else if (nombre > nombremystere){
printf("c'est trop grand\n");
c++;}
else {
printf("Felicitation!!!\n Vous avez trouvee le nombre mystere \n");
printf("Vous avez trouvee en %d coups",c);
}
}while(nombre != nombremystere);

}
