/* exe4.c : vitesses de km/h en MPH */
#include <stdio.h>

int main()
{
  //déclaration des variables

  float vitesse_kmh, vitesse_mph;
  const float kmh_mph = 1.609344;

  printf("vitesse en km/h           Vitesse en MPH\n");
  printf("===============           ==============\n");
  vitesse_kmh = 5.0;
  do {
    vitesse_mph = vitesse_kmh * kmh_mph;
    printf("%.2f                      %.2f\n", vitesse_kmh, vitesse_mph);
    vitesse_kmh += 5.0;
  } while (vitesse_kmh <= 35.0);

  return 0;
}
