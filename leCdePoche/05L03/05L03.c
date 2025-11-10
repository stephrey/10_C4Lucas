/* 05L03.c : affichage d'un caractere a l'aide de putc() */
#include <stdio.h>

main()
{
	int ch;

  ch = 65;

  printf("Caractere correspondant au code ASCII 65 : \n");
  putc(ch, stdout);
  
	return 0;
}
