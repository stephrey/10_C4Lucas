/* 05L01.c : lecture d'un caractere entre au clavier */
#include <stdio.h>

main()
{
	int ch;

  printfa("Tapez un caractere : \n");
  ch = getc(stdin);
  printf("Le caractere saisi est : %c\n", ch);
  
	return 0;
}
