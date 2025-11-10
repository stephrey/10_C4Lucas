/* 03L02.c : Affichage du resultat d'une addition */
#include <stdio.h>

/* Addition de deux entiers et renvoie du resultat */
int integer_add(int x, int y){
  int result;
  result = x + y;
  return result;
}
int main()
{
	int sum;
  
  sum = integer_add(5,12);
  printf("5 + 12 donne %d. \n", sum);
	return 0;
}


