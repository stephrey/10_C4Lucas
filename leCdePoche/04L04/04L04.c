/* 04L04.c : Division entiere et division en virgules flotante */
#include <stdio.h>

main()
{
	int int_num1, int_num2, int_num3;     /* Declaration de varianbles entiere */
  float flt_num1, flt_num2, flt_num3;   /* Declaration de varianbles en virgule flottante */
  
  int_num1 = 32 / 10;                   /* Diviseur et dividende entiers */
  flt_num1 = 32 / 10;
  int_num2 = 32.0 / 10;                 /* Diviseur entier */
  flt_num2 = 32.0 / 10;
  int_num3 = 32 / 10.0;                 /* Dividende entier */
  flt_num3 = 32 / 10.0;

  printf("La division entiere de 32 par 10 donne : %d\n", int_num1);
  printf("La division decimale de 32 par 10 donne : %f\n", flt_num1);
  printf("La division entiere de 32.0 par 10 donne : %d\n", int_num2);
  printf("La division decimale de 32.0 par 10 donne : %f\n", flt_num2);
  printf("La division entiere de 32 par 10.0 donne : %d\n", int_num3);
  printf("La division decimale de 32 par 10.0 donne : %f\n", flt_num3);
  
	return 0;
}
