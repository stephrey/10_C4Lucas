/* exe1.c : lire le jour de la semaine et retourné une chaine de caractere correspondant au jour saisi */
#include <stdio.h>

int main()
{
  //déclaration des variables

  int jour;

  printf("Entrer le numéro du jour dans une semaine : ");
  scanf("%d", &jour);

  switch(jour){

    //si le jour == 1
    case 1:
      printf("C'est lundi\n");
      break;
      
    //si le jour == 2
    case 2:
      printf("C'est mardi\n");
      break;

    //si le jour == 3
    case 3:
      printf("C'est mercredi\n");
      break;

    //si le jour == 4
    case 4:
      printf("C'est jeudi\n");
      break;

    //si le jour == 5
    case 5:
      printf("C'est vendredi\n");
      break;

    //si le jour == 6
    case 6:
      printf("C'est samedi\n");
      break;

    //si le jour == 7
    case 7:
      printf("C'est dimanche\n");
      break;
      
    //si le jour n'est pas dans l'interval 1 a 7
    default:
      printf("impossible de donner le jour, vous devez saisir un nombre entre 1 et 7!\n");
      break;
    }

  return 0;
}
