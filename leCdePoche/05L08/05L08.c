/* 05L08.c : indicateurs de precision */
#include <stdio.h>

main()
{
	int int_num;
  double flt_num;

  int_num = 123;
  flt_num = 123.456789;

  printf("Format entier par defaut :         %d\n", int_num);
  printf("Avec indicateur de precision :     %2.8d\n", int_num);
  printf("Format decimal par defaut :        %f\n", flt_num);
  printf("Avec indicateur de precision :     %-10.2f\n", flt_num);

	return 0;
}
