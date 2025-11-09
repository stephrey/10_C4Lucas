/* exe2.c : lire le jour de la semaine et retourner une chaine de caractere correspondant au jour saisi */
#include <stdio.h>

int main()
{
  //déclaration des variables

  int mois;

  printf("Entrer le numéro du mois : ");
  scanf("%d", &mois);

  switch(mois){

    //si le mois faite 31 jours
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      printf("Le mois fait 31 jours\n");
      break;
      
    //si le mois fait 30 jours
    case 4:
    case 6:
    case 9:
    case 11:
      printf("Le mois fait 30 jours\n");
      break;

    //si le mois fait 28 ou 29 jours
    case 2:
      printf("Le mois fait 28 ou 29 jours\n");
      break;
      
    //si le mois n'est pas de 1 à 12
    default:
      printf("Ce mois ci n'est pas connu");
  }

  return 0;
}
