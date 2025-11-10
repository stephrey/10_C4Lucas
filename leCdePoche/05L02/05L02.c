/* 05L02.c : lecture de la saisie utilisateur à l'aide de getchar() */
#include <stdio.h>

main()
{
	int ch1, ch2;

  printf("Tapez deux caracteres : \n");
  ch1 = getc(stdin);
  ch2 = getchar();
  printf("Premier caractere saisi : %c\n", ch1);
  printf("Deuxieme caractere saisi : %c\n", ch2);
  
	return 0;
}
